#ifndef BOSS_MSG_SETCHANNELFEE_HPP
#define BOSS_MSG_SETCHANNELFEE_HPP

#include"Ln/NodeId.hpp"
#include<cstdint>

namespace Boss { namespace Msg {

/** struct Boss::Msg::SetChannelFee
 *
 * @brief Emit to set the channel fees of a peer node.
 */
struct SetChannelFee {
	Ln::NodeId node;
	std::uint32_t base;
	std::uint32_t proportional;
};

}}

#endif /* !defined(BOSS_MSG_SETCHANNELFEE_HPP) */
