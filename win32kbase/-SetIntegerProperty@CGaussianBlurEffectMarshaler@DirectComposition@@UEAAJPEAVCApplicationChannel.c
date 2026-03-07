__int64 __fastcall DirectComposition::CGaussianBlurEffectMarshaler::SetIntegerProperty(
        DirectComposition::CGaussianBlurEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  if ( a3 == 1 )
  {
    *((_DWORD *)this + 29) = a4;
  }
  else
  {
    if ( a3 != 2 )
      return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
    *((_DWORD *)this + 30) = a4;
  }
  *a5 = 1;
  return 0LL;
}
