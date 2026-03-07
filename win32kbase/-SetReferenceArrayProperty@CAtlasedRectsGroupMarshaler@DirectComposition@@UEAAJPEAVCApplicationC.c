__int64 __fastcall DirectComposition::CAtlasedRectsGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CAtlasedRectsGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArrayBase::Set(
             (DirectComposition::CAtlasedRectsGroupMarshaler *)((char *)this + 64),
             a2,
             (__int64)a4,
             a5,
             8);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
    *a6 = 1;
  }
  return result;
}
