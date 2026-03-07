__int64 __fastcall CmpTransMgrPrepare(__int64 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v9; // r14
  __int64 NextElement; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  ULONG_PTR i; // rcx
  __int64 NextActiveHive; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  ULONG_PTR v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // r8
  __int64 v24; // r9
  ULONG_PTR v25; // rbp
  __int64 v26; // rcx
  struct _EX_RUNDOWN_REF *v28; // rbx
  struct _EX_RUNDOWN_REF *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // [rsp+20h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+28h] [rbp-70h] BYREF

  *a4 = 0;
  *a3 = 0;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = 1;
  *(_DWORD *)(a2 + 48) |= 1u;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( *(_QWORD *)(a2 + 16) == a2 + 16 )
  {
    *a4 = 1;
    return 0;
  }
  CmpAttachToRegistryProcess(&ApcState);
  ((void (*)(void))CmpLockRegistry)();
  v36 = 0LL;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a2 + 16, &v36, 0LL);
    if ( !NextElement )
      break;
    if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(NextElement + 48) + 32LL) + 4152LL) == a1 )
      ++*a3;
  }
  v11 = *(struct _EX_RUNDOWN_REF **)(a1 + 80);
  if ( v11 )
  {
    v28 = v11 + 205;
    if ( ExAcquireRundownProtection_0(v11 + 205) )
    {
      CmpUnlockRegistry(v26, v14, v15, v16);
      v22 = CmpTransMgrSyncHive((ULONG_PTR)v11);
      v29 = v28;
LABEL_26:
      ExReleaseRundownProtection_0(v29);
      goto LABEL_22;
    }
    v22 = 0;
    goto LABEL_21;
  }
  for ( i = 0LL; ; i = v17 )
  {
    NextActiveHive = CmpGetNextActiveHive(i);
    v17 = NextActiveHive;
    if ( !NextActiveHive )
      break;
    if ( *(_QWORD *)(NextActiveHive + 4152) == a1 )
    {
      v18 = *(unsigned int *)(NextActiveHive + 160);
      if ( (v18 & 2) == 0 )
      {
        v19 = *(unsigned int *)(a2 + 112);
        if ( (_DWORD)v19 )
        {
          v18 = 0LL;
          while ( NextActiveHive != *(_QWORD *)(a2 + 8 * v18 + 120) )
          {
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= (unsigned int)v19 )
              goto LABEL_10;
          }
        }
        CmpUnlockRegistry(v18, v19, v15, v16);
        v22 = CmpTransMgrSyncHive(v17);
        if ( v22 < 0 )
        {
          v29 = (struct _EX_RUNDOWN_REF *)(v17 + 1640);
          goto LABEL_26;
        }
        CmpLockRegistry(v21, v20, v23, v24, v36, ApcState.ApcListHead[0].Flink, ApcState.ApcListHead[0].Blink);
      }
    }
LABEL_10:
    ;
  }
  v25 = qword_140C028D0;
  v26 = *(unsigned int *)(*(_QWORD *)(qword_140C028D0 + 64) + 144LL);
  if ( (v26 & 1) != 0 )
    goto LABEL_20;
  HvLockHiveFlusherExclusive(qword_140C028D0);
  v30 = KeAbPreAcquire(v25 + 80, 0LL);
  v31 = v30;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v25 + 80), v30, v25 + 80);
  if ( v31 )
    *(_BYTE *)(v31 + 18) = 1;
  v22 = HvpMarkDirty(v25);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v25 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v25 + 80));
  KeAbPostRelease(v25 + 80);
  if ( v22 >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(v25 + 64) + 144LL) |= 1u;
    HvUnlockHiveFlusherExclusive(v25);
    CmpUnlockRegistry(v33, v32, v34, v35);
    v9 = 0;
    if ( (int)CmpFlushHive(v25, 0LL) < 0 )
    {
      v22 = -1073741670;
      goto LABEL_22;
    }
LABEL_20:
    v22 = 0;
    if ( !v9 )
      goto LABEL_22;
    goto LABEL_21;
  }
  HvUnlockHiveFlusherExclusive(v25);
LABEL_21:
  CmpUnlockRegistry(v26, v14, v15, v16);
LABEL_22:
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)v22;
}
