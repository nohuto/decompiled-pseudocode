void __fastcall DXGK_VIRTUAL_GPU_PARAV::~DXGK_VIRTUAL_GPU_PARAV(DXGK_VIRTUAL_GPU_PARAV *this)
{
  CDriverStoreCopy *v2; // rcx

  *(_QWORD *)this = &DXGK_VIRTUAL_GPU_PARAV::`vftable';
  DXGADAPTER::ReleaseReference(*((DXGADAPTER **)this + 2));
  v2 = (CDriverStoreCopy *)*((_QWORD *)this + 42);
  if ( v2 )
    CDriverStoreCopy::`scalar deleting destructor'(v2);
  operator delete(*((void **)this + 29));
  *(_QWORD *)this = &DXGK_VIRTUAL_GPU::`vftable';
}
