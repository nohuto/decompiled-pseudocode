__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::Initialize(
        DirectComposition::CColorMatrixEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_OWORD *)this + 7) = _xmm;
    *((_OWORD *)this + 8) = _xmm;
    *((_OWORD *)this + 9) = _xmm;
    *((_OWORD *)this + 10) = _xmm;
    *((_OWORD *)this + 11) = 0LL;
  }
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 48) = 1;
  return result;
}
