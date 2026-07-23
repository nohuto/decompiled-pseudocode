/*
 * XREFs of PopPowerRequestCleanUp @ 0x140270A38
 * Callers:
 *     PspExitThread @ 0x14063F658 (PspExitThread.c)
 *     PopDeletePowerRequestObject @ 0x140670030 (PopDeletePowerRequestObject.c)
 *     PopClosePowerRequestObject @ 0x140670E10 (PopClosePowerRequestObject.c)
 *     PoDeletePowerRequest @ 0x140671380 (PoDeletePowerRequest.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PopPowerRequestExecuteCallbacks @ 0x140270918 (PopPowerRequestExecuteCallbacks.c)
 *     PoDestroyReasonContext @ 0x140270E84 (PoDestroyReasonContext.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopAcquirePowerRequestPushLock @ 0x14066E888 (PopAcquirePowerRequestPushLock.c)
 *     PopPowerRequestIsExecutionRequiredCapable @ 0x14066E8C4 (PopPowerRequestIsExecutionRequiredCapable.c)
 *     PopUpdatePowerRequestProcessWakeCounter @ 0x14066F390 (PopUpdatePowerRequestProcessWakeCounter.c)
 *     PopReleasePowerRequestPushLock @ 0x14066F86C (PopReleasePowerRequestPushLock.c)
 *     PopStatsDeletePowerRequest @ 0x14066FAA8 (PopStatsDeletePowerRequest.c)
 *     PopUmpoSendPowerRequestOverrideCleanup @ 0x14066FEAC (PopUmpoSendPowerRequestOverrideCleanup.c)
 *     PopDiagTracePowerRequestClose @ 0x14066FF54 (PopDiagTracePowerRequestClose.c)
 *     PopPowerRequestDeleteEntryById @ 0x14066FFE4 (PopPowerRequestDeleteEntryById.c)
 *     PopProcessDisplayRequiredChange @ 0x140670990 (PopProcessDisplayRequiredChange.c)
 *     PopNotifySessionUserPowerRequestDeleted @ 0x1406709B4 (PopNotifySessionUserPowerRequestDeleted.c)
 */

__int64 __fastcall PopPowerRequestCleanUp(unsigned int *Object)
{
  char v1; // si
  __int64 result; // rax
  void *v3; // rdi
  unsigned int v4; // r12d
  unsigned int *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int **v8; // rax
  PVOID *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  char v12; // r15
  unsigned int **v13; // rdx
  PVOID *v14; // rcx
  unsigned int v15; // ecx
  int *v16; // r8
  __int64 v17; // rdx
  _DWORD *v18; // r9
  unsigned int v19; // eax
  int v20; // eax
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v25; // eax
  bool v26; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *((_BYTE *)Object + 136);
  result = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = Object;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !*(_QWORD *)Object )
    return result;
  LOBYTE(Object) = 1;
  PopAcquirePowerRequestPushLock(Object);
  v8 = *(unsigned int ***)v5;
  if ( !*(_QWORD *)v5 )
    return PopReleasePowerRequestPushLock(v7, v6);
  v9 = (PVOID *)*((_QWORD *)v5 + 1);
  if ( v8[1] != v5 || *v9 != v5 )
    goto LABEL_52;
  *v9 = v8;
  v8[1] = (unsigned int *)v9;
  *(_QWORD *)v5 = 0LL;
  if ( v5[11] && (byte_140C23434 || v1) )
  {
    v5[11] = 0;
    if ( !v1 && (v5[6] & 8) == 0 )
      --dword_140C00300;
  }
  if ( (unsigned __int8)PopPowerRequestIsExecutionRequiredCapable(v5) )
    PopUpdatePowerRequestProcessWakeCounter(v5, 0LL);
  if ( *((_QWORD *)v5 + 15) )
  {
    v3 = (void *)*((_QWORD *)v5 + 15);
    ObfReferenceObjectWithTag(v3, 0x72506F50u);
    *((_QWORD *)v5 + 15) = 0LL;
  }
  if ( v1 )
    --PopSpecialPowerRequestObjectCount;
  else
    --PopPowerRequestObjectCount;
  PopPowerRequestDeleteEntryById(v5[7]);
  PopReleasePowerRequestPushLock(v11, v10);
  PopStatsDeletePowerRequest(v5);
  PopDiagTracePowerRequestClose(v5);
  KeAcquireInStackQueuedSpinLock(&PopPowerRequestSpinLock, &LockHandle);
  v12 = *((_BYTE *)v5 + 78);
  if ( !v12 )
    goto LABEL_24;
  v13 = (unsigned int **)*((_QWORD *)v5 + 7);
  v14 = (PVOID *)*((_QWORD *)v5 + 8);
  if ( v13[1] != v5 + 14 || *v14 != v5 + 14 )
LABEL_52:
    __fastfail(3u);
  *v14 = v13;
  v13[1] = (unsigned int *)v14;
  *((_BYTE *)v5 + 78) = 0;
LABEL_24:
  v15 = 0;
  v16 = PopPowerRequestAttributes;
  v17 = 0LL;
  v18 = v5 + 8;
  do
  {
    v19 = v5[6];
    if ( !_bittest((const int *)&v19, v15) && *v18 )
    {
      v20 = *v16 - 1;
      *v16 = v20;
      if ( !v15 || v15 == 3 || !v20 )
        --*((_BYTE *)v5 + v17 + 72);
      if ( !v15 )
        v4 = 2;
    }
    ++v15;
    ++v17;
    ++v18;
    v16 += 4;
  }
  while ( v15 < 6 );
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v25 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  PopPowerRequestExecuteCallbacks((__int64)(v5 + 18), v5[7], v5[4]);
  if ( v12 )
    ObfDereferenceObjectWithTag(v5, 0x72506F50u);
  result = PoDestroyReasonContext(*((PVOID *)v5 + 10));
  if ( v5[22] )
    result = PopNotifySessionUserPowerRequestDeleted(v5[4], v5[7]);
  if ( !v1 )
    result = PopUmpoSendPowerRequestOverrideCleanup(v5);
  if ( v3 )
  {
    PopProcessDisplayRequiredChange(v3, v4);
    result = ObfDereferenceObjectWithTag(v3, 0x72506F50u);
  }
  if ( v1 )
  {
    if ( v3 )
      return ObfDereferenceObjectWithTag(v3, 0x72506F50u);
  }
  return result;
}
