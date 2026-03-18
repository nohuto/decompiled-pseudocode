/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1407D0F34
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x1407D0E18 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C51C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1403025F0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x140302660 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x140768F38 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769424 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1407696FC (CmpLockRegistryExclusive.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF6230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF6250 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
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
  _OWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  CmpAttachToRegistryProcess(v11);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2, a2);
  CmpUnlockRegistry(v5, v4, v6, v7);
  CmpDetachFromRegistryProcess(v11);
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
