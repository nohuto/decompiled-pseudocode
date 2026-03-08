/*
 * XREFs of SPCallServerHandleFileIntegrityQuery @ 0x1407FAA78
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x140420DD0 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     FsRtlQueryKernelEaFile @ 0x1407D8DE0 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleFileIntegrityQuery(__int64 a1, void *a2, int a3, __int64 a4)
{
  int v6; // esi
  unsigned int *v7; // rax
  void **v8; // rax
  void *v9; // rcx
  void *v10; // r12
  __int64 v11; // r15
  NTSTATUS v12; // eax
  struct _FILE_OBJECT *v13; // rbx
  int v14; // r14d
  __int64 Pool2; // rax
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rdx
  _QWORD *v19; // r8
  __int64 v20; // r13
  int v21; // ebx
  __int64 v22; // r13
  unsigned int v23; // ebx
  unsigned __int64 v24; // rax
  unsigned int k; // ecx
  _DWORD *v27; // rdx
  __int64 v28; // r10
  unsigned int *v29; // r9
  unsigned int *v30; // rax
  unsigned int i; // r8d
  __int64 v32; // rax
  unsigned int *v33; // rdx
  unsigned int *v34; // rcx
  unsigned int j; // r8d
  unsigned int v36; // r9d
  unsigned int *v37; // r8
  unsigned int v38; // r8d
  __int64 v39; // r9
  unsigned int v40; // eax
  unsigned int v41; // eax
  __int64 v42; // [rsp+50h] [rbp-30h]
  __int64 Source2; // [rsp+58h] [rbp-28h] BYREF
  __int64 v44; // [rsp+60h] [rbp-20h]
  _QWORD *v45; // [rsp+68h] [rbp-18h]
  __int64 v46; // [rsp+70h] [rbp-10h]
  __int64 v47; // [rsp+C0h] [rbp+40h]
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v49; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v49) = a3;
  Object = a2;
  v6 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v34 = *(unsigned int **)(a1 + 8);
  if ( !v34 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v30 = v34;
  for ( i = 0; i < 3; ++i )
  {
    v28 = *v30;
    v29 = v30 + 1;
    if ( v30 + 1 < v30 )
      return (unsigned int)-1073741675;
    v30 = (unsigned int *)((char *)v29 + v28);
    if ( (unsigned int *)((char *)v29 + v28) < v29 )
      return (unsigned int)-1073741675;
  }
  v36 = *v30;
  v37 = v30 + 1;
  if ( v30 + 1 >= v30 )
  {
    v7 = 0LL;
    if ( v36 )
      v7 = v37;
    if ( v36 != 8 )
      return (unsigned int)-1073741789;
    v22 = *(_QWORD *)v7;
    if ( *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v32 = *v34;
        v33 = v34 + 1;
        v46 = v22;
        if ( v34 + 1 < v34 )
          return (unsigned int)-1073741675;
        v34 = (unsigned int *)((char *)v33 + v32);
        if ( (unsigned int *)((char *)v33 + v32) < v33 )
          return (unsigned int)-1073741675;
      }
      v38 = *v34;
      if ( v34 + 1 < v34 )
        return (unsigned int)-1073741675;
      v8 = 0LL;
      if ( v38 )
        v8 = (void **)(v34 + 1);
      if ( v38 != 8 )
        return (unsigned int)-1073741762;
      v9 = *v8;
      LODWORD(v49) = 0;
      v10 = 0LL;
      v47 = 0LL;
      v11 = 0LL;
      v42 = 0LL;
      Source2 = 0LL;
      if ( !v9 )
        return (unsigned int)-1073741811;
      Object = 0LL;
      v12 = ObReferenceObjectByHandle(v9, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
      v13 = (struct _FILE_OBJECT *)Object;
      v14 = v12;
      if ( v12 >= 0 )
      {
        Pool2 = ExAllocatePool2(256LL, 31LL, 542329939LL);
        v10 = (void *)Pool2;
        if ( !Pool2 )
          goto LABEL_66;
        *(_QWORD *)(Pool2 + 5) = 0LL;
        *(_QWORD *)(Pool2 + 13) = 0LL;
        *(_QWORD *)(Pool2 + 21) = 0LL;
        *(_BYTE *)(Pool2 + 30) = 0;
        *(_BYTE *)(Pool2 + 4) = 25;
        *(_DWORD *)Pool2 = 0;
        strcpy((char *)(Pool2 + 5), "$Kernel.Purge.AppxFICach");
        v16 = ExAllocatePool2(256LL, 58LL, 542329939LL);
        v11 = v16;
        if ( !v16 )
        {
LABEL_66:
          v14 = -1073741801;
          goto LABEL_32;
        }
        *(_OWORD *)v16 = 0LL;
        *(_OWORD *)(v16 + 16) = 0LL;
        *(_OWORD *)(v16 + 32) = 0LL;
        *(_QWORD *)(v16 + 48) = 0LL;
        *(_WORD *)(v16 + 56) = 0;
        v17 = FsRtlQueryKernelEaFile(v13, (_SLIST_ENTRY *)v16, 58, 1, (__int64)v10, 31, 0LL, 1, &v49);
        v14 = v17;
        if ( v17 == -1073741275 )
          goto LABEL_67;
        if ( v17 >= 0 )
        {
          v18 = *(unsigned __int16 *)(v11 + 6);
          v19 = (_QWORD *)(v11 + *(unsigned __int8 *)(v11 + 5) + 9LL);
          v45 = v19;
          if ( (unsigned __int64)v19 + v18 > v11 + (unsigned __int64)(unsigned int)v49 )
            goto LABEL_68;
          if ( (_WORD)v18 )
          {
            if ( (_DWORD)v18 == 24 && RtlCompareMemory(v19 + 2, &Source2, 8uLL) == 8 )
            {
              v6 = 2;
              LODWORD(v49) = 0;
              v20 = ExAllocatePool2(256LL, 584LL, 542329939LL);
              if ( !v20 )
              {
LABEL_31:
                v22 = v46;
                goto LABEL_32;
              }
              v21 = FsRtlKernelFsControlFile(v13, 590068, 0LL, 0, (_SLIST_ENTRY *)v20, 0x248u, (ULONG *)&v49);
              if ( v21 >= 0 )
              {
                if ( (unsigned int)v49 < 0x40 )
                  goto LABEL_69;
                v44 = *(_QWORD *)v20;
                v21 = FsRtlKernelFsControlFile(
                        (PFILE_OBJECT)Object,
                        590059,
                        0LL,
                        0,
                        (_SLIST_ENTRY *)v20,
                        0x248u,
                        (ULONG *)&v49);
                if ( v21 >= 0 )
                {
                  if ( (unsigned int)v49 >= 0x40 )
                  {
                    v42 = *(_QWORD *)(v20 + 24);
                    v47 = v44;
                    goto LABEL_27;
                  }
LABEL_69:
                  v21 = -1073741762;
                }
              }
LABEL_27:
              ExFreePoolWithTag((PVOID)v20, 0);
              if ( v21 >= 0 && v47 == *v45 && v42 == v45[1] )
                v6 = 3;
              goto LABEL_31;
            }
LABEL_68:
            v14 = -1073741762;
            goto LABEL_32;
          }
LABEL_67:
          v14 = 0;
        }
      }
LABEL_32:
      if ( Object )
        ObfDereferenceObject(Object);
      if ( v10 )
        ExFreePoolWithTag(v10, 0);
      if ( v11 )
        ExFreePoolWithTag((PVOID)v11, 0);
      v23 = v14;
      if ( v14 < 0 )
        return v23;
      *(_DWORD *)(a4 + 4) = 20;
      v24 = ExAllocatePool2(256LL, 20LL, 542329939LL);
      if ( !v24 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v24;
      *(_DWORD *)a4 = 0;
      if ( v24 + 4 < v24 )
        return (unsigned int)-1073741675;
      if ( v24 + 12 > v24 + *(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *(_DWORD *)v24 = 8;
      *(_QWORD *)(v24 + 4) = v22;
      ++*(_DWORD *)a4;
      v39 = *(_QWORD *)(a4 + 8);
      if ( !v39 )
      {
        v40 = *(_DWORD *)(a4 + 4);
        if ( v40 + 8 >= v40 )
        {
          *(_DWORD *)(a4 + 4) = v40 + 8;
          v23 = 0;
          ++*(_DWORD *)a4;
          return v23;
        }
        *(_DWORD *)(a4 + 4) = -1;
        return (unsigned int)-1073741675;
      }
      v27 = *(_DWORD **)(a4 + 8);
      for ( k = 0; k < *(_DWORD *)a4; v27 = (_DWORD *)((char *)v27 + v41) )
      {
        v41 = *v27 + 4;
        if ( *v27 >= 0xFFFFFFFC || (_DWORD *)((char *)v27 + v41) < v27 )
          return (unsigned int)-1073741675;
        ++k;
      }
      if ( v27 + 1 < v27 )
        return (unsigned int)-1073741675;
      v23 = 0;
      if ( (unsigned __int64)(v27 + 2) <= v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v27 = 4;
        v27[1] = v6;
        ++*(_DWORD *)a4;
        return v23;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)-1073741675;
}
