/*
 * XREFs of CmpTransMgrRollback @ 0x140781FE8
 * Callers:
 *     CmRmFinalizeRecovery @ 0x140733440 (CmRmFinalizeRecovery.c)
 *     CmKtmNotification @ 0x140734290 (CmKtmNotification.c)
 *     CmpAbortLightWeightTransaction @ 0x140781F48 (CmpAbortLightWeightTransaction.c)
 *     CmpRmUnDoPhase @ 0x140A1C3B4 (CmpRmUnDoPhase.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 NextElement; // rax
  __int64 v6; // rdx
  int v8; // r8d
  int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a2 = 0;
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a1 + 16, &v10, 0LL);
    v6 = NextElement;
    if ( !NextElement )
      break;
    v8 = *(_DWORD *)(NextElement + 64);
    if ( (v8 & 1) == 0 )
    {
      ++*a2;
      v9 = *(_DWORD *)(NextElement + 68);
      if ( v9 )
      {
        if ( v9 == 12 && !*(_DWORD *)(v6 + 96) )
          *(_DWORD *)(v6 + 96) = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL);
      }
      else if ( !*(_DWORD *)(v6 + 88) )
      {
        *(_DWORD *)(v6 + 88) = *(_DWORD *)(*(_QWORD *)(v6 + 48) + 40LL);
      }
      *(_DWORD *)(v6 + 64) = v8 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
