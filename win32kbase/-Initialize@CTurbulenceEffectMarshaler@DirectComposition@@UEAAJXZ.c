__int64 __fastcall DirectComposition::CTurbulenceEffectMarshaler::Initialize(
        DirectComposition::CTurbulenceEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 14) = 0LL;
    *((_DWORD *)this + 30) = 1008981770;
    result = 0LL;
    *(_QWORD *)((char *)this + 124) = 1008981770LL;
    *((_DWORD *)this + 33) = 0;
  }
  *((_QWORD *)this + 17) = 1LL;
  *((_QWORD *)this + 18) = 0LL;
  return result;
}
