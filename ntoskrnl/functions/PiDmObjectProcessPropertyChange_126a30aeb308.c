void __fastcall PiDmObjectProcessPropertyChange(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        _BYTE *a6)
{
  _BYTE *v6; // r12
  unsigned int v8; // r15d
  int Object; // ebx
  __int64 v10; // r13
  __int64 v11; // rsi
  unsigned int CachedKeyIndex; // eax
  __int64 v13; // r9
  __int64 v14; // r14
  unsigned int v15; // edx
  __int64 v16; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v18; // r14
  ULONG_PTR v19; // rcx
  void *v20; // r15
  int v21; // eax
  int v22; // eax
  unsigned int v23; // ebx
  void *Pool2; // rax
  bool v25; // zf
  __int64 *v26; // rdi
  unsigned int v27; // r8d
  __int64 *v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 *v31; // rsi
  struct _KTHREAD *v32; // rax
  __int64 v33; // rsi
  ULONG_PTR v34; // r14
  ULONG_PTR v35; // rcx
  int v36; // eax
  int v37; // eax
  _BYTE v38[12]; // [rsp+68h] [rbp-39h] BYREF
  unsigned int Size_4; // [rsp+74h] [rbp-2Dh] BYREF
  unsigned int v40; // [rsp+78h] [rbp-29h] BYREF
  void *Buf1; // [rsp+80h] [rbp-21h]
  ULONG_PTR v42; // [rsp+88h] [rbp-19h] BYREF
  void *Buf2; // [rsp+90h] [rbp-11h] BYREF
  __int64 v44[10]; // [rsp+98h] [rbp-9h] BYREF
  int v45; // [rsp+F8h] [rbp+57h]
  ULONG_PTR BugCheckParameter2; // [rsp+108h] [rbp+67h] BYREF
  char v48; // [rsp+110h] [rbp+6Fh]

  BugCheckParameter2 = a3;
  v45 = a1;
  v6 = a6;
  v44[0] = 0LL;
  v40 = 0;
  v8 = a1;
  *(_DWORD *)&v38[8] = 0;
  Object = 0;
  *a6 = 0;
  Size_4 = 0;
  v48 = 0;
  Buf1 = 0LL;
  Buf2 = 0LL;
  *(_QWORD *)v38 = 0LL;
  v42 = 0LL;
  if ( a4 )
    return;
  PiDmGetCacheKeys(a1, v44, &v40);
  if ( !v40 )
    return;
  v10 = a5;
  v11 = v44[0];
  CachedKeyIndex = PiDmGetCachedKeyIndex(v44[0], v40, a5);
  v14 = CachedKeyIndex;
  if ( CachedKeyIndex >= v15 )
    return;
  if ( !a3 )
  {
    Object = PiDmGetObject(v8, a2, &BugCheckParameter2, v13);
    if ( Object < 0 )
      return;
    v48 = 1;
  }
  v16 = 3 * v14;
  if ( *(_DWORD *)(v11 + 24 * v14 + 16) == 1 )
  {
    Object = PnpGetObjectProperty(0x5A706E50u, 0LL, 0LL, v10, (__int64)v38, (__int64)&Buf2, (__int64)&Size_4, 0x10000);
    if ( Object == -1073741275 )
    {
      Object = 0;
      *(_DWORD *)v38 = 0;
      Size_4 = 0;
    }
  }
  CurrentThread = KeGetCurrentThread();
  v18 = (__int64 *)BugCheckParameter2;
  v19 = BugCheckParameter2;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v19, 0LL);
  v20 = Buf2;
  v21 = v18[v16 + 14];
  if ( v21 )
  {
    if ( v21 == 1 || Object < 0 || !*(_DWORD *)(v11 + 8 * v16 + 16) )
      goto LABEL_35;
    v22 = PiDmCacheDataDecode(&v18[v16 + 14], &v38[4], 0LL, 0LL, &v38[8]);
    Object = v22;
    if ( v22 == -1073741275 )
    {
      *(_DWORD *)&v38[4] = 0;
      Object = 0;
      v25 = *(_DWORD *)v38 == 0;
    }
    else
    {
      if ( (int)(v22 + 0x80000000) >= 0 && v22 != -1073741789 )
        goto LABEL_35;
      v23 = *(_DWORD *)&v38[8];
      if ( *(_DWORD *)&v38[8] )
      {
        Pool2 = (void *)ExAllocatePool2(256LL, *(unsigned int *)&v38[8], 1517317712LL);
        Buf1 = Pool2;
        if ( !Pool2 )
        {
          Object = -1073741670;
          goto LABEL_35;
        }
      }
      else
      {
        Pool2 = Buf1;
      }
      Object = PiDmCacheDataDecode(&v18[v16 + 14], &v38[4], Pool2, v23, &v38[8]);
      if ( Object < 0 || *(_QWORD *)&v38[4] != __PAIR64__(Size_4, *(unsigned int *)v38) )
        goto LABEL_35;
      if ( !*(_DWORD *)&v38[8] )
      {
LABEL_22:
        *v6 = 1;
        goto LABEL_23;
      }
      v25 = memcmp(Buf1, v20, *(unsigned int *)&v38[8]) == 0;
    }
    if ( v25 )
      goto LABEL_22;
LABEL_35:
    PiDmCacheDataFree(&v18[v16 + 14]);
    if ( Object >= 0 && *(_DWORD *)(v11 + 8 * v16 + 16) == 1 && !*(_DWORD *)(v11 + 8 * v16 + 12) )
      Object = PiDmCacheDataEncode(
                 *(unsigned int *)v38,
                 v20,
                 Size_4,
                 *(unsigned int *)(v11 + 8 * v16 + 8),
                 0,
                 &v18[v16 + 14]);
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v11 + 8 * v16 + 16) )
    goto LABEL_35;
