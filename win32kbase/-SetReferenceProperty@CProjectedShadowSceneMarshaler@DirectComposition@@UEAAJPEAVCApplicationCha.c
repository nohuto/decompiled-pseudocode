__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (char *)this + 128,
             a4,
             1LL,
             36,
             (char *)this + 16,
             256,
             0,
             a5);
  else
    return 3221225485LL;
}
