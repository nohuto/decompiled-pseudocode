/*
 * XREFs of PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1406A7660
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x1406A83CC (PiDqQuerySerializeActionQueue.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D19D0 (_wcsicmp.c)
 *     ConstraintEval @ 0x1406A710C (ConstraintEval.c)
 *     PiDqQueryFreeActiveData @ 0x1406A74F8 (PiDqQueryFreeActiveData.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1406A8988 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqQueryAppendActionEntry @ 0x1406A8A14 (PiDqQueryAppendActionEntry.c)
 *     PiDqQueryEnumObject @ 0x1406AC914 (PiDqQueryEnumObject.c)
 *     PiDmEnumObjectsWithCallback @ 0x1406ADEC8 (PiDmEnumObjectsWithCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1406AE5B0 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmGetObject @ 0x1406AF84C (PiDmGetObject.c)
 *     PiDmObjectRelease @ 0x1406AFBD0 (PiDmObjectRelease.c)
 *     PiDmObjectIsEnumerable @ 0x1406B050C (PiDmObjectIsEnumerable.c)
 *     _PnpStringFromGuid @ 0x1406B1200 (_PnpStringFromGuid.c)
 */

__int64 __fastcall PiDqObjectManagerEnumerateAndRegisterQuery(PERESOURCE Resource, KSPIN_LOCK a2)
{
  __int64 v2; // rax
  char v5; // r14
  int EnumObject; // ebx
  _BYTE *v7; // r12
  struct _KTHREAD *v8; // rax
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // eax
  PVOID v13; // rsi
  PVOID v14; // rcx
  ULONG_PTR v15; // rsi
  __int64 *v17; // rsi
  unsigned int j; // r14d
  __int64 *v19; // r13
  __int64 v20; // rax
  int v21; // r9d
  __int128 v22; // xmm0
  __int64 v23; // rax
  int v24; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *SpinLock; // rcx
  int v27; // eax
  const wchar_t *v28; // rsi
  __int64 v29; // rax
  const wchar_t *i; // r14
  __int64 v31; // rax
  int Object; // eax
  PVOID v33; // r14
  __int64 v34; // rax
  struct _KTHREAD *v35; // rax
  __int64 v36; // [rsp+20h] [rbp-B9h]
  char v37; // [rsp+30h] [rbp-A9h]
  PVOID P; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v39; // [rsp+40h] [rbp-99h] BYREF
  _OWORD v40[2]; // [rsp+48h] [rbp-91h] BYREF
  __int128 v41; // [rsp+68h] [rbp-71h]
  _BYTE *v42; // [rsp+78h] [rbp-61h]
  __int128 v43; // [rsp+80h] [rbp-59h] BYREF
  __int128 v44; // [rsp+90h] [rbp-49h]
  _BYTE v45[80]; // [rsp+A0h] [rbp-39h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  P = 0LL;
  v39 = 0LL;
  v5 = *(_BYTE *)(v2 + 40) & 1;
  v37 = v5;
  EnumObject = 0;
  v42 = 0LL;
  v7 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  if ( !v5 )
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
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&Resource[1]);
  if ( EnumObject >= 0 )
  {
LABEL_2:
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 64, 0LL);
    v9 = *(_QWORD *)(a2 + 24);
    v10 = *(_DWORD *)(v9 + 20);
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 1 )
        {
          v28 = *(const wchar_t **)(v9 + 32);
          while ( 2 )
          {
            if ( *v28 )
            {
              v29 = -1LL;
              do
                ++v29;
              while ( v28[v29] );
              for ( i = &v28[v29 + 1]; *i; i += v31 + 1 )
              {
                if ( !wcsicmp(v28, i) )
                  goto LABEL_60;
                v31 = -1LL;
                do
                  ++v31;
                while ( i[v31] );
              }
              Object = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, v28, &P);
              EnumObject = Object;
              if ( Object == -1073741772 )
                goto LABEL_60;
              if ( Object >= 0 )
              {
                v33 = P;
                if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
                  EnumObject = PiDqQueryEnumObject(a2, v33);
                PiDmObjectRelease(v33);
                P = 0LL;
                if ( EnumObject >= 0 )
                {
LABEL_60:
                  v34 = -1LL;
                  do
                    ++v34;
                  while ( v28[v34] );
                  v28 += v34 + 1;
                  continue;
                }
              }
              goto LABEL_12;
            }
            break;
          }
        }
        goto LABEL_10;
      }
      v12 = PiDmGetObject(*(unsigned int *)&Resource[2].ActiveCount, *(_QWORD *)(v9 + 24), &P);
      EnumObject = v12;
      if ( v12 != -1073741772 )
      {
        if ( v12 < 0 )
          goto LABEL_12;
        v13 = P;
        if ( (unsigned __int8)PiDmObjectIsEnumerable((ULONG_PTR)P) )
          EnumObject = PiDqQueryEnumObject(a2, v13);
        v14 = v13;
LABEL_9:
        PiDmObjectRelease(v14);
        if ( EnumObject >= 0 )
          goto LABEL_10;
LABEL_12:
        v15 = a2 + 64;
        ExReleasePushLockEx(a2 + 64, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v5 = v37;
        goto LABEL_13;
      }
    }
    else
    {
      v17 = &PiDqQueryConstraintData;
      EnumObject = -1073741823;
      for ( j = 0; j < 6; ++j )
      {
        v19 = v17;
        if ( *(_DWORD *)v17 == *(_DWORD *)&Resource[2].ActiveCount )
        {
          v20 = v17[1];
          v21 = *((_DWORD *)v17 + 4);
          v22 = *(_OWORD *)v20;
          LODWORD(v44) = *(_DWORD *)(v20 + 16);
          v23 = *(_QWORD *)(a2 + 24);
          v43 = v22;
          EnumObject = ConstraintEval(*(_DWORD *)(v23 + 80), *(_DWORD **)(v23 + 88), (__int64)&v43, v21, (__int64)v40);
          if ( EnumObject != -1073741823 )
            break;
        }
        v17 += 4;
      }
      if ( EnumObject < 0 )
      {
        if ( EnumObject != -1073741823 )
          goto LABEL_12;
        EnumObject = PiDmEnumObjectsWithCallback(
                       *(unsigned int *)&Resource[2].ActiveCount,
                       PiDqEnumQueryObjectsCallback,
                       a2);
        if ( EnumObject < 0 )
          goto LABEL_12;
      }
      else if ( DWORD2(v41) == *((_DWORD *)v19 + 5) )
      {
        if ( DWORD2(v41) == 13 )
        {
          EnumObject = PnpStringFromGuid(v42, v45);
          if ( EnumObject < 0 )
            goto LABEL_12;
          v7 = v45;
        }
        else if ( DWORD2(v41) == 18 )
        {
          v7 = v42;
        }
        v24 = PiDmGetObject(*((unsigned int *)v19 + 6), v7, &P);
        EnumObject = v24;
        if ( v24 != -1073741772 )
        {
          if ( v24 < 0 )
            goto LABEL_12;
          v27 = PiDmListEnumObjectsWithCallback(*((unsigned int *)v19 + 7), P, PiDqEnumQueryObjectsCallback, a2, v36);
          v14 = P;
          EnumObject = v27;
          goto LABEL_9;
        }
      }
    }
LABEL_10:
    EnumObject = PiDqQueryActionQueueEntryCreate(0LL, 0LL, 0LL, &v39);
    if ( EnumObject >= 0 )
    {
      PiDqQueryAppendActionEntry(a2, v39);
      *(_DWORD *)(a2 + 216) |= 0x20u;
    }
    goto LABEL_12;
  }
  v15 = a2 + 64;
LABEL_13:
  if ( EnumObject < 0 )
  {
    v35 = KeGetCurrentThread();
    --v35->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v15, 0LL);
    *(_DWORD *)(a2 + 216) |= 1u;
    PiDqQueryFreeActiveData(a2);
    ExReleasePushLockEx(v15, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  if ( v5 )
  {
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return (unsigned int)EnumObject;
}
