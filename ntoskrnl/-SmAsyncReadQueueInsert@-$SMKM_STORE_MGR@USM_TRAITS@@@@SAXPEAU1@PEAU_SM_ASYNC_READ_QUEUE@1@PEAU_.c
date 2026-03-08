/*
 * XREFs of ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1405BC0A4
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405BDBDC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x1404631EE (ExQueueWorkItemToPrivatePool.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(
        __int64 a1,
        __int64 a2,
        ULONG_PTR a3,
        unsigned int a4)
{
  volatile signed __int64 *v4; // r15
  __int128 *v8; // rdi
  unsigned __int64 v9; // rsi
  ULONG_PTR *v10; // rdx
  unsigned __int64 v11; // rbx
  __int128 v12; // xmm0
  __int64 v13; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  ULONG_PTR *result; // rax
  _QWORD *v20; // rcx
  ULONG_PTR BugCheckParameter2[2]; // [rsp+30h] [rbp-10h] BYREF

  BugCheckParameter2[0] = 0LL;
  BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
  v4 = (volatile signed __int64 *)(a2 + 768);
  *(_DWORD *)(a3 + 32) ^= (*(_DWORD *)(a3 + 32) ^ a4) & 7;
  v8 = (__int128 *)(a2 + 24LL * a4);
  *(_DWORD *)(a3 + 40) ^= (*(_DWORD *)(a3 + 40) ^ (a4 >> 3)) & 3;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 768));
  if ( *((_DWORD *)v8 + 4) || *((_DWORD *)v8 + 5) )
  {
    *(_QWORD *)a3 = **((_QWORD **)v8 + 1) + 1LL;
    **((_QWORD **)v8 + 1) = a3;
    *((_QWORD *)v8 + 1) = a3;
    v11 = *(_QWORD *)a3;
    if ( v11 >= KeQueryActiveProcessorCountEx(0xFFFFu) && *((__int128 **)v8 + 1) != v8 )
    {
      v12 = *v8;
      *((_QWORD *)v8 + 1) = v8;
      *(_OWORD *)BugCheckParameter2 = v12;
      *(_QWORD *)v8 = 0LL;
    }
  }
  else
  {
    v10 = (ULONG_PTR *)BugCheckParameter2[1];
    *(_QWORD *)a3 = *(_QWORD *)BugCheckParameter2[1] + 1LL;
    *v10 = a3;
    BugCheckParameter2[1] = a3;
  }
  *((_DWORD *)v8 + 4) += *(_DWORD *)BugCheckParameter2[1];
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      v13 = (unsigned int)v17 & SchedulerAssist[5];
      SchedulerAssist[5] = v13;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v9);
  while ( 1 )
  {
    result = BugCheckParameter2;
    if ( (ULONG_PTR *)BugCheckParameter2[1] == BugCheckParameter2 )
      break;
    v20 = (_QWORD *)BugCheckParameter2[0];
    result = *(ULONG_PTR **)BugCheckParameter2[0];
    BugCheckParameter2[0] = *(_QWORD *)BugCheckParameter2[0];
    if ( v20 == (_QWORD *)BugCheckParameter2[1] )
    {
      BugCheckParameter2[0] = 0LL;
      result = BugCheckParameter2;
      BugCheckParameter2[1] = (ULONG_PTR)BugCheckParameter2;
    }
    else
    {
      --*(_QWORD *)BugCheckParameter2[1];
    }
    if ( !v20 )
      break;
    *v20 = 0LL;
    v20[2] = SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueWorker;
    v20[3] = v20;
    ExQueueWorkItemToPrivatePool(v20, a4, v13, *(_QWORD *)(a1 + 2048), *(_QWORD *)(a1 + 1936));
  }
  return result;
}
