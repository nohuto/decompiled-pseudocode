__int64 __fastcall DirectComposition::CDropShadowMarshaler::SetIntegerProperty(
        DirectComposition::CDropShadowMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 != 5 )
    return DirectComposition::CPropertyChangeResourceMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *((_DWORD *)this + 4) |= 0x1000u;
  *((_DWORD *)this + 29) = a4;
  *a5 = 1;
  return 0LL;
}
