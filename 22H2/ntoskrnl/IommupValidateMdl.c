/*
 * XREFs of IommupValidateMdl @ 0x1404DAD24
 * Callers:
 *     IommuMapIdentityRange @ 0x1404DA710 (IommuMapIdentityRange.c)
 *     IommuMapLogicalRange @ 0x1404DA8D0 (IommuMapLogicalRange.c)
 *     IommuUnmapIdentityRange @ 0x1404DABA0 (IommuUnmapIdentityRange.c)
 * Callees:
 *     <none>
 */

bool __fastcall IommupValidateMdl(__int64 a1)
{
  return (*(_DWORD *)(a1 + 44) & 0xFFF) == 0 && (*(_DWORD *)(a1 + 40) & 0xFFF) == 0;
}
