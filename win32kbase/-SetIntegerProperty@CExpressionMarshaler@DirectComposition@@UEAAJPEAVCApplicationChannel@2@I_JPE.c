__int64 __fastcall DirectComposition::CExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 0xCu:
      if ( *((_QWORD *)this + 17) == a4 )
        return v5;
      *((_QWORD *)this + 17) = a4;
      goto LABEL_10;
    case 0xDu:
      if ( *((_QWORD *)this + 18) == a4 )
        return v5;
      *((_QWORD *)this + 18) = a4;
LABEL_10:
      *((_DWORD *)this + 4) &= ~0x800u;
      *a5 = 1;
      return v5;
    case 0x10u:
      if ( *((_QWORD *)this + 20) == a4 )
        return v5;
      *((_QWORD *)this + 20) = a4;
      goto LABEL_10;
    case 0x11u:
      if ( *((_QWORD *)this + 21) == a4 )
        return v5;
      *((_QWORD *)this + 21) = a4;
      goto LABEL_10;
    case 0x12u:
      if ( *((_DWORD *)this + 44) == a4 )
        return v5;
      *((_DWORD *)this + 44) = a4;
      goto LABEL_10;
    case 0x13u:
      if ( *((_DWORD *)this + 45) == a4 )
        return v5;
      *((_DWORD *)this + 45) = a4;
      goto LABEL_10;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
