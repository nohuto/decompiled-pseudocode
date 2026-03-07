__int64 __fastcall DrvDbGetRegValueMappedProperty(
        __int64 a1,
        void *a2,
        __int64 a3,
        _DWORD *a4,
        _WORD *a5,
        unsigned int a6,
        _DWORD *a7)
{
  int v9; // eax
  _WORD *v11; // rbx
  int v12; // eax
  int *v13; // r9
  const WCHAR *v14; // rdx
  unsigned int v15; // edx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19[3]; // [rsp+30h] [rbp-18h] BYREF
  int v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+54h] [rbp+Ch]
  int v22; // [rsp+60h] [rbp+18h] BYREF

  v21 = HIDWORD(a1);
  v22 = 0;
  v20 = 0;
  v9 = *(_DWORD *)(a3 + 8);
  v11 = a5;
  if ( v9 == 17 || v9 == 5 )
  {
    v13 = &v20;
    v12 = 4;
  }
  else
  {
    v12 = a6;
    v13 = (int *)a5;
  }
  v14 = *(const WCHAR **)(a3 + 16);
  LODWORD(v19[0]) = v12;
  v15 = RegRtlQueryValue(a2, v14, &v22, v13, (unsigned int *)v19);
  if ( v15 == -1073741772 )
    return (unsigned int)-1073741275;
  if ( v15 && v15 != -1073741789 )
    return v15;
  if ( v22 != *(_DWORD *)(a3 + 24) )
    return (unsigned int)-1073741595;
  *a4 = *(_DWORD *)(a3 + 8);
  v17 = *(_DWORD *)(a3 + 8);
  if ( v17 == 5 )
  {
    *a7 = 2;
    if ( !v11 || a6 < 2 )
      return (unsigned int)-1073741789;
    if ( v15 != -1073741789 )
    {
      *v11 = v20;
      return v15;
    }
    return (unsigned int)-1073741595;
  }
  if ( v17 == 17 )
  {
    *a7 = 1;
    if ( !v11 || !a6 )
      return (unsigned int)-1073741789;
    if ( v15 != -1073741789 )
    {
      *(_BYTE *)v11 = -(v20 != 0);
      return v15;
    }
    return (unsigned int)-1073741595;
  }
  v18 = v19[0];
  *a7 = v19[0];
  if ( !v11 || a6 < v18 )
    return (unsigned int)-1073741789;
  return v15;
}
