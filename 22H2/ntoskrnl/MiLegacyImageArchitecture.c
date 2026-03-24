/*
 * XREFs of MiLegacyImageArchitecture @ 0x14035AC3C
 * Callers:
 *     MiCreateImageFileMap @ 0x140700CC4 (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x140702D80 (MiRelocateImage.c)
 *     MiVerifyImageHeader @ 0x1407036FC (MiVerifyImageHeader.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
