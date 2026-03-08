/*
 * XREFs of HalpMcUpdateUnlock @ 0x140519854
 * Callers:
 *     HalpPowerStateCallback @ 0x1403AB2F0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140502C20 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MmUnlockPreChargedPagedPool @ 0x140A2DD70 (MmUnlockPreChargedPagedPool.c)
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
