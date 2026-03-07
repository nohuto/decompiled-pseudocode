__int64 __fastcall DirectComposition::CColorBrushMarshaler::SetBufferProperty(
        DirectComposition::CColorBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int128 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int128 v7; // xmm0

  result = 0LL;
  *a6 = 0;
  if ( a3 || !a4 || a5 != 16 )
    return 3221225485LL;
  v7 = *a4;
  *((_DWORD *)this + 4) |= 0x20u;
  *(_OWORD *)((char *)this + 72) = v7;
  *a6 = 1;
  return result;
}
