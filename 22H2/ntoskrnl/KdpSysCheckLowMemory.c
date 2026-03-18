/*
 * XREFs of KdpSysCheckLowMemory @ 0x140AB5C64
 * Callers:
 *     KdSystemDebugControl @ 0x1409721A0 (KdSystemDebugControl.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140AB5A68 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
