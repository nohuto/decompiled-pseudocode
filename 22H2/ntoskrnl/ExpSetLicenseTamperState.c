/*
 * XREFs of ExpSetLicenseTamperState @ 0x140609454
 * Callers:
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x140811DEC (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     ExSetLicenseTamperState @ 0x1409F97E0 (ExSetLicenseTamperState.c)
 *     sub_1409F9AF0 @ 0x1409F9AF0 (sub_1409F9AF0.c)
 *     SLUpdateLicenseDataInternal @ 0x1409FA744 (SLUpdateLicenseDataInternal.c)
 * Callees:
 *     ExpSetKernelDataProtection @ 0x1407AEDE0 (ExpSetKernelDataProtection.c)
 */

__int64 __fastcall ExpSetLicenseTamperState(__int64 a1, int a2)
{
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  *(_DWORD *)(a1 + 46988) = a2;
  memset(v3, 0, 48);
  v3[2] = a2;
  return ExpSetKernelDataProtection(a1, v3, 2LL, 0LL);
}
