/*
 * XREFs of SPCallServerHandleFileUsnQuery @ 0x1407FA620
 * Callers:
 *     sub_1406DC290 @ 0x1406DC290 (sub_1406DC290.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleFileUsnQuery(__int64 a1, void *a2, int a3, __int64 a4)
{
  unsigned int *v6; // rcx
  int v7; // ebx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r10
  unsigned int *v12; // r9
  unsigned int *v13; // rax
  __int64 v14; // r12
  unsigned int *v15; // rax
  unsigned int j; // r9d
  __int64 v17; // r10
  unsigned int *v18; // r8
  void **v19; // r10
  void *v20; // r10
  unsigned int k; // r8d
  __int64 v22; // rax
  unsigned int *v23; // rdx
  unsigned int *v24; // rcx
  size_t v25; // rsi
  NTSTATUS v26; // eax
  struct _FILE_OBJECT *v27; // r15
  __int64 v28; // r14
  __int64 Pool2; // rax
  _QWORD *v30; // r8
  __int64 v31; // r11
  unsigned int v32; // ecx
  _DWORD *n; // rdx
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned __int64 m; // rdx
  unsigned int v37; // eax
  unsigned int v38; // r9d
  unsigned int *v39; // r8
  unsigned int v40; // r9d
  unsigned int v41; // edx
  unsigned int *v42; // rax
  __int64 v43; // r13
  __int64 v44; // rax
  unsigned int v45; // eax
  __int128 Src; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+48h] BYREF
  __int64 v48; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v48) = a3;
  Object = a2;
  Src = 0LL;
  if ( a1 )
  {
    if ( a4 )
    {
      v6 = *(unsigned int **)(a1 + 8);
      if ( v6 )
      {
        if ( *(_DWORD *)a1 > 3u )
        {
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
          v38 = *v9;
          v39 = v9 + 1;
          if ( v9 + 1 < v9 )
            return (unsigned int)-1073741675;
          v13 = 0LL;
          if ( v38 )
            v13 = v39;
          if ( v38 != 8 )
            return (unsigned int)-1073741789;
          v14 = *(_QWORD *)v13;
          if ( *(_DWORD *)a1 > 4u )
          {
            v15 = v6;
            for ( j = 0; j < 4; ++j )
            {
              v17 = *v15;
              v18 = v15 + 1;
              if ( v15 + 1 < v15 )
                return (unsigned int)-1073741675;
              v15 = (unsigned int *)((char *)v18 + v17);
              if ( (unsigned int *)((char *)v18 + v17) < v18 )
                return (unsigned int)-1073741675;
            }
            v40 = *v15;
            if ( v15 + 1 >= v15 )
            {
              v19 = 0LL;
              if ( v40 )
                v19 = (void **)(v15 + 1);
              if ( v40 != 8 )
                return (unsigned int)-1073741762;
              v20 = *v19;
              if ( *(_DWORD *)a1 > 5u )
              {
                for ( k = 0; k < 5; ++k )
                {
                  v22 = *v6;
                  v23 = v6 + 1;
                  if ( v6 + 1 < v6 )
                    return (unsigned int)-1073741675;
                  v6 = (unsigned int *)((char *)v23 + v22);
                  if ( (unsigned int *)((char *)v23 + v22) < v23 )
                    return (unsigned int)-1073741675;
                }
                v41 = *v6;
                v42 = v6 + 1;
                if ( v6 + 1 < v6 )
                  return (unsigned int)-1073741675;
                v24 = 0LL;
                if ( v41 )
                  v24 = v42;
                if ( v41 != 4 )
                  return (unsigned int)-1073741789;
                v25 = *v24;
                if ( (_DWORD)v25 != 16 )
                  return (unsigned int)-1073741762;
                if ( !v20 )
                  return (unsigned int)-1073741811;
                Object = 0LL;
                v26 = ObReferenceObjectByHandle(v20, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
                v27 = (struct _FILE_OBJECT *)Object;
                v7 = v26;
                if ( v26 < 0 )
                {
LABEL_39:
                  if ( v27 )
                    ObfDereferenceObject(v27);
                  if ( v7 < 0 )
                    return (unsigned int)v7;
                  *(_DWORD *)(a4 + 4) = 32;
                  Pool2 = ExAllocatePool2(256LL, 32LL, 542329939LL);
                  if ( !Pool2 )
                    return (unsigned int)-1073741801;
                  v30 = (_QWORD *)(a4 + 8);
                  *(_QWORD *)(a4 + 8) = Pool2;
                  *(_DWORD *)a4 = 0;
                  v31 = Pool2;
                  v35 = 0;
                  for ( m = Pool2; v35 < *(_DWORD *)a4; m += v37 )
                  {
                    v37 = *(_DWORD *)m + 4;
                    if ( *(_DWORD *)m >= 0xFFFFFFFC || m + v37 < m )
                      return (unsigned int)-1073741675;
                    ++v35;
                  }
                  if ( m + 4 < m )
                    return (unsigned int)-1073741675;
                  if ( m + 12 <= v31 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)m = 8;
                    *(_QWORD *)(m + 4) = v14;
                    ++*(_DWORD *)a4;
                    if ( !*v30 )
                    {
                      v45 = *(_DWORD *)(a4 + 4);
                      if ( v45 + 20 < v45 )
                      {
                        *(_DWORD *)(a4 + 4) = -1;
                        return (unsigned int)-1073741675;
                      }
                      *(_DWORD *)(a4 + 4) = v45 + 20;
                      ++*(_DWORD *)a4;
                      return 0;
                    }
                    v32 = 0;
                    for ( n = (_DWORD *)*v30; v32 < *(_DWORD *)a4; n = (_DWORD *)((char *)n + v34) )
                    {
                      v34 = *n + 4;
                      if ( *n >= 0xFFFFFFFC || (_DWORD *)((char *)n + v34) < n )
                        return (unsigned int)-1073741675;
                      ++v32;
                    }
                    if ( n + 1 < n )
                      return (unsigned int)-1073741675;
                    v7 = 0;
                    if ( (unsigned __int64)n + v25 + 4 <= *v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      *n = 16;
                      memmove(n + 1, &Src, v25);
                      ++*(_DWORD *)a4;
                      return (unsigned int)v7;
                    }
                  }
                  return (unsigned int)-1073741789;
                }
                LODWORD(v48) = 0;
                v28 = ExAllocatePool2(256LL, 584LL, 542329939LL);
                if ( !v28 )
                {
                  v7 = -1073741801;
                  goto LABEL_39;
                }
                v7 = FsRtlKernelFsControlFile(v27, 590068, 0LL, 0, (_SLIST_ENTRY *)v28, 0x248u, (ULONG *)&v48);
                if ( v7 < 0 )
                {
LABEL_45:
                  ExFreePoolWithTag((PVOID)v28, 0);
                  goto LABEL_39;
                }
                if ( (unsigned int)v48 < 0x40 )
                {
LABEL_47:
                  v7 = -1073741762;
                  goto LABEL_45;
                }
                v43 = *(_QWORD *)v28;
                if ( v27->WriteAccess )
                {
                  v7 = FsRtlKernelFsControlFile(v27, 590063, 0LL, 0, (_SLIST_ENTRY *)v28, 0x248u, (ULONG *)&v48);
                  if ( v7 < 0 )
                    goto LABEL_45;
                  if ( (unsigned int)v48 < 8 )
                    goto LABEL_47;
                  v44 = *(_QWORD *)v28;
                }
                else
                {
                  v7 = FsRtlKernelFsControlFile(v27, 590059, 0LL, 0, (_SLIST_ENTRY *)v28, 0x248u, (ULONG *)&v48);
                  if ( v7 < 0 )
                    goto LABEL_45;
                  if ( (unsigned int)v48 < 0x40 )
                    goto LABEL_47;
                  v44 = *(_QWORD *)(v28 + 24);
                }
                *(_QWORD *)&Src = v43;
                *((_QWORD *)&Src + 1) = v44;
                goto LABEL_45;
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
  }
  return (unsigned int)-1073741811;
}
