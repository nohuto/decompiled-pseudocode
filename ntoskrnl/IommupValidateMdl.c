/*
 * XREFs of IommupValidateMdl @ 0x140524838
 * Callers:
 *     IommuMapIdentityRange @ 0x140523A70 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x140523C80 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x140524370 (IommuUnmapIdentityRange.c)
 *     IommupProcessPhysicalAddress @ 0x140524798 (IommupProcessPhysicalAddress.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
