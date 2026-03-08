/*
 * XREFs of ??_GVIDMM_APERTURE_SEGMENT@@UEAAPEAXI@Z @ 0x1C00324E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDMM_APERTURE_SEGMENT@@UEAA@XZ @ 0x1C00F7F14 (--1VIDMM_APERTURE_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_APERTURE_SEGMENT *__fastcall VIDMM_APERTURE_SEGMENT::`scalar deleting destructor'(
        VIDMM_APERTURE_SEGMENT *P,
        char a2)
{
  VIDMM_APERTURE_SEGMENT::~VIDMM_APERTURE_SEGMENT(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
