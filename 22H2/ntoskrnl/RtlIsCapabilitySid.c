/*
 * XREFs of RtlIsCapabilitySid @ 0x1407F3128
 * Callers:
 *     RtlCheckTokenCapability @ 0x14036FFE0 (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
