/*
 * XREFs of CmpCleanupTransactionState @ 0x14073526C
 * Callers:
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 *     CmpRunDownCmRM @ 0x14074C420 (CmpRunDownCmRM.c)
 *     CmObliterateRMTxArray @ 0x140A19310 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140A19420 (CmpLazyCommitWorker.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402637F0 (ObDereferenceObjectDeferDelete.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x1406B5C90 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpLogCheckpoint @ 0x140735720 (CmpLogCheckpoint.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140AF2270 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, int a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v13; // rcx
  void **v14; // rax
  void *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KTHREAD *v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-58h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)a2, a3);
  CmpUnlockRegistry(v9, v8, v10, v11);
  CmpDetachFromRegistryProcess(&ApcState);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v13 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v14 = (void **)a2[1], *v14 != a2) )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = v14;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v15 = (void *)a2[9];
  if ( v15 )
    ObDereferenceObjectDeferDelete(v15);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry(v17, v16, v18, v19);
    v20 = KeGetCurrentThread();
    --v20->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    LOBYTE(v21) = 1;
    CmpLogCheckpoint(a1, v22, v21);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegion();
    CmpUnlockRegistry(v24, v23, v25, v26);
  }
}