LABEL_23:
  ExReleasePushLockEx(v18, 0LL);
  KeLeaveCriticalRegion();
  if ( *(_DWORD *)(v11 + 8 * v16 + 16) && !*v6 )
  {
    v27 = 0;
    v28 = PiDmAggregatedBooleanDefs;
    while ( 1 )
    {
      v29 = v28[1];
      if ( *(_DWORD *)(v29 + 16) == *(_DWORD *)(a5 + 16) )
      {
        v30 = *(_QWORD *)v29 - *(_QWORD *)a5;
        if ( *(_QWORD *)v29 == *(_QWORD *)a5 )
          v30 = *(_QWORD *)(v29 + 8) - *(_QWORD *)(a5 + 8);
        if ( !v30 && v45 == *(_DWORD *)v28 )
          break;
      }
      ++v27;
      v28 += 7;
      if ( v27 >= 3 )
        goto LABEL_25;
    }
    v31 = &PiDmAggregatedBooleanDefs[7 * v27];
    if ( v31 )
    {
      if ( (int)PiDmGetReferencedObjectFromProperty(
                  v45,
                  a2,
                  (_DWORD)v18,
                  v29,
                  v31[2],
                  *((_DWORD *)v31 + 6),
                  (__int64)&v42) >= 0 )
      {
        v32 = KeGetCurrentThread();
        v33 = v31[6];
        v26 = (__int64 *)v42;
        v34 = v42;
        v35 = v42;
        --v32->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v35, 0LL);
        v20 = Buf2;
        if ( Object < 0 || (v36 = *(_DWORD *)(v34 + v33), v36 == 0x80000000) )
        {
          *(_DWORD *)(v34 + v33) = 0x80000000;
          goto LABEL_60;
        }
        if ( *(_DWORD *)&v38[4] == 17 )
        {
          if ( *(_BYTE *)Buf1 == 0xFF )
          {
            if ( *(_DWORD *)v38 == 17 && *(_BYTE *)Buf2 )
              goto LABEL_60;
            v37 = v36 - 1;
LABEL_59:
            *(_DWORD *)(v34 + v33) = v37;
            goto LABEL_60;
          }
          if ( *(_BYTE *)Buf1 )
          {
LABEL_60:
            ExReleasePushLockEx(v26, 0LL);
            KeLeaveCriticalRegion();
            v18 = (__int64 *)BugCheckParameter2;
            goto LABEL_26;
          }
        }
        if ( *(_DWORD *)v38 != 17 || *(_BYTE *)Buf2 != 0xFF )
          goto LABEL_60;
        v37 = v36 + 1;
        goto LABEL_59;
      }
    }
  }
LABEL_25:
  v26 = (__int64 *)v42;
LABEL_26:
  if ( Buf1 )
    ExFreePoolWithTag(Buf1, 0x5A706E50u);
  if ( v20 )
    ExFreePoolWithTag(v20, 0x5A706E50u);
  if ( v26 )
    PiDmObjectRelease(v26);
  if ( v48 )
    PiDmObjectRelease(v18);
}
