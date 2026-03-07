__int64 __fastcall DirectComposition::CSceneMetallicRoughnessMaterialMarshaler::SetReferenceProperty(
        DirectComposition::CSceneMetallicRoughnessMaterialMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 == 9 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 15,
             (__int64)a4,
             1,
             156,
             (int *)this + 4,
             0x4000,
             0,
             a5);
  if ( a3 == 12 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 19,
             (__int64)a4,
             1,
             156,
             (int *)this + 4,
             0x20000,
             0,
             a5);
  return DirectComposition::CScenePbrMaterialMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
