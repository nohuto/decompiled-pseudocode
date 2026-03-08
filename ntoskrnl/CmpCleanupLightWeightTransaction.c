/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x140782064
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x140781F48 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A197CC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x1406B5C90 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x1406B617C (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1406B6454 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x140AF22C0 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF2710 (CmpDetachFromRegistryProcess.c)
 */

void __fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2, a2);
  CmpUnlockRegistry(v5, v4, v6, v7);
  CmpDetachFromRegistryProcess(&ApcState);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v10 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v10 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( BugCheckParameter2[7] )
    CmpTransDereferenceTransaction(BugCheckParameter2[7]);
}
