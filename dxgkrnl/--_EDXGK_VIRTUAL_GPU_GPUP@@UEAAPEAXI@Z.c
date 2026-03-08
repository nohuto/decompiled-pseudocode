/*
 * XREFs of ??_EDXGK_VIRTUAL_GPU_GPUP@@UEAAPEAXI@Z @ 0x1C005A4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

DXGK_VIRTUAL_GPU_GPUP *__fastcall DXGK_VIRTUAL_GPU_GPUP::`vector deleting destructor'(
        DXGK_VIRTUAL_GPU_GPUP *this,
        char a2)
{
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
