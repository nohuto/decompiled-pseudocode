/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x14066DB30
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14066D9B8 (CmpCommitLightWeightTransaction.c)
 *     CmpAbortLightWeightTransaction @ 0x140770CA4 (CmpAbortLightWeightTransaction.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402067A0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140206930 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     CmpAttachToRegistryProcess @ 0x1405F6390 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1406435F0 (CmpUnlockRegistry.c)
 *     CmpTransDereferenceTransaction @ 0x14066E000 (CmpTransDereferenceTransaction.c)
 *     CmpLockRegistryExclusive @ 0x1406EB57C (CmpLockRegistryExclusive.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071C8A0 (CmpTransMgrFreeVolatileData.c)
 */

_QWORD *__fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *result; // rax
  _OWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  CmpAttachToRegistryProcess((__int64)v11, a2, a3, a4);
  CmpLockRegistryExclusive(v6, v5);
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v11, 0);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v8 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v9 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v9 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( BugCheckParameter2[7] )
    return (_QWORD *)CmpTransDereferenceTransaction(BugCheckParameter2[7]);
  return result;
}
