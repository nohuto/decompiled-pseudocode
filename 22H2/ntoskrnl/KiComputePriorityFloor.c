/*
 * XREFs of KiComputePriorityFloor @ 0x140230730
 * Callers:
 *     KiSetPriorityThread @ 0x14022FC10 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KiDirectSwitchThread @ 0x14024C1B0 (KiDirectSwitchThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x140258670 (KiUpdateVPBackingThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x1402C4550 (KiDeferredReadySingleThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputePriorityFloor(__int64 a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  int v4; // r8d

  v2 = *(_DWORD *)(a1 + 856);
  if ( v2 && (_BitScanReverse((unsigned int *)&v4, v2), (char)a2 < v4) )
    return (unsigned __int8)v4;
  else
    return a2;
}
