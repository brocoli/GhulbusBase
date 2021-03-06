#ifndef GHULBUS_LIBRARY_INCLUDE_GUARD_BASE_ALLOCATOR_HPP
#define GHULBUS_LIBRARY_INCLUDE_GUARD_BASE_ALLOCATOR_HPP

/** @file
*
* @brief Custom allocators.
* @author Andreas Weis (der_ghulbus@ghulbus-inc.de)
*/
#include <gbBase/config.hpp>

#include <gbBase/Allocator/AllocationStrategyMonotonic.hpp>
#include <gbBase/Allocator/StatefulAllocator.hpp>
#include <gbBase/Allocator/Storage.hpp>

namespace GHULBUS_BASE_NAMESPACE
{
/** Custom memory allocators.
 */
namespace Allocator
{
/** Allocation strategies for use with StatefulAllocator.
 */
namespace AllocationStrategy
{
}
/** Debug Policies for use with an AllocationStrategy.
 */
namespace DebugPolicy
{
}
/** Storage Policies for use with an AllocationStrategy.
 */
namespace Storage
{
}
}
}
#endif
