__int64 __fastcall DirectComposition::CCompositionLightMarshaler::SetIntegerProperty(
        DirectComposition::CCompositionLightMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  if ( a3 != 2 )
    return 3221225485LL;
  if ( *((_BYTE *)this + 88) != (a4 != 0) )
  {
    *((_DWORD *)this + 4) |= 0x80u;
    *((_BYTE *)this + 88) = a4 != 0;
    *a5 = 1;
  }
  return result;
}
