/*
 * XREFs of SPCallServerHandleFileUsnQuery @ 0x1407289FC
 * Callers:
 *     sub_1406EDA0C @ 0x1406EDA0C (sub_1406EDA0C.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     FsRtlKernelFsControlFile @ 0x1405E94E0 (FsRtlKernelFsControlFile.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleFileUsnQuery(__int64 a1, void *a2, int a3, __int64 a4)
{
  __int64 v4; // r12
  void *v5; // rsi
  int v6; // r14d
  __int128 v7; // xmm6
  unsigned int *v9; // rdx
  unsigned int *v10; // rax
  unsigned int i; // r8d
  __int64 v12; // r11
  unsigned int *v13; // r9
  signed int v14; // ebx
  unsigned int *v15; // rax
  unsigned int *v16; // rax
  unsigned int j; // r8d
  __int64 v18; // r11
  unsigned int *v19; // r9
  void **v20; // rax
  unsigned int k; // r8d
  unsigned int v22; // r9d
  unsigned int *v23; // r8
  unsigned int v24; // r9d
  void **v25; // r8
  unsigned int v26; // r9d
  int *v27; // rax
  NTSTATUS v28; // eax
  struct _FILE_OBJECT *v29; // r14
  __int64 *PoolWithTag; // rsi
  char *v31; // rax
  unsigned int v32; // r8d
  __int64 v33; // r9
  unsigned int v34; // ecx
  unsigned __int64 m; // rdx
  unsigned int v36; // eax
  __int64 v37; // r15
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int *v41; // r9
  unsigned int v42; // edx
  int v43; // eax
  unsigned int v44; // ecx
  __int128 v45; // [rsp+40h] [rbp-20h]
  PVOID Object; // [rsp+98h] [rbp+38h] BYREF
  __int64 v47; // [rsp+A0h] [rbp+40h] BYREF

  LODWORD(v47) = a3;
  Object = a2;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_7;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_7;
    }
    v22 = *v10;
    v23 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
LABEL_7:
      v14 = -1073741675;
      goto LABEL_12;
    }
    v15 = 0LL;
    if ( v22 )
      v15 = v23;
    v14 = 0;
    if ( v22 != 8 )
      return (unsigned int)-1073741789;
    v4 = *(_QWORD *)v15;
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_12:
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( v9 && *(_DWORD *)a1 > 4u )
  {
    v16 = *(unsigned int **)(a1 + 8);
    for ( j = 0; j < 4; ++j )
    {
      v18 = *v16;
      v19 = v16 + 1;
      if ( v16 + 1 < v16 )
        goto LABEL_17;
      v16 = (unsigned int *)((char *)v19 + v18);
      if ( (unsigned int *)((char *)v19 + v18) < v19 )
        goto LABEL_17;
    }
    v24 = *v16;
    v25 = (void **)(v16 + 1);
    if ( v16 + 1 < v16 )
    {
LABEL_17:
      v14 = -1073741675;
      goto LABEL_22;
    }
    v20 = 0LL;
    if ( v24 )
      v20 = v25;
    v14 = 0;
    if ( v24 != 8 )
      return (unsigned int)-1073741762;
    v5 = *v20;
  }
  else
  {
    v14 = -1073741811;
  }
LABEL_22:
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( v9 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v40 = *v9;
      v41 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_85;
      v9 = (unsigned int *)((char *)v41 + v40);
      if ( (unsigned int *)((char *)v41 + v40) < v41 )
        goto LABEL_85;
    }
    v26 = *v9;
    if ( v9 + 1 < v9 )
    {
LABEL_85:
      v14 = -1073741675;
      goto LABEL_39;
    }
    v27 = 0LL;
    if ( v26 )
      v27 = (int *)(v9 + 1);
    v14 = 0;
    if ( v26 == 4 )
    {
      v6 = *v27;
      goto LABEL_39;
    }
    return (unsigned int)-1073741789;
  }
  v14 = -1073741811;
LABEL_39:
  if ( v14 < 0 )
    return (unsigned int)v14;
  if ( v6 != 16 )
    return (unsigned int)-1073741762;
  if ( !v5 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v28 = ObReferenceObjectByHandle(v5, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v29 = (struct _FILE_OBJECT *)Object;
  v14 = v28;
  if ( v28 >= 0 )
  {
    LODWORD(v47) = 0;
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x248uLL, 0x20534C53u);
    if ( !PoolWithTag )
    {
      v14 = -1073741801;
      goto LABEL_45;
    }
    v14 = FsRtlKernelFsControlFile(v29, 590068, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v47);
    if ( v14 < 0 )
      goto LABEL_56;
    if ( (unsigned int)v47 < 0x40 )
    {
      v14 = -1073741762;
LABEL_56:
      ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
      goto LABEL_45;
    }
    v37 = *PoolWithTag;
    if ( v29->WriteAccess )
    {
      v14 = FsRtlKernelFsControlFile(v29, 590063, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v47);
      if ( v14 < 0 )
        goto LABEL_56;
      if ( (unsigned int)v47 < 8 )
      {
LABEL_63:
        v14 = -1073741762;
        goto LABEL_56;
      }
      v39 = *PoolWithTag;
    }
    else
    {
      v14 = FsRtlKernelFsControlFile(v29, 590059, 0LL, 0, PoolWithTag, 0x248u, (ULONG *)&v47);
      if ( v14 < 0 )
        goto LABEL_56;
      if ( (unsigned int)v47 < 0x40 )
        goto LABEL_63;
      v39 = PoolWithTag[3];
    }
    *(_QWORD *)&v45 = v37;
    *((_QWORD *)&v45 + 1) = v39;
    v7 = v45;
    goto LABEL_56;
  }
LABEL_45:
  if ( v29 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v29);
  if ( v14 >= 0 )
  {
    *(_DWORD *)(a4 + 4) = 32;
    v31 = (char *)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20534C53u);
    if ( !v31 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v31;
    *(_DWORD *)a4 = 0;
    if ( v31 + 4 < v31 )
      return (unsigned int)-1073741675;
    if ( v31 + 12 > &v31[*(unsigned int *)(a4 + 4)] )
      return (unsigned int)-1073741789;
    *(_DWORD *)v31 = 8;
    *(_QWORD *)(v31 + 4) = v4;
    v32 = ++*(_DWORD *)a4;
    v33 = *(_QWORD *)(a4 + 8);
    if ( v33 )
    {
      v34 = 0;
      for ( m = *(_QWORD *)(a4 + 8); v34 < v32; m += v36 )
      {
        v36 = *(_DWORD *)m + 4;
        if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v36 < m )
          return (unsigned int)-1073741675;
        ++v34;
      }
      if ( m + 4 < m )
        return (unsigned int)-1073741675;
      v14 = 0;
      if ( m + 20 <= v33 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)m = 16;
        *(_OWORD *)(m + 4) = v7;
        ++*(_DWORD *)a4;
        return (unsigned int)v14;
      }
      return (unsigned int)-1073741789;
    }
    v42 = *(_DWORD *)(a4 + 4);
    v43 = -1;
    v44 = v42 + 20;
    if ( v42 + 20 >= v42 )
      v43 = v42 + 20;
    v14 = v44 < v42 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v43;
    if ( v44 >= v42 )
    {
      v14 = 0;
      *(_DWORD *)a4 = v32 + 1;
    }
  }
  return (unsigned int)v14;
}
