__int64 __fastcall DirectComposition::CSceneNodeMarshaler::SetReferenceArrayProperty(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        bool *a6)
{
  __int64 result; // rax

  *a6 = 0;
  if ( !a3 )
  {
    result = DirectComposition::CResourceMarshalerArrayBase::Set(
               (DirectComposition::CSceneNodeMarshaler *)((char *)this + 56),
               a2,
               (__int64)a4,
               a5,
               161);
    if ( (int)result < 0 )
      return result;
    *((_DWORD *)this + 4) |= 0x20u;
    goto LABEL_8;
  }
  if ( a3 != 1 )
    return 3221225485LL;
  result = DirectComposition::CResourceMarshalerArrayBase::Set(
             (DirectComposition::CSceneNodeMarshaler *)((char *)this + 80),
             a2,
             (__int64)a4,
             a5,
             154);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x40u;
LABEL_8:
    *a6 = 1;
  }
  return result;
}
