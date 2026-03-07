DXGK_VIRTUAL_GPU_GPUP *__fastcall DXGK_VIRTUAL_GPU_GPUP::`vector deleting destructor'(
        DXGK_VIRTUAL_GPU_GPUP *this,
        char a2)
{
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0);
  return this;
}
