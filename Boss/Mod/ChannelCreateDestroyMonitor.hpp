#ifndef BOSS_MOD_CHANNELCREATEDESTROYMONITOR_HPP
#define BOSS_MOD_CHANNELCREATEDESTROYMONITOR_HPP

#include"Ln/NodeId.hpp"
#include<set>

namespace S { class Bus; }

namespace Boss { namespace Mod {

/** class Boss::Mod::ChannelCreateDestroyMonitor
 *
 * @brief module that monitors channel creation and
 * destruction events, and informs other modules of
 * these events.
 */
class ChannelCreateDestroyMonitor {
private:
	S::Bus& bus;
	bool initted;
	std::set<Ln::NodeId> channeled;

	void start();

public:
	ChannelCreateDestroyMonitor() =delete;
	ChannelCreateDestroyMonitor(ChannelCreateDestroyMonitor&&) =delete;
	ChannelCreateDestroyMonitor(ChannelCreateDestroyMonitor const&)
		=delete;

	explicit
	ChannelCreateDestroyMonitor(S::Bus& bus_
				   ) : bus(bus_)
				     , initted(false)
				     {
		start();
	}
};

}}

#endif /* !defined(BOSS_MOD_CHANNELCREATEDESTROYMONITOR_HPP) */
