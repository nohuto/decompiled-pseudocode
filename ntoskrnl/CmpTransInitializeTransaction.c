/*
 * XREFs of CmpTransInitializeTransaction @ 0x1407353BC
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1406B570C (CmpTransSearchAddTrans.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExfUnblockPushLock @ 0x14040CCE0 (ExfUnblockPushLock.c)
 *     CmpTransReferenceTransaction @ 0x1406B5C38 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x1406B5C90 (CmpTransDereferenceTransaction.c)
 *     CmTmCreateEnlistment @ 0x140735534 (CmTmCreateEnlistment.c)
 *     CmpAccountForLogReservation @ 0x1407355B4 (CmpAccountForLogReservation.c)
 *     CmpStartRMLogs @ 0x14073565C (CmpStartRMLogs.c)
 *     CmpTransSearchAddTransFromRm @ 0x140735958 (CmpTransSearchAddTransFromRm.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall CmpTransInitializeTransaction(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ebp
  int started; // esi
  void *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0LL;
  v1 = 0LL;
  v3 = 64;
  if ( *(_QWORD *)(a1 + 56) )
  {
    if ( *(PVOID *)(a1 + 64) != CmRmSystem )
    {
      started = CmpTransSearchAddTransFromRm((_DWORD)CmRmSystem, *(_QWORD *)(a1 + 56), 0, 1, (__int64)&v14);
      if ( started < 0 )
        return (unsigned int)started;
    }
    v1 = *(_QWORD *)(a1 + 56);
    started = CmpTransReferenceTransaction(v1);
    if ( started < 0 )
      return (unsigned int)started;
    started = CmpStartRMLogs(*(_QWORD *)(a1 + 64));
    if ( started < 0 )
      goto LABEL_16;
    started = CmTmCreateEnlistment(
                a1 + 80,
                *(_QWORD *)(*(_QWORD *)(a1 + 64) + 56LL),
                *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFFEuLL,
                a1);
    if ( started < 0 )
      goto LABEL_16;
    v12 = 0LL;
    v5 = *(void **)(a1 + 80);
    Object = 0LL;
    ObReferenceObjectByHandle(v5, 0, 0LL, 0, &Object, 0LL);
    LOBYTE(v6) = 1;
    v7 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)(a1 + 72) = Object;
    if ( (int)CmpAccountForLogReservation(v7, v8, v6) >= 0 )
      v3 = 96;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  if ( (*(_DWORD *)(a1 + 48) & 6) == 0 )
  {
    *(_DWORD *)(a1 + 48) = v3;
    --CmpTransactionInitializingCount;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    _InterlockedOr(v11, 0);
    if ( CmpTransactionInitializingEvent )
      ExfUnblockPushLock(&CmpTransactionInitializingEvent, 0LL);
    return 0;
  }
  started = -1072103422;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
LABEL_16:
  if ( v1 )
    CmpTransDereferenceTransaction(v1);
  return (unsigned int)started;
}
