/*
 * XREFs of RtlIsPackageSid @ 0x1405DAD60
 * Callers:
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405DAB30 (ObpVerifyAccessToBoundaryEntry.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1406EF370 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140407830 (RtlCompareMemory.c)
 */

BOOLEAN __cdecl RtlIsPackageSid(PSID Sid)
{
  return *((_BYTE *)Sid + 1) >= 2u
      && *(_BYTE *)Sid == 1
      && RtlCompareMemory((char *)Sid + 2, &RtlpAppPackageAuthority, 6uLL) == 6
      && *((_DWORD *)Sid + 2) == 2;
}
