__int64 __fastcall DirectComposition::CBlendEffectMarshaler::SetIntegerProperty(
        DirectComposition::CBlendEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 )
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  else
  {
    *a5 = *((_DWORD *)this + 28) != a4;
    *((_DWORD *)this + 28) = a4;
  }
  return v5;
}
