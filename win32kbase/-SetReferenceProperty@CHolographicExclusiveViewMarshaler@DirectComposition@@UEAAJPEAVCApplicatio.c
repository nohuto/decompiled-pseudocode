__int64 __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::SetReferenceProperty(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 12,
             (__int64)a4,
             1,
             42,
             (int *)this + 4,
             64,
             0,
             a5);
  else
    return 3221225485LL;
}
