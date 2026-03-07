__int64 __fastcall DirectComposition::CArithmeticCompositeEffectMarshaler::SetFloatProperty(
        DirectComposition::CArithmeticCompositeEffectMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  unsigned int v4; // r8d
  bool v5; // al

  v4 = 0;
  switch ( a2 )
  {
    case 2u:
      if ( *((float *)this + 28) != a3 )
      {
        *((float *)this + 28) = a3;
        goto LABEL_15;
      }
      goto LABEL_13;
    case 3u:
      if ( *((float *)this + 29) != a3 )
      {
        *((float *)this + 29) = a3;
        goto LABEL_15;
      }
      goto LABEL_13;
    case 4u:
      if ( *((float *)this + 30) != a3 )
      {
        *((float *)this + 30) = a3;
        goto LABEL_15;
      }
LABEL_13:
      v5 = 0;
LABEL_16:
      *a4 = v5;
      return v4;
    case 5u:
      if ( *((float *)this + 31) != a3 )
      {
        *((float *)this + 31) = a3;
LABEL_15:
        v5 = 1;
        goto LABEL_16;
      }
      goto LABEL_13;
  }
  return (unsigned int)DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
}
