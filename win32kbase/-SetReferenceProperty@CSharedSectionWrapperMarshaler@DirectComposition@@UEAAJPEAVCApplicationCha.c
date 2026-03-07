__int64 __fastcall DirectComposition::CSharedSectionWrapperMarshaler::SetReferenceProperty(
        DirectComposition::CSharedSectionWrapperMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 )
    return 3221225485LL;
  else
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
}
