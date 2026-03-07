__int64 __fastcall DirectComposition::CScenePbrMaterialMarshaler::SetReferenceProperty(
        DirectComposition::CScenePbrMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  switch ( a3 )
  {
    case 2:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 8,
               (__int64)a4,
               1,
               156,
               (int *)this + 4,
               128,
               0,
               a5);
    case 5:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 11,
               (__int64)a4,
               1,
               156,
               (int *)this + 4,
               1024,
               0,
               a5);
    case 7:
      return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
               a2,
               (struct DirectComposition::CResourceMarshaler **)this + 13,
               (__int64)a4,
               1,
               156,
               (int *)this + 4,
               4096,
               0,
               a5);
  }
  return 3221225485LL;
}
