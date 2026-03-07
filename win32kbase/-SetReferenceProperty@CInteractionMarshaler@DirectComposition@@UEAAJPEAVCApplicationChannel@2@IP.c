__int64 __fastcall DirectComposition::CInteractionMarshaler::SetReferenceProperty(
        DirectComposition::CInteractionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 16 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 40,
             (__int64)a4,
             1,
             82,
             (int *)this + 4,
             0x2000,
             0,
             a5);
  if ( a3 == 12 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 39,
             (__int64)a4,
             1,
             105,
             (int *)this + 4,
             1024,
             0,
             a5);
  return 3221225485LL;
}
