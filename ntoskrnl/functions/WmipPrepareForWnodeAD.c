__int64 __fastcall WmipPrepareForWnodeAD(__int64 a1, _OWORD *a2, int *a3, void **a4, _BYTE *a5)
{
  __int64 v5; // rdi
  int v8; // ebx
  bool v9; // zf
  _BYTE *v10; // rax
  void *v11; // rbp
  int v12; // esi
  int v13; // eax
  __int64 v14; // r12
  ULONG_PTR v15; // rdi
  int v17; // [rsp+30h] [rbp-38h] BYREF
  void *v18; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 56);
  if ( !v5 || !*(_DWORD *)(v5 + 36) )
    return (unsigned int)-1073741055;
  v8 = 0;
  v9 = (*(_DWORD *)(v5 + 16) & 1) == 0;
  v10 = a5;
  *a2 = *(_OWORD *)(v5 + 72);
  if ( !v9 )
  {
    *v10 = 1;
    return (unsigned int)v8;
  }
  v11 = *a4;
  v12 = 0;
  *v10 = 0;
  v13 = *a3;
  v18 = v11;
  v17 = v13;
  v19 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v14 = v5 + 56;
  v15 = *(_QWORD *)(v5 + 56);
  if ( v15 != v14 )
  {
    do
    {
      if ( v8 < 0 )
        break;
      if ( (*(_DWORD *)(v15 + 16) & 0x89000) == 0 )
      {
        WmipReferenceEntry(v15);
        v8 = WmipAddProviderIdToPIList((const void **)&v18, &v19, &v17, v11, v15);
      }
      v15 = *(_QWORD *)v15;
    }
    while ( v15 != v14 );
    v11 = v18;
    v12 = v19;
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( !v12 )
    return (unsigned int)-1073741055;
  *a3 = v12;
  *a4 = v11;
  return (unsigned int)v8;
}
