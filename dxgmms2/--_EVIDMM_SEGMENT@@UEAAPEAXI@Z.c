/*
 * XREFs of ??_EVIDMM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0032940
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDMM_SEGMENT@@UEAA@XZ @ 0x1C00FC3B0 (--1VIDMM_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_SEGMENT *__fastcall VIDMM_SEGMENT::`vector deleting destructor'(VIDMM_SEGMENT *P, char a2)
{
  VIDMM_SEGMENT::~VIDMM_SEGMENT(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
