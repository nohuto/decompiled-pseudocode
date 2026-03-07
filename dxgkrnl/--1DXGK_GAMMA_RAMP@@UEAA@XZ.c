void __fastcall DXGK_GAMMA_RAMP::~DXGK_GAMMA_RAMP(DXGK_GAMMA_RAMP *this)
{
  void *v2; // rcx

  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &DXGK_GAMMA_RAMP::`vftable';
  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
  }
  ReferenceCounted::~ReferenceCounted(this);
}
