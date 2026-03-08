/*
 * XREFs of ??_GVIDMM_SYSMEM_SEGMENT@@UEAAPEAXI@Z @ 0x1C0032490
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ @ 0x1C00F751C (--1VIDMM_SYSMEM_SEGMENT@@UEAA@XZ.c)
 */

VIDMM_SYSMEM_SEGMENT *__fastcall VIDMM_SYSMEM_SEGMENT::`scalar deleting destructor'(VIDMM_SYSMEM_SEGMENT *P, char a2)
{
  VIDMM_SYSMEM_SEGMENT::~VIDMM_SYSMEM_SEGMENT(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
