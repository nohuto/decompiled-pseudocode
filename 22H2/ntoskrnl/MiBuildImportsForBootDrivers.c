/*
 * XREFs of MiBuildImportsForBootDrivers @ 0x140A56038
 * Callers:
 *     MiInitializeLoadedModuleList @ 0x140A55E9C (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140252B30 (RtlImageDirectoryEntryToData.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     memset @ 0x140413800 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 MiBuildImportsForBootDrivers()
{
  PVOID *v0; // rcx
  int v1; // ebx
  unsigned int v2; // r12d
  PVOID *v3; // rbp
  PVOID *v4; // rsi
  PVOID v5; // rax
  __int16 v6; // ax
  char *v7; // rdx
  char *Pool; // r15
  PVOID *i; // r14
  unsigned __int64 *v10; // rdi
  unsigned int v11; // r11d
  char *v12; // r8
  unsigned int j; // r10d
  unsigned int v14; // edi
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  PVOID *v17; // rax
  _QWORD *v18; // rax
  unsigned int v19; // r10d
  __int64 v20; // r9
  PVOID *v21; // rcx
  PVOID *v22; // rcx
  unsigned int v23; // r9d
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  PVOID *k; // rbx
  PVOID v28; // rcx
  unsigned int v29; // [rsp+60h] [rbp+8h] BYREF
  PVOID *v30; // [rsp+68h] [rbp+10h]

  v0 = (PVOID *)PsLoadedModuleList;
  v1 = 0;
  v30 = &PsLoadedModuleList;
  v29 = 0;
  v2 = 0;
  v3 = 0LL;
  v4 = 0LL;
  if ( PsLoadedModuleList == &PsLoadedModuleList )
    return 3221226021LL;
  do
  {
    v5 = v0[6];
    if ( (PVOID)PsNtosImageBase == v5 )
    {
      v3 = v0;
    }
    else if ( (PVOID)PsHalImageBase == v5 )
    {
      v4 = v0;
    }
    v6 = ((_DWORD)v0[13] & 0x4000000) == 0 || v0 == v4 || v0 == v3;
    *((_WORD *)v0 + 54) = v6;
    ++v2;
    v0[17] = (PVOID)1;
    v0 = (PVOID *)*v0;
  }
  while ( v0 != &PsLoadedModuleList );
  if ( !v3 || !v4 )
    return 3221226021LL;
  Pool = (char *)MiAllocatePool(256, 8LL * v2, 0x54446D4Du);
  if ( Pool )
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      LOBYTE(v7) = 1;
      v10 = (unsigned __int64 *)RtlImageDirectoryEntryToData((int)i[6], (int)v7, 12, (int)&v29);
      if ( !v10 )
        goto LABEL_15;
      memset(Pool, 0, 8LL * v2);
      v7 = 0LL;
      v11 = v29 >> 3;
      v12 = 0LL;
      for ( j = 0; j < v11; ++v10 )
      {
        if ( !v7 || *v10 < (unsigned __int64)v7 || *v10 >= (unsigned __int64)v12 )
        {
          v22 = (PVOID *)PsLoadedModuleList;
          v23 = 0;
          if ( PsLoadedModuleList != &PsLoadedModuleList )
          {
            v24 = *v10;
            while ( 1 )
            {
              v7 = (char *)v22[6];
              v12 = &v7[*((unsigned int *)v22 + 16)];
              if ( v24 >= (unsigned __int64)v7 && v24 < (unsigned __int64)v12 )
                break;
              v22 = (PVOID *)*v22;
              ++v23;
              if ( v22 == v30 )
                goto LABEL_40;
            }
            *(_QWORD *)&Pool[8 * v23] = v22;
          }
LABEL_40:
          v25 = *v10;
          if ( *v10 < (unsigned __int64)v7 || v25 >= (unsigned __int64)v12 )
          {
            if ( v25 )
              goto LABEL_59;
            v7 = 0LL;
          }
        }
        ++j;
      }
      v29 = 0;
      v14 = 0;
      v15 = 0LL;
      if ( !v2 )
        goto LABEL_15;
      v7 = Pool;
      v16 = v2;
      do
      {
        v17 = *(PVOID **)v7;
        if ( *(_QWORD *)v7 && v17 != v3 && v17 != i && v17 != v4 )
        {
          v15 = *(_QWORD *)v7;
          ++v14;
        }
        v7 += 8;
        --v16;
      }
      while ( v16 );
      v29 = v14;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          i[17] = (PVOID)(v15 | 1);
          ++*(_WORD *)(v15 + 108);
        }
        else
        {
          if ( v14 > 0x1FFFFFFE || (v18 = MiAllocatePool(256, 8 * v14 + 8, 0x54446D4Du)) == 0LL )
          {
LABEL_59:
            v1 = 1;
            break;
          }
          v19 = 0;
          *v18 = v14;
          v7 = Pool;
          v20 = v2;
          do
          {
            v21 = *(PVOID **)v7;
            if ( *(_QWORD *)v7 && v21 != v3 && v21 != i && v21 != v4 )
            {
              v18[v19 + 1] = v21;
              ++*(_WORD *)(*(_QWORD *)v7 + 108LL);
              ++v19;
            }
            v7 += 8;
            --v20;
          }
          while ( v20 );
          i[17] = v18;
        }
      }
      else
      {
LABEL_15:
        i[17] = (PVOID)-2LL;
      }
    }
    ExFreePoolWithTag(Pool, 0);
    v3[17] = (PVOID)1;
    v4[17] = (PVOID)1;
    if ( v1 != 1 )
      return 0LL;
    for ( k = (PVOID *)PsLoadedModuleList; k != &PsLoadedModuleList; k = (PVOID *)*k )
    {
      v28 = k[17];
      if ( v28 != (PVOID)1 && v28 != (PVOID)-2LL && ((unsigned __int8)v28 & 1) == 0 )
        ExFreePoolWithTag(v28, 0);
      k[17] = (PVOID)1;
      *((_WORD *)k + 54) = 1;
    }
  }
  return 3221225626LL;
}
