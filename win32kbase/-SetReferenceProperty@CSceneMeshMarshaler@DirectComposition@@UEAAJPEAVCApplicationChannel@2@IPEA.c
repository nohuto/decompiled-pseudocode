__int64 __fastcall DirectComposition::CSceneMeshMarshaler::SetReferenceProperty(
        DirectComposition::CSceneMeshMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  *a5 = 0;
  v5 = a3 - 1;
  if ( !v5 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 8,
             (__int64)a4,
             1,
             171,
             (int *)this + 4,
             64,
             0,
             a5);
  v6 = v5 - 1;
  if ( !v6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 9,
             (__int64)a4,
             1,
             171,
             (int *)this + 4,
             128,
             0,
             a5);
  v7 = v6 - 1;
  if ( !v7 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 10,
             (__int64)a4,
             1,
             171,
             (int *)this + 4,
             256,
             0,
             a5);
  v8 = v7 - 1;
  if ( !v8 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 11,
             (__int64)a4,
             1,
             171,
             (int *)this + 4,
             512,
             0,
             a5);
  v9 = v8 - 1;
  if ( !v9 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 12,
             (__int64)a4,
             1,
             171,
             (int *)this + 4,
             1024,
             0,
             a5);
  v10 = v9 - 1;
  if ( !v10 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 13,
             (__int64)a4,
             1,
             171,
             (int *)this + 4,
             2048,
             0,
             a5);
  if ( v10 == 1 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 14,
             (__int64)a4,
             1,
             171,
             (int *)this + 4,
             4096,
             0,
             a5);
  return 3221225485LL;
}
