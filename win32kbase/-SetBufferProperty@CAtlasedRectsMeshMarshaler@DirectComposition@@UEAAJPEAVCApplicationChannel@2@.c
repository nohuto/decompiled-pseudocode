__int64 __fastcall DirectComposition::CAtlasedRectsMeshMarshaler::SetBufferProperty(
        DirectComposition::CAtlasedRectsMeshMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  int v7; // r8d
  __int64 result; // rax

  *a6 = 0;
  v7 = a3 - 2;
  if ( v7 )
  {
    if ( v7 == 1 && (a4 || !a5) )
    {
      result = DirectComposition::CMarshaledArrayBase::Copy(
                 (DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 88),
                 a4,
                 a5,
                 0x10uLL,
                 0x30614344u);
      if ( (int)result >= 0 )
      {
        *a6 = 1;
        *((_DWORD *)this + 4) |= 0x100u;
      }
      return result;
    }
    return 3221225485LL;
  }
  if ( !a4 && a5 )
    return 3221225485LL;
  result = DirectComposition::CMarshaledArrayBase::Copy(
             (DirectComposition::CAtlasedRectsMeshMarshaler *)((char *)this + 64),
             a4,
             a5,
             0x10uLL,
             0x30614344u);
  if ( (int)result >= 0 )
  {
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x80u;
  }
  return result;
}
