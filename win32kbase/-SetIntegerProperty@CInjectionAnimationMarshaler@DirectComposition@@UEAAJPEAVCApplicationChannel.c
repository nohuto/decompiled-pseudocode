__int64 __fastcall DirectComposition::CInjectionAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CInjectionAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  if ( a3 == 12 )
  {
    if ( *((_QWORD *)this + 17) == a4 )
      return v5;
    *((_QWORD *)this + 17) = a4;
    goto LABEL_8;
  }
  if ( a3 == 13 )
  {
    if ( *((_QWORD *)this + 18) == a4 )
      return v5;
    *((_QWORD *)this + 18) = a4;
LABEL_8:
    *((_DWORD *)this + 4) &= ~0x800u;
    *a5 = 1;
    return v5;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
