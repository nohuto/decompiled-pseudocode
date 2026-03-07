__int64 __fastcall DirectComposition::CVisualGroupMarshaler::SetReferenceArrayProperty(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( a3 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArrayBase::Set(
             (DirectComposition::CVisualGroupMarshaler *)((char *)this + 56),
             a2,
             (__int64)a4,
             a5,
             196);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x20u;
    *a6 = 1;
  }
  return result;
}
