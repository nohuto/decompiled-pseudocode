/*
 * XREFs of KiComputePriorityFloor @ 0x140229E28
 * Callers:
 *     KiRemoveBoostThread @ 0x140229890 (KiRemoveBoostThread.c)
 *     KeYieldExecution @ 0x140256BE0 (KeYieldExecution.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402E1338 (KiUpdateVPBackingThreadPriority.c)
 *     KiDirectSwitchThread @ 0x1403414A0 (KiDirectSwitchThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x14056C0C8 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
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
