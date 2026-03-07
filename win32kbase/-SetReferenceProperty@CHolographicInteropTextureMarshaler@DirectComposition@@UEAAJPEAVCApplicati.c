__int64 __fastcall DirectComposition::CHolographicInteropTextureMarshaler::SetReferenceProperty(
        DirectComposition::CHolographicInteropTextureMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 7 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 11,
             (__int64)a4,
             1,
             196,
             (int *)this + 4,
             128,
             0,
             a5);
  else
    return 3221225485LL;
}
