__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  int EnumObject; // ebx
  wchar_t *v6; // r12
  struct _KTHREAD *v7; // rax
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  unsigned int *v12; // rsi
  __int64 *v13; // rsi
  __int64 *v15; // rsi
  unsigned int i; // r14d
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 v19; // r9
  __int128 v20; // xmm0
  __int64 v21; // rax
  int Object; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  const wchar_t *v25; // rsi
  __int64 v26; // rax
  const wchar_t *j; // r14
  __int64 v28; // rax
  int v29; // eax
  unsigned int *v30; // r14
  __int64 v31; // rax
  struct _KTHREAD *v32; // rax
  char v33; // [rsp+30h] [rbp-A9h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v35; // [rsp+40h] [rbp-99h] BYREF
  _OWORD v36[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v37; // [rsp+68h] [rbp-71h]
  int *v38; // [rsp+78h] [rbp-61h]
  __int128 v39; // [rsp+80h] [rbp-59h] BYREF
  __int128 v40; // [rsp+90h] [rbp-49h]
  wchar_t v41[40]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  BugCheckParameter2 = 0LL;
  v35 = 0LL;
  LOBYTE(v2) = *(_BYTE *)(v2 + 40) & 1;
  v38 = 0LL;
  v33 = v2;
  EnumObject = 0;
  v6 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memset(v36, 0, sizeof(v36));
  v37 = 0LL;
  if ( !(_BYTE)v2 )
    goto LABEL_2;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  ExAcquireFastMutex((PFAST_MUTEX)&Resource[1]);
  if ( (HIDWORD(Resource[2].OwnerTable) & 2) != 0 )
  {
    EnumObject = -1073741670;
  }
  else
  {
    SpinLock = (PERESOURCE *)Resource[1].SpinLock;
    if ( *SpinLock != (PERESOURCE)&Resource[1].Address )
      __fastfail(3u);
    *(_QWORD *)a2 = (char *)Resource + 192;
    *(_QWORD *)(a2 + 8) = SpinLock;
    *SpinLock = (PERESOURCE)a2;
    Resource[1].SpinLock = a2;
    ++LODWORD(Resource[2].OwnerTable);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 212));
  }
  ExReleaseFastMutex((PFAST_MUTEX)&Resource[1]);
  if ( EnumObject >= 0 )
  {
LABEL_2:
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
    v8 = *(_QWORD *)(a2 + 24);
    v9 = *(_DWORD *)(v8 + 20);
    if ( !v9 )
    {
      v15 = &PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( i = 0; i < 6; ++i )
      {
        v17 = v15;
        if ( *(_DWORD *)v15 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v18 = v15[1];
          v19 = *((unsigned int *)v15 + 4);
          v20 = *(_OWORD *)v18;
          LODWORD(v40) = *(_DWORD *)(v18 + 16);
          v21 = *(_QWORD *)(a2 + 24);
          v39 = v20;
          EnumObject = ConstraintEval(*(unsigned int *)(v21 + 80), *(_QWORD *)(v21 + 88), &v39, v19, v36);
          if ( EnumObject != -1073741823 )
            break;
        }
        v15 += 4;
      }
      if ( EnumObject < 0 )
      {
        if ( EnumObject != -1073741823 )
          goto LABEL_12;
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(_DWORD *)&Resource[2].ActiveCount,
                       (__int64 (__fastcall *)(void *, __int64, _BYTE *))PiDqEnumQueryObjectsCallback,
                       a2);
        if ( EnumObject < 0 )
          goto LABEL_12;
      }
      else
      {
        if ( DWORD2(v37) != *((_DWORD *)v17 + 5) )
          goto LABEL_10;
        if ( DWORD2(v37) == 13 )
        {
          EnumObject = PnpStringFromGuid(v38, v41);
          if ( EnumObject < 0 )
            goto LABEL_12;
          v6 = v41;
        }
        else if ( DWORD2(v37) == 18 )
        {
          v6 = (wchar_t *)v38;
        }
        Object = PiDmGetObject(*((unsigned int *)v17 + 6), (__int64)v6, &BugCheckParameter2);
        EnumObject = Object;
        if ( Object == -1073741772 )
          goto LABEL_10;
        if ( Object < 0 )
          goto LABEL_12;
        EnumObject = PiDmListEnumObjectsWithCallback(
                       *((_DWORD *)v17 + 7),
                       (__int64 *)BugCheckParameter2,
                       PiDqEnumQueryObjectsCallback,
                       a2);
        PiDmObjectRelease((unsigned int *)BugCheckParameter2);
      }
      goto LABEL_9;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        v25 = *(const wchar_t **)(v8 + 32);
        while ( 2 )
        {
          if ( *v25 )
          {
            v26 = -1LL;
            do
              ++v26;
            while ( v25[v26] );
            for ( j = &v25[v26 + 1]; *j; j += v28 + 1 )
            {
              if ( !wcsicmp(v25, j) )
                goto LABEL_56;
              v28 = -1LL;
              do
                ++v28;
              while ( j[v28] );
            }
            v29 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, (__int64)v25, &BugCheckParameter2);
            EnumObject = v29;
            if ( v29 == -1073741772 )
            {
              EnumObject = 0;
            }
            else
            {
              if ( v29 < 0 )
                goto LABEL_12;
              v30 = (unsigned int *)BugCheckParameter2;
              if ( PiDmObjectIsEnumerable(BugCheckParameter2) )
                EnumObject = PiDqQueryEnumObject(a2, (__int64)v30);
              PiDmObjectRelease(v30);
              BugCheckParameter2 = 0LL;
              if ( EnumObject < 0 )
              {
LABEL_12:
                v13 = (__int64 *)(a2 + 64);
                ExReleasePushLockEx((__int64 *)(a2 + 64), 0LL);
                KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
                if ( EnumObject >= 0 )
                  goto LABEL_13;
                goto LABEL_63;
              }
            }
LABEL_56:
            v31 = -1LL;
            do
              ++v31;
            while ( v25[v31] );
            v25 += v31 + 1;
            continue;
          }
          goto LABEL_9;
        }
      }
    }
    else
    {
      v11 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v8 + 24), &BugCheckParameter2);
      EnumObject = v11;
      if ( v11 != -1073741772 )
      {
        if ( v11 < 0 )
          goto LABEL_12;
        v12 = (unsigned int *)BugCheckParameter2;
        if ( PiDmObjectIsEnumerable(BugCheckParameter2) )
          EnumObject = PiDqQueryEnumObject(a2, (__int64)v12);
        PiDmObjectRelease(v12);
LABEL_9:
        if ( EnumObject < 0 )
          goto LABEL_12;
      }
    }
LABEL_10:
    EnumObject = PiDqQueryActionQueueEntryCreate(0LL, 0LL, 0LL, &v35);
    if ( EnumObject >= 0 )
    {
      PiDqQueryAppendActionEntry(a2, v35);
      *(_DWORD *)(a2 + 216) |= 0x20u;
    }
    goto LABEL_12;
  }
  v13 = (__int64 *)(a2 + 64);
LABEL_63:
  v32 = KeGetCurrentThread();
  --v32->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v13, 0LL);
  *(_DWORD *)(a2 + 216) |= 1u;
  PiDqQueryFreeActiveData(a2);
  ExReleasePushLockEx(v13, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_13:
  if ( v33 )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)EnumObject;
}
