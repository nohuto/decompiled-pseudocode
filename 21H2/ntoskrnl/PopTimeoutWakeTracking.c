/*
 * XREFs of PopTimeoutWakeTracking @ 0x14038B958
 * Callers:
 *     PopWakeSourceTimeoutWorker @ 0x140778960 (PopWakeSourceTimeoutWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     PopWakeInfoDereference @ 0x14038BB68 (PopWakeInfoDereference.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     PopFinalizeWakeInfo @ 0x140778AF4 (PopFinalizeWakeInfo.c)
 */

__int64 __fastcall PopTimeoutWakeTracking(__int64 *a1)
{
  _DWORD *v2; // rsi
  unsigned __int64 OldIrql; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 i; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  _DWORD *v16; // r9
  int v17; // eax
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v21[2]; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v22[2]; // [rsp+50h] [rbp-10h] BYREF

  v21[0] = 393217;
  v21[1] = 0;
  v22[1] = v22;
  v2 = 0LL;
  v22[0] = v22;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  if ( a1 == (__int64 *)PopCurrentWakeInfo )
  {
    PopCurrentWakeInfo = 0LL;
    PopPendingWakeInfo = (__int64)a1;
    if ( PopWakeSourceWorkInProgress )
    {
      for ( i = qword_140C243C8; (PVOID *)i != &PopWakeSourceWorkList; i = *(_QWORD *)(i + 8) )
      {
        if ( *(__int64 **)(i + 24) == a1 )
        {
          *(_QWORD *)(i + 32) = v21;
          v2 = v21;
          break;
        }
      }
    }
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
          v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v2 )
      KeWaitForSingleObject(v2, Executive, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( a1 == (__int64 *)PopPendingWakeInfo )
    {
      v4 = PopWakeInfoList;
      if ( *(__int64 **)(PopWakeInfoList + 8) != &PopWakeInfoList )
        __fastfail(3u);
      ++PopWakeInfoCount;
      PopPendingWakeInfo = 0LL;
      a1[1] = (__int64)&PopWakeInfoList;
      *a1 = v4;
      *(_QWORD *)(v4 + 8) = a1;
      PopWakeInfoList = (__int64)a1;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      v5 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v14 = KeGetCurrentIrql();
          if ( v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
          {
            v15 = KeGetCurrentPrcb();
            v16 = v15->SchedulerAssist;
            v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v13 = (v17 & v16[5]) == 0;
            v16[5] &= v17;
            if ( v13 )
              KiRemoveSystemWorkPriorityKick(v15);
          }
        }
      }
      __writecr8(v5);
      PopFinalizeWakeInfo(a1);
      KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    }
  }
  PopWakeInfoDereference(a1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  v7 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = v18->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = ((unsigned int)result & v19[5]) == 0;
        v19[5] &= result;
        if ( v13 )
          result = KiRemoveSystemWorkPriorityKick(v18);
      }
    }
  }
  __writecr8(v7);
  return result;
}
