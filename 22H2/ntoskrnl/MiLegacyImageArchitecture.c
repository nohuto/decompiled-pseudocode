/*
 * XREFs of MiLegacyImageArchitecture @ 0x14020EC88
 * Callers:
 *     MiCreateImageFileMap @ 0x1406A8928 (MiCreateImageFileMap.c)
 *     MiVerifyImageHeader @ 0x1406A9074 (MiVerifyImageHeader.c)
 *     MiRelocateImage @ 0x1406A9460 (MiRelocateImage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiLegacyImageArchitecture(__int16 a1)
{
  return a1 == 332 || a1 == -31132;
}
