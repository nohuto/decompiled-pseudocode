__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetReferenceProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 20,
             (__int64)a4,
             1,
             170,
             (int *)this + 4,
             128,
             1,
             a5);
  if ( a3 == 11 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 28,
             (__int64)a4,
             1,
             48,
             (int *)this + 4,
             512,
             1,
             a5);
  return 3221225485LL;
}
