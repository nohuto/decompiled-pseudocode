/*
 * XREFs of ??_GVIDMM_PROCESS_HEAP@@UEAAPEAXI@Z @ 0x1C0033BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1VIDMM_PROCESS_HEAP@@UEAA@XZ @ 0x1C0103198 (--1VIDMM_PROCESS_HEAP@@UEAA@XZ.c)
 */

VIDMM_PROCESS_HEAP *__fastcall VIDMM_PROCESS_HEAP::`scalar deleting destructor'(VIDMM_PROCESS_HEAP *P, char a2)
{
  VIDMM_PROCESS_HEAP::~VIDMM_PROCESS_HEAP(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
