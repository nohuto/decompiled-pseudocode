__int64 __fastcall DirectComposition::CShadowEffectMarshaler::Initialize(
        DirectComposition::CShadowEffectMarshaler *this)
{
  __int64 result; // rax

  result = DirectComposition::CFilterEffectMarshaler::Initialize(this);
  if ( (int)result >= 0 )
  {
    result = 0LL;
    *((_DWORD *)this + 28) = 1077936128;
    *(_OWORD *)((char *)this + 116) = xmmword_1C02A5EB8;
  }
  *((_DWORD *)this + 33) = 0;
  return result;
}
