/*
 * XREFs of SPCallServerHandleFileIntegrityUpdate @ 0x1407FA154
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetCachedSigningLevel @ 0x1404155D0 (ZwSetCachedSigningLevel.c)
 *     FsRtlSetKernelEaFile @ 0x140786AA0 (FsRtlSetKernelEaFile.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByPointer @ 0x1407C93D0 (ObOpenObjectByPointer.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleFileIntegrityUpdate(__int64 a1, void *a2, int a3, __int64 a4)
{
  unsigned int *v6; // rcx
  int v7; // ebx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r10
  unsigned int *v12; // r9
  unsigned int *v13; // rax
  unsigned int v14; // esi
  unsigned int m; // r8d
  __int64 v16; // rax
  unsigned int *v17; // rdx
  unsigned int v18; // edx
  _OWORD *v19; // r15
  void *v20; // r12
  __int64 Pool2; // r12
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rsi
  char *v25; // rax
  void **v26; // r10
  void *v27; // r10
  unsigned int *v28; // rax
  unsigned int j; // r9d
  __int64 v30; // r11
  unsigned int *v31; // r8
  unsigned int *v32; // rax
  unsigned int v33; // r13d
  unsigned int *v34; // rax
  unsigned int k; // r9d
  __int64 v36; // r11
  unsigned int *v37; // r8
  __int64 v38; // r8
  __int64 v39; // rax
  unsigned int v40; // ecx
  _DWORD *v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // ecx
  _DWORD *v44; // rdx
  unsigned int v45; // eax
  unsigned int v46; // r9d
  unsigned int v47; // r9d
  unsigned int *v48; // r8
  unsigned int v49; // r9d
  unsigned int *v50; // r8
  __int64 v51; // rax
  unsigned int v52; // esi
  char v53; // cl
  __int64 v54; // r15
  unsigned int v55; // eax
  unsigned int v56; // eax
  HANDLE Handle; // [rsp+40h] [rbp-20h] BYREF
  __int64 v58; // [rsp+48h] [rbp-18h]
  __int128 v59; // [rsp+50h] [rbp-10h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v61; // [rsp+B0h] [rbp+50h] BYREF

  LODWORD(v61) = a3;
  Object = a2;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( !v6 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v6;
  for ( i = 0; i < 3; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( v9 + 1 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  v46 = *v9;
  if ( v9 + 1 < v9 )
    return (unsigned int)-1073741675;
  v26 = 0LL;
  if ( v46 )
    v26 = (void **)(v9 + 1);
  if ( v46 != 8 )
    return (unsigned int)-1073741762;
  v27 = *v26;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v28 = v6;
  for ( j = 0; j < 4; ++j )
  {
    v30 = *v28;
    v31 = v28 + 1;
    if ( v28 + 1 < v28 )
      return (unsigned int)-1073741675;
    v28 = (unsigned int *)((char *)v31 + v30);
    if ( (unsigned int *)((char *)v31 + v30) < v31 )
      return (unsigned int)-1073741675;
  }
  v47 = *v28;
  v48 = v28 + 1;
  if ( v28 + 1 < v28 )
    return (unsigned int)-1073741675;
  v32 = 0LL;
  if ( v47 )
    v32 = v48;
  if ( v47 != 4 )
    return (unsigned int)-1073741789;
  v33 = *v32;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v34 = v6;
  for ( k = 0; k < 5; ++k )
  {
    v36 = *v34;
    v37 = v34 + 1;
    if ( v34 + 1 < v34 )
      return (unsigned int)-1073741675;
    v34 = (unsigned int *)((char *)v37 + v36);
    if ( (unsigned int *)((char *)v37 + v36) < v37 )
      return (unsigned int)-1073741675;
  }
  v49 = *v34;
  v50 = v34 + 1;
  if ( v34 + 1 < v34 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( v49 )
    v13 = v50;
  if ( v49 != 4 )
    return (unsigned int)-1073741789;
  v14 = *v13;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v16 = *v6;
    v17 = v6 + 1;
    if ( v6 + 1 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  v18 = *v6;
  if ( v6 + 1 < v6 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( v18 )
    v19 = v6 + 1;
  if ( v18 != 16 )
    return (unsigned int)-1073741811;
  Handle = 0LL;
  v20 = 0LL;
  v59 = 0LL;
  if ( !v27 || !v19 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v7 = ObReferenceObjectByHandle(v27, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  if ( v7 < 0 )
    goto LABEL_31;
  LODWORD(v61) = 0;
  Pool2 = ExAllocatePool2(256LL, 584LL, 542329939LL);
  if ( !Pool2 )
    goto LABEL_29;
  v7 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590068, 0LL, 0, (_SLIST_ENTRY *)Pool2, 0x248u, (ULONG *)&v61);
  if ( v7 >= 0 )
  {
    if ( (unsigned int)v61 >= 0x40 )
    {
      v58 = *(_QWORD *)Pool2;
      v7 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590059, 0LL, 0, (_SLIST_ENTRY *)Pool2, 0x248u, (ULONG *)&v61);
      if ( v7 < 0 )
        goto LABEL_41;
      if ( (unsigned int)v61 >= 0x40 )
      {
        v51 = *(_QWORD *)(Pool2 + 24);
        *(_QWORD *)&v59 = v58;
        *((_QWORD *)&v59 + 1) = v51;
        goto LABEL_41;
      }
    }
    v7 = -1073741762;
  }
LABEL_41:
  ExFreePoolWithTag((PVOID)Pool2, 0);
  if ( v7 < 0 )
    goto LABEL_30;
  if ( v59 != *v19 )
  {
    v7 = -1073741762;
    goto LABEL_30;
  }
  if ( v33 )
  {
    *(_QWORD *)&v59 = -1LL;
    *((_QWORD *)&v59 + 1) = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    if ( ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x18u, (POBJECT_TYPE)IoFileObjectType, 0, &Handle) >= 0 )
    {
      if ( v14 && (v52 = v14 - 1) != 0 && v52 - 1 <= 1 )
        v53 = 6;
      else
        v53 = 0;
      LOBYTE(v23) = v53;
      ZwSetCachedSigningLevel(2LL, v23);
    }
    LODWORD(v61) = 0;
    v24 = ExAllocatePool2(256LL, 584LL, 542329939LL);
    if ( !v24 )
      goto LABEL_29;
    v7 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590068, 0LL, 0, (_SLIST_ENTRY *)v24, 0x248u, (ULONG *)&v61);
    if ( v7 >= 0 )
    {
      if ( (unsigned int)v61 >= 0x40 )
      {
        v54 = *(_QWORD *)v24;
        v7 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, 590059, 0LL, 0, (_SLIST_ENTRY *)v24, 0x248u, (ULONG *)&v61);
        if ( v7 >= 0 )
        {
          if ( (unsigned int)v61 >= 0x40 )
          {
            *((_QWORD *)&v59 + 1) = *(_QWORD *)(v24 + 24);
            *(_QWORD *)&v59 = v54;
          }
          else
          {
            v7 = -1073741762;
          }
        }
      }
      else
      {
        v7 = -1073741762;
      }
    }
    ExFreePoolWithTag((PVOID)v24, 0);
    if ( v7 < 0 )
      goto LABEL_30;
  }
  v25 = (char *)ExAllocatePool2(256LL, 58LL, 542329939LL);
  if ( !v25 )
  {
LABEL_29:
    v7 = -1073741801;
LABEL_30:
    v20 = 0LL;
    goto LABEL_31;
  }
  *(_OWORD *)v25 = 0LL;
  *((_OWORD *)v25 + 1) = 0LL;
  *((_OWORD *)v25 + 2) = 0LL;
  *((_QWORD *)v25 + 6) = 0LL;
  *((_WORD *)v25 + 28) = 0;
  *((_WORD *)v25 + 3) = 24;
  v25[5] = 25;
  qmemcpy(v25 + 8, "$Kernel.Purge.AppxFICache", 25);
  *(_OWORD *)(v25 + 34) = v59;
  *(_QWORD *)(v25 + 50) = 0LL;
  v20 = v25;
  v7 = FsRtlSetKernelEaFile((PFILE_OBJECT)Object, v25, 58);
LABEL_31:
  if ( Handle )
    ZwClose(Handle);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  if ( v7 >= 0 )
  {
    v22 = *(_QWORD *)(a4 + 8);
    if ( !v22 )
    {
      v55 = *(_DWORD *)(a4 + 4);
      if ( v55 + 8 < v55 )
        goto LABEL_113;
      *(_DWORD *)(a4 + 4) = v55 + 8;
LABEL_72:
      ++*(_DWORD *)a4;
      if ( !*(_DWORD *)(a4 + 4) )
        return (unsigned int)-1073741762;
      v39 = ExAllocatePool2(256LL, *(unsigned int *)(a4 + 4), 542329939LL);
      if ( !v39 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v39;
      *(_DWORD *)a4 = 0;
      v38 = *(_QWORD *)(a4 + 8);
      if ( v38 )
      {
        v43 = 0;
        v44 = *(_DWORD **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v45 = *v44 + 4;
            if ( *v44 >= 0xFFFFFFFC || (_DWORD *)((char *)v44 + v45) < v44 )
              break;
            ++v43;
            v44 = (_DWORD *)((char *)v44 + v45);
            if ( v43 >= *(_DWORD *)a4 )
              goto LABEL_121;
          }
        }
        else
        {
LABEL_121:
          if ( v44 + 1 >= v44 )
          {
            v7 = 0;
            if ( (unsigned __int64)(v44 + 2) <= v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *v44 = 4;
              v44[1] = 0;
              ++*(_DWORD *)a4;
              return (unsigned int)v7;
            }
            return (unsigned int)-1073741789;
          }
        }
        return (unsigned int)-1073741675;
      }
      v56 = *(_DWORD *)(a4 + 4);
      if ( v56 + 8 >= v56 )
      {
        *(_DWORD *)(a4 + 4) = v56 + 8;
        ++*(_DWORD *)a4;
        return 0;
      }
LABEL_113:
      *(_DWORD *)(a4 + 4) = -1;
      return (unsigned int)-1073741675;
    }
    v40 = 0;
    v41 = *(_DWORD **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v42 = *v41 + 4;
        if ( *v41 >= 0xFFFFFFFC || (_DWORD *)((char *)v41 + v42) < v41 )
          break;
        ++v40;
        v41 = (_DWORD *)((char *)v41 + v42);
        if ( v40 >= *(_DWORD *)a4 )
          goto LABEL_115;
      }
    }
    else
    {
LABEL_115:
      if ( v41 + 1 >= v41 )
      {
        if ( (unsigned __int64)(v41 + 2) <= v22 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v41 = 4;
          v41[1] = 0;
          goto LABEL_72;
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)v7;
}
