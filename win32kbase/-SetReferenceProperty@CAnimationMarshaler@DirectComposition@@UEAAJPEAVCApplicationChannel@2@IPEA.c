__int64 __fastcall DirectComposition::CAnimationMarshaler::SetReferenceProperty(
        DirectComposition::CAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  char v6; // [rsp+70h] [rbp+18h] BYREF

  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 9,
             (__int64)a4,
             0,
             169,
             (int *)this + 4,
             64,
             1,
             a5);
  if ( a3 != 7 || *((_QWORD *)this + 16) || *((_QWORD *)this + 12) )
    return 3221225485LL;
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           a2,
           (struct DirectComposition::CResourceMarshaler **)this + 16,
           (__int64)a4,
           0,
           94,
           (int *)this + 4,
           0,
           0,
           &v6);
}
