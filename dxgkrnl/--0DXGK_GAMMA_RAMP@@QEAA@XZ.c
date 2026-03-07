DXGK_GAMMA_RAMP *__fastcall DXGK_GAMMA_RAMP::DXGK_GAMMA_RAMP(DXGK_GAMMA_RAMP *this)
{
  DXGK_GAMMA_RAMP *result; // rax

  *(_QWORD *)this = &ReferenceCounted::`vftable';
  *(_QWORD *)this = &DXGK_GAMMA_RAMP::`vftable';
  *((_WORD *)this + 20) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  result = this;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 4) = 1;
  return result;
}
