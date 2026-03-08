/*
 * XREFs of ExpSetLicenseTamperState @ 0x140607004
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14081A5DC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExSetLicenseTamperState @ 0x1409F6950 (ExSetLicenseTamperState.c)
 *     sub_1409F6C60 @ 0x1409F6C60 (sub_1409F6C60.c)
 *     SLUpdateLicenseDataInternal @ 0x1409F78B4 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpSetKernelDataProtection @ 0x14075B0D0 (ExpSetKernelDataProtection.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ExpSetKernelDataProtection(a1, v3, 2LL, 0LL);
}
