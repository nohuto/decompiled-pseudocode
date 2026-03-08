/*
 * XREFs of RtlIsPackageSid @ 0x140740AA4
 * Callers:
 *     NtCreateLowBoxToken @ 0x14069D520 (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140740870 (ObpVerifyAccessToBoundaryEntry.c)
 * Callees:
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
