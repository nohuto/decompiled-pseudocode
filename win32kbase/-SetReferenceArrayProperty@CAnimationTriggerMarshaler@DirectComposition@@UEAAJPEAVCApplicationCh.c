__int64 __fastcall DirectComposition::CAnimationTriggerMarshaler::SetReferenceArrayProperty(
        DirectComposition::CAnimationTriggerMarshaler *this,
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
             (DirectComposition::CAnimationTriggerMarshaler *)((char *)this + 80),
             a2,
             (__int64)a4,
             a5,
             11);
  if ( (int)result >= 0 )
  {
    *((_DWORD *)this + 4) |= 0x100u;
    *a6 = 1;
  }
  return result;
}
