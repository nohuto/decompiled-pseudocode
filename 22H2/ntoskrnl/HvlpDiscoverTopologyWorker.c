/*
 * XREFs of HvlpDiscoverTopologyWorker @ 0x140941458
 * Callers:
 *     HvlpDiscoverTopologyLocal @ 0x140941440 (HvlpDiscoverTopologyLocal.c)
 *     HvlpDiscoverTopologyComplete @ 0x140B940B4 (HvlpDiscoverTopologyComplete.c)
 * Callees:
 *     HvlpDiscoverTopologyAmd @ 0x140B93F94 (HvlpDiscoverTopologyAmd.c)
 *     HvlpDiscoverTopologyIntel @ 0x140B941D0 (HvlpDiscoverTopologyIntel.c)
 */

__int64 HvlpDiscoverTopologyWorker()
{
  __int64 result; // rax

  if ( HvlpCpuVendor == 1 )
    return HvlpDiscoverTopologyAmd();
  if ( HvlpCpuVendor == 2 )
    return HvlpDiscoverTopologyIntel();
  return result;
}
