__int64 __fastcall DirectComposition::CCompositionGlyphRunMarshaler::SetBufferProperty(
        DirectComposition::CCompositionGlyphRunMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax
  __int64 v7; // xmm0_8
  __int64 v8; // xmm0_8

  result = 0LL;
  *a6 = 0;
  if ( a3 == 3 )
  {
    if ( a4 && a5 == 8 )
    {
      v8 = *a4;
      *((_DWORD *)this + 4) |= 0x100u;
      *((_QWORD *)this + 10) = v8;
      goto LABEL_10;
    }
  }
  else
  {
    if ( a3 != 4 )
      return DirectComposition::CTextObjectMarshaler::SetBufferProperty(this, a2, a3, a4, a5, a6);
    if ( a4 && a5 == 8 )
    {
      v7 = *a4;
      *((_DWORD *)this + 4) |= 0x200u;
      *((_QWORD *)this + 11) = v7;
LABEL_10:
      *a6 = 1;
      return result;
    }
  }
  return 3221225485LL;
}
