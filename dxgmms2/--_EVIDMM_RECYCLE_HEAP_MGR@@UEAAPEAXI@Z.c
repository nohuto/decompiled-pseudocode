/*
 * XREFs of ??_EVIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXI@Z @ 0x1C00179D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C0095F98 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 */

VIDMM_RECYCLE_HEAP_MGR *__fastcall VIDMM_RECYCLE_HEAP_MGR::`vector deleting destructor'(
        VIDMM_RECYCLE_HEAP_MGR *P,
        char a2)
{
  VIDMM_RECYCLE_HEAP_MGR::~VIDMM_RECYCLE_HEAP_MGR(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
