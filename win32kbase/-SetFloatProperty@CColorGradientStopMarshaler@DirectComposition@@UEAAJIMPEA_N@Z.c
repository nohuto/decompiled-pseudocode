__int64 __fastcall DirectComposition::CColorGradientStopMarshaler::SetFloatProperty(
        DirectComposition::CColorGradientStopMarshaler *this,
        unsigned int a2,
        float a3,
        bool *a4)
{
  if ( a2 )
  {
    DirectComposition::CResourceMarshaler::SetFloatProperty(this, a2, a3, a4);
  }
  else
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *((float *)this + 14) = a3;
    *a4 = 1;
  }
  return 0LL;
}
