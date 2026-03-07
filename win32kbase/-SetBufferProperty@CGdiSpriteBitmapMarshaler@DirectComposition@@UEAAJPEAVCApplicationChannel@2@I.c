__int64 __fastcall DirectComposition::CGdiSpriteBitmapMarshaler::SetBufferProperty(
        DirectComposition::CGdiSpriteBitmapMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int128 v8; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( a3 )
  {
    if ( a3 == 4 && a4 && a5 == 16 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x200u;
      *((_OWORD *)this + 6) = v8;
      *a6 = 1;
      return result;
    }
    return 3221225485LL;
  }
  if ( !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArrayBase::Copy(
             (DirectComposition::CGdiSpriteBitmapMarshaler *)((char *)this + 56),
             a4,
             a5,
             0x10uLL,
             0x64674344u);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x20u;
  }
  return result;
}
