/*
 * XREFs of MiLegacyImageArchitecture @ 0x140368540
 * Callers:
 *     MiCreateImageFileMap @ 0x1407F1C28 (MiCreateImageFileMap.c)
 *     MiVerifyImageHeader @ 0x1407F2374 (MiVerifyImageHeader.c)
 *     MiRelocateImage @ 0x1407F2760 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
