/*
 * XREFs of KiComputePriorityFloor @ 0x1402B0E0C
 * Callers:
 *     KiDeferredReadySingleThread @ 0x14023A2B0 (KiDeferredReadySingleThread.c)
 *     KeYieldExecution @ 0x1402469D0 (KeYieldExecution.c)
 *     KiDirectSwitchThread @ 0x1402B1870 (KiDirectSwitchThread.c)
 *     KiRemoveBoostThread @ 0x1402BB220 (KiRemoveBoostThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x14034DCD8 (KiUpdateVPBackingThreadPriority.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056E73C (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

char __fastcall KiComputePriorityFloor(__int64 a1, char a2)
{
  unsigned int v2; // eax
  char v3; // r9

  v2 = *(_DWORD *)(a1 + 856);
  v3 = a2;
  if ( v2 )
  {
    _BitScanReverse(&v2, v2);
    if ( a2 < (char)v2 )
      return v2;
  }
  return v3;
}
