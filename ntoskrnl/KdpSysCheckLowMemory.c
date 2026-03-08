/*
 * XREFs of KdpSysCheckLowMemory @ 0x140AB1C74
 * Callers:
 *     KdSystemDebugControl @ 0x14096F180 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140AB1A78 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
