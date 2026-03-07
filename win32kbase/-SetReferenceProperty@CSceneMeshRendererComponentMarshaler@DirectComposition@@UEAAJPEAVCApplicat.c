__int64 __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetReferenceProperty(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 7,
             (__int64)a4,
             1,
             155,
             (int *)this + 4,
             32,
             0,
             a5);
  if ( a3 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 8,
             (__int64)a4,
             1,
             157,
             (int *)this + 4,
             64,
             0,
             a5);
  return 3221225485LL;
}
