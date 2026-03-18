/*
 * XREFs of HalpMcUpdateUnlock @ 0x14051BD84
 * Callers:
 *     HalpPowerStateCallback @ 0x1403B0040 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140504D00 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140934BE0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x140A30AA0 (MmUnlockPreChargedPagedPool.c)
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
