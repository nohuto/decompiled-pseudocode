/*
 * XREFs of SPCallServerHandleFileIntegrityQuery @ 0x1407284D4
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     FsRtlQueryKernelEaFile @ 0x1405E92E0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleFileIntegrityQuery(__int64 a1, void *a2, int a3, __int64 a4)
{
  void *v5; // rsi
  int v6; // r12d
  unsigned int *v7; // rdx
  unsigned int *v8; // rax
  unsigned int i; // r9d
  __int64 v10; // r11
  unsigned int *v11; // r10
  unsigned int v12; // ebx
  unsigned int *v13; // rax
  unsigned int j; // r8d
  __int64 v15; // rax
  unsigned int *v16; // r9
  void **v17; // rax
  void *v18; // r15
  unsigned __int16 *v19; // r14
  NTSTATUS v20; // eax
  struct _FILE_OBJECT *v21; // rbx
  int v22; // esi
  char *PoolWithTag; // rax
  unsigned __int16 *v24; // rax
  int v25; // eax
  __int64 v26; // rdx
  _QWORD *v27; // r13
  __int64 *v28; // r12
  int v29; // ebx
  char *v30; // rax
  unsigned int v32; // r10d
  unsigned int *v33; // r9
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  __int64 v36; // r9
  _DWORD *v37; // rdx
  unsigned int k; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  int v41; // eax
  unsigned int v42; // ecx
  __int64 v43; // [rsp+50h] [rbp-30h]
  struct _FILE_OBJECT *DmaAdapter; // [rsp+58h] [rbp-28h]
  __int64 v45; // [rsp+60h] [rbp-20h]
  __int64 Source2; // [rsp+68h] [rbp-18h] BYREF
  __int64 v47; // [rsp+70h] [rbp-10h]
  __int64 v48; // [rsp+C0h] [rbp+40h]
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v50; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v50) = a3;
  Object = a2;
  v45 = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_7;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_7;
    }
    v32 = *v8;
    v33 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_7:
      v12 = -1073741675;
      goto LABEL_12;
    }
    v13 = 0LL;
    if ( v32 )
      v13 = v33;
    v12 = 0;
    if ( v32 != 8 )
      return (unsigned int)-1073741789;
    v45 = *(_QWORD *)v13;
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_12:
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  if ( v7 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v15 = *v7;
      v16 = v7 + 1;
      if ( v7 + 1 < v7 )
        goto LABEL_17;
      v7 = (unsigned int *)((char *)v16 + v15);
      if ( (unsigned int *)((char *)v16 + v15) < v16 )
        goto LABEL_17;
    }
    v34 = *v7;
    if ( v7 + 1 < v7 )
    {
LABEL_17:
      v12 = -1073741675;
      goto LABEL_22;
    }
    v17 = 0LL;
    if ( v34 )
      v17 = (void **)(v7 + 1);
    v12 = 0;
    if ( v34 != 8 )
      return (unsigned int)-1073741762;
    v5 = *v17;
  }
  else
  {
    v12 = -1073741811;
  }
LABEL_22:
  if ( (v12 & 0x80000000) != 0 )
    return v12;
  LODWORD(v50) = 0;
  v18 = 0LL;
  v48 = 0LL;
  v19 = 0LL;
  v43 = 0LL;
  Source2 = 0LL;
  if ( !v5 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v20 = ObReferenceObjectByHandle(v5, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v21 = (struct _FILE_OBJECT *)Object;
  v22 = v20;
  DmaAdapter = (struct _FILE_OBJECT *)Object;
  if ( v20 >= 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1FuLL, 0x20534C53u);
    v18 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_81;
    *(_QWORD *)(PoolWithTag + 5) = 0LL;
    *(_QWORD *)(PoolWithTag + 13) = 0LL;
    *(_QWORD *)(PoolWithTag + 21) = 0LL;
    PoolWithTag[30] = 0;
    PoolWithTag[4] = 25;
    *(_DWORD *)PoolWithTag = 0;
    strcpy(PoolWithTag + 5, "$Kernel.Purge.AppxFICach");
    v24 = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x3AuLL, 0x20534C53u);
    v19 = v24;
    if ( !v24 )
    {
LABEL_81:
      v22 = -1073741801;
      goto LABEL_43;
    }
    *(_OWORD *)v24 = 0LL;
    *((_OWORD *)v24 + 1) = 0LL;
    *((_OWORD *)v24 + 2) = 0LL;
    *((_QWORD *)v24 + 6) = 0LL;
    v24[28] = 0;
    v25 = FsRtlQueryKernelEaFile(v21, (__int64)v24, 58, 1, (__int64)v18, 31, 0LL, 1, &v50);
    v22 = v25;
    if ( v25 != -1073741275 )
    {
      if ( v25 < 0 )
        goto LABEL_43;
      v26 = v19[3];
      v27 = (_QWORD *)((char *)v19 + *((unsigned __int8 *)v19 + 5) + 9);
      if ( (char *)v27 + v26 > (char *)v19 + (unsigned int)v50 )
        goto LABEL_83;
      if ( (_WORD)v26 )
      {
        if ( (_DWORD)v26 == 24 && RtlCompareMemory(v27 + 2, &Source2, 8uLL) == 8 )
        {
          LODWORD(Object) = 2;
          LODWORD(v50) = 0;
          v28 = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
          if ( !v28 )
          {
            v6 = 2;
            goto LABEL_43;
          }
          v29 = FsRtlKernelFsControlFile(v21, 590068, 0LL, 0, v28, 0x248u, (ULONG *)&v50);
          if ( v29 < 0 )
            goto LABEL_39;
          if ( (unsigned int)v50 >= 0x40 )
          {
            v47 = *v28;
            v29 = FsRtlKernelFsControlFile(DmaAdapter, 590059, 0LL, 0, v28, 0x248u, (ULONG *)&v50);
            if ( v29 < 0 )
            {
LABEL_39:
              ExFreePoolWithTag(v28, 0x20534C53u);
              v6 = (int)Object;
              if ( v29 >= 0 && v48 == *v27 && v43 == v27[1] )
                v6 = 3;
              goto LABEL_43;
            }
            if ( (unsigned int)v50 >= 0x40 )
            {
              v43 = v28[3];
              v48 = v47;
              goto LABEL_39;
            }
          }
          v29 = -1073741762;
          goto LABEL_39;
        }
LABEL_83:
        v22 = -1073741762;
        goto LABEL_43;
      }
    }
    v22 = 0;
  }
LABEL_43:
  if ( DmaAdapter )
    HalPutDmaAdapter((PADAPTER_OBJECT)DmaAdapter);
  if ( v18 )
    ExFreePoolWithTag(v18, 0x20534C53u);
  if ( v19 )
    ExFreePoolWithTag(v19, 0x20534C53u);
  v12 = v22;
  if ( v22 >= 0 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    v30 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
    if ( !v30 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v30;
    *(_DWORD *)a4 = 0;
    if ( v30 + 4 < v30 )
      return (unsigned int)-1073741675;
    if ( v30 + 12 > &v30[*(unsigned int *)(a4 + 4)] )
      return (unsigned int)-1073741789;
    *(_DWORD *)v30 = 8;
    *(_QWORD *)(v30 + 4) = v45;
    v35 = ++*(_DWORD *)a4;
    v36 = *(_QWORD *)(a4 + 8);
    if ( v36 )
    {
      v37 = *(_DWORD **)(a4 + 8);
      for ( k = 0; k < v35; v37 = (_DWORD *)((char *)v37 + v39) )
      {
        v39 = *v37 + 4;
        if ( *v37 >= 0xFFFFFFFC || (_DWORD *)((char *)v37 + v39) < v37 )
          return (unsigned int)-1073741675;
        ++k;
      }
      if ( v37 + 1 < v37 )
        return (unsigned int)-1073741675;
      v12 = 0;
      if ( (unsigned __int64)(v37 + 2) <= v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v37 = 4;
        v37[1] = v6;
        ++*(_DWORD *)a4;
        return v12;
      }
      return (unsigned int)-1073741789;
    }
    v40 = *(_DWORD *)(a4 + 4);
    v41 = -1;
    v42 = v40 + 8;
    if ( v40 + 8 >= v40 )
      v41 = v40 + 8;
    v12 = v42 < v40 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v41;
    if ( v42 >= v40 )
    {
      v12 = 0;
      *(_DWORD *)a4 = v35 + 1;
    }
  }
  return v12;
}
