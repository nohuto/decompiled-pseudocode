/*
 * XREFs of CmpPrepareLightWeightTransaction @ 0x140A19AB4
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x140A197CC (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x14023FBC0 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x14023FC30 (ExAcquireFastMutexUnsafe.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmpCleanupLightWeightPrepare @ 0x140A19654 (CmpCleanupLightWeightPrepare.c)
 *     CmpProcessLightWeightUOW @ 0x140A19C0C (CmpProcessLightWeightUOW.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpPrepareLightWeightTransaction(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rdx
  int v6; // ebx
  __int64 NextElement; // rax
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10[2]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)byte_1400370E7, 0LL, 0LL, 2u, v10);
  if ( a1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
    *(_DWORD *)(a1 + 48) |= 1u;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    v9 = 0LL;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(a1 + 16, &v9, 0LL);
      if ( !NextElement )
        break;
      v6 = CmpProcessLightWeightUOW(NextElement, 0LL, 0LL, a2);
      if ( v6 < 0 )
      {
        CmpCleanupLightWeightPrepare(a1, v5, a2);
        goto LABEL_9;
      }
    }
  }
  v6 = 0;
LABEL_9:
  if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 1LL) )
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)qword_140037118, 0LL, 0LL, 2u, v10);
  return (unsigned int)v6;
}
