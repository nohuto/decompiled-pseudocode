__int64 MiBuildImportsForBootDrivers()
{
  PVOID *v0; // rcx
  __int64 v1; // r15
  PVOID *v2; // rbp
  PVOID *v3; // rsi
  PVOID v4; // rax
  __int16 v5; // ax
  size_t v6; // r13
  char *Pool; // r14
  PVOID *i; // rdi
  unsigned __int64 *v9; // rbx
  PVOID v10; // rdx
  unsigned int v11; // r11d
  unsigned __int64 v12; // r8
  unsigned int j; // r10d
  unsigned int v14; // ebx
  unsigned __int64 v15; // rcx
  void **v16; // rdx
  __int64 v17; // r8
  PVOID *v18; // rax
  PVOID *v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _QWORD *v23; // rax
  unsigned int v24; // r10d
  char *v25; // rdx
  __int64 v26; // r9
  PVOID *v27; // rcx
  int v28; // ebx
  PVOID *k; // rdi
  PVOID v31; // rcx
  unsigned int v32; // [rsp+60h] [rbp+8h] BYREF
  PVOID *v33; // [rsp+68h] [rbp+10h]

  v0 = (PVOID *)PsLoadedModuleList;
  v33 = &PsLoadedModuleList;
  v32 = 0;
  LODWORD(v1) = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( PsLoadedModuleList == &PsLoadedModuleList )
    goto LABEL_63;
  do
  {
    v4 = v0[6];
    if ( (PVOID)PsNtosImageBase == v4 )
    {
      v2 = v0;
    }
    else if ( (PVOID)PsHalImageBase == v4 )
    {
      v3 = v0;
    }
    v5 = ((_DWORD)v0[13] & 0x4000000) == 0 || v0 == v3 || v0 == v2;
    *((_WORD *)v0 + 54) = v5;
    v1 = (unsigned int)(v1 + 1);
    v0[17] = (PVOID)1;
    v0 = (PVOID *)*v0;
  }
  while ( v0 != &PsLoadedModuleList );
  if ( !v2 || !v3 )
  {
LABEL_63:
    v28 = -1073741275;
    if ( v2 )
      goto LABEL_64;
    goto LABEL_65;
  }
  v6 = 8 * v1;
  Pool = (char *)MiAllocatePool(256, 8 * v1, 0x54446D4Du);
  if ( !Pool )
  {
    v28 = -1073741670;
    goto LABEL_64;
  }
  for ( i = (PVOID *)PsLoadedModuleList; ; i = (PVOID *)*i )
  {
    if ( i == &PsLoadedModuleList )
    {
      v28 = 0;
      goto LABEL_61;
    }
    v9 = (unsigned __int64 *)RtlImageDirectoryEntryToData((int)i[6], 1, 12, (int)&v32);
    if ( !v9 )
      goto LABEL_15;
    memset(Pool, 0, v6);
    v10 = 0LL;
    v11 = v32 >> 3;
    v12 = 0LL;
    for ( j = 0; j < v11; ++v9 )
    {
      if ( !v10 || *v9 < (unsigned __int64)v10 || *v9 >= v12 )
      {
        v19 = (PVOID *)PsLoadedModuleList;
        v20 = 0LL;
        if ( PsLoadedModuleList != &PsLoadedModuleList )
        {
          v21 = *v9;
          while ( 1 )
          {
            v10 = v19[6];
            v12 = (unsigned __int64)v10 + *((unsigned int *)v19 + 16);
            if ( v21 >= (unsigned __int64)v10 && v21 < v12 )
              break;
            v19 = (PVOID *)*v19;
            v20 = (unsigned int)(v20 + 1);
            if ( v19 == v33 )
              goto LABEL_35;
          }
          if ( (*((_DWORD *)v19 + 49) & 0x20) != 0 || (v6 = 8 * v1, _bittest16((const signed __int16 *)v19 + 55, 9u)) )
          {
            if ( v19 != i )
            {
              v28 = -1073740608;
              goto LABEL_61;
            }
          }
          if ( (*((_DWORD *)i + 49) & 0x20) != 0 && i[35] == v19 )
          {
            v28 = -1073740945;
            goto LABEL_61;
          }
          *(_QWORD *)&Pool[8 * v20] = v19;
        }
LABEL_35:
        v22 = *v9;
        if ( *v9 < (unsigned __int64)v10 || v22 >= v12 )
        {
          if ( v22 && (*((_DWORD *)i + 49) & 0x20) == 0 )
          {
            v28 = -1073741275;
            goto LABEL_61;
          }
          v10 = 0LL;
        }
      }
      ++j;
    }
    v14 = 0;
    v15 = 0LL;
    v32 = 0;
    if ( !(_DWORD)v1 )
      goto LABEL_15;
    v16 = (void **)Pool;
    v17 = (unsigned int)v1;
    do
    {
      v18 = (PVOID *)*v16;
      if ( *v16 && v18 != v2 && v18 != i && v18 != v3 )
      {
        v15 = (unsigned __int64)*v16;
        ++v14;
      }
      ++v16;
      --v17;
    }
    while ( v17 );
    v32 = v14;
    if ( !v14 )
    {
LABEL_15:
      i[17] = (PVOID)-2LL;
      continue;
    }
    if ( v14 == 1 )
    {
      i[17] = (PVOID)(v15 | 1);
      ++*(_WORD *)(v15 + 108);
      continue;
    }
    if ( v14 > 0x1FFFFFFE )
      break;
    v23 = MiAllocatePool(256, 8 * v14 + 8, 0x54446D4Du);
    if ( !v23 )
      break;
    *v23 = v14;
    v24 = 0;
    v25 = Pool;
    v26 = (unsigned int)v1;
    do
    {
      v27 = *(PVOID **)v25;
      if ( *(_QWORD *)v25 && v27 != v2 && v27 != i && v27 != v3 )
      {
        v23[v24 + 1] = v27;
        ++*(_WORD *)(*(_QWORD *)v25 + 108LL);
        ++v24;
      }
      v25 += 8;
      --v26;
    }
    while ( v26 );
    v6 = 8 * v1;
    i[17] = v23;
  }
  v28 = -1073741670;
LABEL_61:
  ExFreePoolWithTag(Pool, 0);
LABEL_64:
  v2[17] = (PVOID)1;
LABEL_65:
  if ( v3 )
    v3[17] = (PVOID)1;
  if ( v28 < 0 )
  {
    for ( k = (PVOID *)PsLoadedModuleList; k != &PsLoadedModuleList; k = (PVOID *)*k )
    {
      v31 = k[17];
      if ( v31 != (PVOID)1 && v31 != (PVOID)-2LL && ((unsigned __int8)v31 & 1) == 0 )
        ExFreePoolWithTag(v31, 0);
      k[17] = (PVOID)1;
      *((_WORD *)k + 54) = 1;
    }
  }
  return (unsigned int)v28;
}
