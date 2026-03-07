__int64 __fastcall BiCreateMergedBootEntry(_DWORD *a1, _WORD *a2, _DWORD *a3, _WORD *a4, _QWORD *a5)
{
  __int64 v5; // rax
  _WORD *v6; // rbx
  PVOID v8; // r13
  size_t v9; // rdi
  _WORD *v10; // r15
  char *v11; // r14
  char *v13; // r12
  NTSTATUS FilePathFromEfiPath; // eax
  unsigned int v15; // ebx
  int DeviceFromEfiPath; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  size_t v19; // rbx
  int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  char *Pool2; // rax
  int v24; // eax
  unsigned int v25; // edx
  int v26; // r8d
  int v27; // r9d
  unsigned int v28; // r12d
  void *v29; // rax
  _DWORD *v30; // rax
  __int64 v31; // rcx
  size_t v32; // r8
  _DWORD *v33; // r12
  char v34; // [rsp+20h] [rbp-30h]
  unsigned int v35; // [rsp+24h] [rbp-2Ch] BYREF
  size_t Size; // [rsp+28h] [rbp-28h] BYREF
  size_t v37; // [rsp+30h] [rbp-20h] BYREF
  void *Src; // [rsp+38h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  char v41; // [rsp+A0h] [rbp+50h]
  _WORD *v42; // [rsp+A8h] [rbp+58h]

  v42 = a4;
  v5 = -1LL;
  LODWORD(Size) = 0;
  v6 = a2;
  v35 = 0;
  P[0] = 0LL;
  v8 = 0LL;
  v37 = 0LL;
  v9 = 0LL;
  v41 = 0;
  v10 = 0LL;
  Src = 0LL;
  v11 = 0LL;
  v34 = 0;
  if ( !a3 )
  {
    v9 = (size_t)a1 + (unsigned int)a1[5];
    if ( !a4 )
      goto LABEL_23;
    v37 = (size_t)a1 + (unsigned int)a1[5];
    DeviceFromEfiPath = BiGetDeviceFromEfiPath((char *)(v9 + 12), P, &Size);
    v8 = P[0];
    v15 = DeviceFromEfiPath;
    if ( DeviceFromEfiPath < 0 )
      goto LABEL_32;
    a4 = v42;
    v13 = (char *)P[0] + 20;
LABEL_12:
    v10 = a4;
LABEL_13:
    v17 = -1LL;
    v18 = -1LL;
    do
      ++v18;
    while ( *(_WORD *)&v13[2 * v18] );
    v19 = (unsigned int)(2 * v18 + 2);
    do
      ++v17;
    while ( v10[v17] );
    v20 = 2 * v17 + 2;
    LODWORD(Size) = v20;
    if ( v20 + (int)v19 < (unsigned int)v19 || (v21 = v19 + v20, v22 = v19 + v20 + 12, v22 < v21) )
    {
      v15 = -1073741675;
      goto LABEL_32;
    }
    P[0] = (PVOID)v22;
    Pool2 = (char *)ExAllocatePool2(258LL, v22, 1262764866LL);
    v11 = Pool2;
    if ( !Pool2 )
    {
LABEL_20:
      v15 = -1073741670;
      goto LABEL_32;
    }
    *(_DWORD *)Pool2 = 1;
    *((_DWORD *)Pool2 + 1) = P[0];
    *((_DWORD *)Pool2 + 2) = 3;
    memmove(Pool2 + 12, v13, v19);
    memmove(&v11[v19 + 12], v10, (unsigned int)Size);
    v24 = BiTranslateFilePath((__int64)v11, 4u, &v37);
    v9 = v37;
    v15 = v24;
    if ( v24 < 0 )
      goto LABEL_32;
    v6 = a2;
    v5 = -1LL;
    v41 = 1;
LABEL_23:
    if ( !v6 )
      v6 = (_WORD *)((char *)a1 + (unsigned int)a1[4]);
    do
      ++v5;
    while ( v6[v5] );
    v25 = a1[6];
    v26 = 2 * v5 + 2;
    LODWORD(v37) = v26;
    if ( v25 + v26 < v25 || (v27 = *(_DWORD *)(v9 + 4), v27 + v25 + v26 + 36 < v25 + v26) )
    {
      v15 = -1073741675;
      goto LABEL_32;
    }
    LODWORD(Size) = (v25 + 31) & 0xFFFFFFFC;
    v35 = (v26 + Size + 3) & 0xFFFFFFFC;
    v28 = v27 + v35;
    v29 = (void *)ExAllocatePool2(258LL, v27 + v35, 1262764866LL);
    P[0] = v29;
    if ( v29 )
    {
      memset(v29, 0, v28);
      v30 = P[0];
      v31 = (unsigned int)Size;
      v32 = (unsigned int)v37;
      *((_DWORD *)P[0] + 1) = v28;
      v33 = P[0];
      *v30 = 1;
      v33[2] = a1[2];
      v33[3] = a1[3];
      LODWORD(v30) = v35;
      v33[4] = v31;
      v33[5] = (_DWORD)v30;
      v33[6] = a1[6];
      memmove((char *)v33 + v31, v6, v32);
      memmove((char *)v33 + v35, (const void *)v9, *(unsigned int *)(v9 + 4));
      memmove(v33 + 7, a1 + 7, (unsigned int)a1[6]);
      *a5 = v33;
      v15 = 0;
      goto LABEL_32;
    }
    goto LABEL_20;
  }
  if ( *a3 == 5 )
    return 3221225486LL;
  if ( *a3 != 2 )
    return 3221225485LL;
  v13 = (char *)(a3 + 5);
  if ( a4 )
    goto LABEL_12;
  v9 = (size_t)a1 + (unsigned int)a1[5];
  v37 = v9;
  FilePathFromEfiPath = BiGetFilePathFromEfiPath(v9 + 12, (__int64 *)&Src, &v35);
  v10 = Src;
  v15 = FilePathFromEfiPath;
  if ( FilePathFromEfiPath >= 0 )
  {
    v34 = 1;
    goto LABEL_13;
  }
LABEL_32:
  if ( v8 )
    ExFreePoolWithTag(v8, 0x4B444342u);
  if ( v41 )
    ExFreePoolWithTag((PVOID)v9, 0x4B444342u);
  if ( v34 )
    ExFreePoolWithTag(v10, 0x4B444342u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x4B444342u);
  return v15;
}
