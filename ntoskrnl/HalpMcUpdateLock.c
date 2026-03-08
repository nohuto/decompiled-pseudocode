/*
 * XREFs of HalpMcUpdateLock @ 0x1405197FC
 * Callers:
 *     HalpPowerStateCallback @ 0x1403AB2F0 (HalpPowerStateCallback.c)
 *     HalStartDynamicProcessor @ 0x140502C20 (HalStartDynamicProcessor.c)
 *     HalpLoadMicrocode @ 0x140931BD0 (HalpLoadMicrocode.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MmLockPreChargedPagedPool @ 0x140A2DC90 (MmLockPreChargedPagedPool.c)
 */

__int64 __fastcall HalpMcUpdateLock(__int64 a1, __int64 a2)
{
  PVOID v2; // rcx
  unsigned int v3; // ebx

  v2 = HalpMcUpdateData;
  v3 = 0;
  if ( HalpMcUpdateData && HalpMcUpdateDataCharged )
    MmLockPreChargedPagedPool(HalpMcUpdateData, (unsigned int)HalpMcUpdateDataSize);
  if ( HalpMcUpdateLockFunc )
  {
    LOBYTE(v2) = 1;
    LOBYTE(a2) = HalpMcUpdateData == 0LL;
    return (unsigned int)HalpMcUpdateLockFunc(v2, a2);
  }
  return v3;
}
