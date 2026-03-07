__int64 __fastcall DirectComposition::CProjectedShadowSceneMarshaler::SetReferenceArrayProperty(
        DirectComposition::CProjectedShadowSceneMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        DirectComposition::CPrimitiveGroupMarshaler *a5,
        bool *a6)
{
  unsigned int v6; // ebx
  struct DirectComposition::CApplicationChannel *v9; // r10
  int v11; // edi
  unsigned int v12; // r11d
  DirectComposition::CPrimitiveGroupMarshaler *v13; // rcx
  unsigned int v14; // r9d
  struct DirectComposition::CResourceMarshaler *v15; // rcx
  int v16; // r9d
  struct DirectComposition::CResourceMarshaler **v17; // r8
  int v18; // r13d
  __int64 v19; // rsi
  __int64 v20; // r12
  unsigned int *v21; // rsi
  __int64 v22; // rax
  struct DirectComposition::CResourceMarshaler *v24; // rcx
  int v25; // r9d

  v6 = 0;
  v9 = a2;
  v11 = 0;
  v12 = -1073741811;
  *a6 = 0;
  if ( a3 != 8 && a3 != 1 )
  {
    v13 = a5;
LABEL_36:
    v11 = -1073741811;
    goto LABEL_3;
  }
  v13 = a5;
  if ( a5 && !a4 )
    goto LABEL_36;
LABEL_3:
  v14 = 0;
  if ( a3 == 1 )
  {
    if ( v11 < 0 )
      return (unsigned int)v11;
    while ( v14 < (unsigned __int64)v13 )
    {
      v24 = a4[v14];
      if ( !v24
        || !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)v24 + 9),
                               131LL) )
      {
        return v12;
      }
      v13 = a5;
      v14 = v25 + 1;
    }
  }
  else
  {
    if ( v11 < 0 )
      return (unsigned int)v11;
    while ( v14 < (unsigned __int64)v13 )
    {
      v15 = a4[v14];
      if ( !v15
        || !(unsigned __int8)DirectComposition::CResourceMarshaler::IsDerivedResourceType(
                               *((unsigned int *)v15 + 9),
                               132LL) )
      {
        return v12;
      }
      v13 = a5;
      v14 = v16 + 1;
    }
  }
  if ( a3 == 1 )
    v17 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 9);
  else
    v17 = (struct DirectComposition::CResourceMarshaler **)*((_QWORD *)this + 11);
  v18 = 128;
  if ( a3 != 1 )
    v18 = 512;
  v19 = 80LL;
  if ( a3 != 1 )
    v19 = 96LL;
  v20 = 84LL;
  if ( a3 != 1 )
    v20 = 100LL;
  v21 = (unsigned int *)((char *)this + v19);
  if ( v17 )
  {
    DirectComposition::CPrimitiveGroupMarshaler::ReleaseResourceMarshalers(v13, v9, v17, v21);
    *((_DWORD *)this + 4) |= v18;
    LODWORD(v13) = (_DWORD)a5;
  }
  v22 = 72LL;
  if ( a3 != 1 )
    v22 = 88LL;
  *(_QWORD *)((char *)this + v22) = a4;
  *v21 = (unsigned int)v13;
  *(_DWORD *)((char *)this + v20) = 0;
  *a6 = 1;
  if ( *v21 )
  {
    do
      DirectComposition::CResourceMarshaler::AddRef(a4[v6++]);
    while ( v6 < *v21 );
  }
  return (unsigned int)v11;
}
