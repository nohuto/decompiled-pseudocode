__int64 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetReferenceProperty(
        DirectComposition::CPrimitiveGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 7,
             (__int64)a4,
             1,
             169,
             (int *)this + 4,
             32,
             1,
             a5);
  else
    return 3221225485LL;
}
