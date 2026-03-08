/*
 * XREFs of EtwpAddGuidEntry @ 0x140690A30
 * Callers:
 *     EtwpEnableGuid @ 0x14068EEBC (EtwpEnableGuid.c)
 *     EtwpAddGuidEntry @ 0x140690A30 (EtwpAddGuidEntry.c)
 *     EtwpFindOrCreateGuidEntry @ 0x140694E30 (EtwpFindOrCreateGuidEntry.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140262AA0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     EtwpAddGuidEntry @ 0x140690A30 (EtwpAddGuidEntry.c)
 *     EtwpAllocGuidEntry @ 0x140690BD4 (EtwpAllocGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x140694F60 (EtwpFindGuidEntryByGuid.c)
 *     EtwpReferenceGuidEntry @ 0x140695054 (EtwpReferenceGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140695094 (EtwpUnreferenceGuidEntry.c)
 *     EtwpFreeGuidEntry @ 0x14078B2C4 (EtwpFreeGuidEntry.c)
 */

_QWORD *__fastcall EtwpAddGuidEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 v3; // rsi
  _QWORD *GuidEntryByGuid; // rbp
  _QWORD *v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // r15
  struct _KTHREAD *v10; // rax
  volatile signed __int64 *v11; // r14
  _QWORD *i; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  _QWORD *v21; // rcx

  v3 = a3;
  GuidEntryByGuid = 0LL;
  v7 = (_QWORD *)EtwpAllocGuidEntry();
  if ( !v7 )
    return 0LL;
  if ( a1 == EtwpHostSiloState
    || (GuidEntryByGuid = (_QWORD *)EtwpFindGuidEntryByGuid(EtwpHostSiloState, a2, (unsigned int)v3)) != 0LL
    || (GuidEntryByGuid = (_QWORD *)EtwpAddGuidEntry(EtwpHostSiloState, a2, (unsigned int)v3)) != 0LL )
  {
    v8 = 56LL * (((unsigned __int8)*a2 ^ (unsigned __int8)(a2[1] ^ a2[2] ^ a2[3])) & 0x3F) + a1 + 464;
    v9 = (_QWORD *)(v8 + 16 * v3);
    if ( GuidEntryByGuid )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
      v17 = GuidEntryByGuid + 2;
      GuidEntryByGuid[52] = KeGetCurrentThread();
      v18 = v7 + 2;
      v7[50] = GuidEntryByGuid;
      v19 = GuidEntryByGuid[2];
      if ( *(_QWORD **)(v19 + 8) != GuidEntryByGuid + 2 )
        goto LABEL_32;
      *v18 = v19;
      v7[3] = v17;
      *(_QWORD *)(v19 + 8) = v18;
      *v17 = v18;
    }
    v10 = KeGetCurrentThread();
    v11 = (volatile signed __int64 *)(v8 + 48);
    --v10->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)v11, 0LL);
    for ( i = (_QWORD *)*v9; ; i = (_QWORD *)*i )
    {
      if ( i == v9 )
        goto LABEL_10;
      v13 = *(_QWORD *)a2 - i[5];
      if ( *(_QWORD *)a2 == i[5] )
        v13 = *((_QWORD *)a2 + 1) - i[6];
      if ( !v13 && (unsigned __int8)EtwpReferenceGuidEntry((ULONG_PTR)i) )
        break;
    }
    if ( i )
    {
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v11);
      KeAbPostRelease((ULONG_PTR)v11);
      KeLeaveCriticalRegion();
      if ( !GuidEntryByGuid )
        goto LABEL_20;
      v20 = v7[2];
      if ( *(_QWORD **)(v20 + 8) == v7 + 2 )
      {
        v21 = (_QWORD *)v7[3];
        if ( (_QWORD *)*v21 == v7 + 2 )
        {
          *v21 = v20;
          *(_QWORD *)(v20 + 8) = v21;
          v7[50] = 0LL;
LABEL_30:
          GuidEntryByGuid[52] = 0LL;
          ExReleasePushLockEx(GuidEntryByGuid + 51, 0LL);
          KeLeaveCriticalRegion();
          if ( !v7 )
            return i;
          EtwpUnreferenceGuidEntry((ULONG_PTR)GuidEntryByGuid);
LABEL_20:
          --v7[4];
          EtwpFreeGuidEntry(v7);
          return i;
        }
      }
    }
    else
    {
LABEL_10:
      v14 = (_QWORD *)*v9;
      if ( *(_QWORD **)(*v9 + 8LL) == v9 )
      {
        *v7 = v14;
        i = v7;
        v7[1] = v9;
        v14[1] = v7;
        *v9 = v7;
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        KeLeaveCriticalRegion();
        v7 = 0LL;
        if ( !GuidEntryByGuid )
          return i;
        goto LABEL_30;
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  --v7[4];
  EtwpFreeGuidEntry(v7);
  return 0LL;
}
