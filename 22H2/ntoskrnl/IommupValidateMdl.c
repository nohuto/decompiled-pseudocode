/*
 * XREFs of IommupValidateMdl @ 0x140526D68
 * Callers:
 *     IommuMapIdentityRange @ 0x140525FA0 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1405261B0 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x1405268A0 (IommuUnmapIdentityRange.c)
 *     IommupProcessPhysicalAddress @ 0x140526CC8 (IommupProcessPhysicalAddress.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
