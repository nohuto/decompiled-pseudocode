/*
 * XREFs of HalpMcUpdateUnlock @ 0x140382170
 * Callers:
 *     HalpPowerStateCallback @ 0x1403A67F0 (HalpPowerStateCallback.c)
 *     HalpLoadMicrocode @ 0x140866070 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x140774270 (MmUnlockPreChargedPagedPool.c)
 */

__int64 HalpMcUpdateUnlock()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( HalpMcUpdateData && HalpMcUpdateDataCharged )
    MmUnlockPreChargedPagedPool(HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize);
  if ( HalpMcUpdateUnlockFunc )
    return (unsigned int)HalpMcUpdateUnlockFunc();
  return v0;
}
