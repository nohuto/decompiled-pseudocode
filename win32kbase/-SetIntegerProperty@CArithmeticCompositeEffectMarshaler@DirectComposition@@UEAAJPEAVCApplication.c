__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetIntegerProperty(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  unsigned int v5; // r10d

  v5 = 0;
  if ( a3 == 1 )
  {
    *((_DWORD *)this + 32) = a4;
    *a5 = 1;
  }
  else
  {
    return (unsigned int)DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  }
  return v5;
}
