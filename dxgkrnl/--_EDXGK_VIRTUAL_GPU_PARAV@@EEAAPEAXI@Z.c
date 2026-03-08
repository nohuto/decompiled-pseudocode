/*
 * XREFs of ??_EDXGK_VIRTUAL_GPU_PARAV@@EEAAPEAXI@Z @ 0x1C005A960
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ @ 0x1C0369FE0 (--1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ.c)
 */

DXGK_VIRTUAL_GPU_PARAV *__fastcall DXGK_VIRTUAL_GPU_PARAV::`vector deleting destructor'(
        DXGK_VIRTUAL_GPU_PARAV *P,
        char a2)
{
  DXGK_VIRTUAL_GPU_PARAV::~DXGK_VIRTUAL_GPU_PARAV(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0);
  return P;
}
