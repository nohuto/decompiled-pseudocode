/*
 * XREFs of MiEmptyTargetedWorkingSet @ 0x1406322E8
 * Callers:
 *     MiTrimAllSystemPagableMemory @ 0x140632E70 (MiTrimAllSystemPagableMemory.c)
 * Callees:
 *     MiReturnWsToExpansionList @ 0x1402A5FD4 (MiReturnWsToExpansionList.c)
 *     MiEmptyWorkingSetInitiate @ 0x140301814 (MiEmptyWorkingSetInitiate.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiEmptyTargetedWorkingSet(__int64 a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rdx
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  struct _KPRCB *v13; // r9
  _DWORD *v14; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v2 = (_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v4 = *(_QWORD **)(a1 + 32);
    if ( *(_QWORD **)(v3 + 8) != v2 || (_QWORD *)*v4 != v2 )
      __fastfail(3u);
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
    *v2 = 0LL;
    *(_BYTE *)(a1 + 185) = *(_BYTE *)(a1 + 185) & 0xF9 | 2;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v10 = (v9 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v9;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    MiEmptyWorkingSetInitiate(a1, 0, 0LL, -1LL);
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
    *(_BYTE *)(a1 + 185) &= 0xF9u;
    MiReturnWsToExpansionList(a1, 0);
  }
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v12 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      v13 = KeGetCurrentPrcb();
      v14 = v13->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v10 = ((unsigned int)result & v14[5]) == 0;
      v14[5] &= result;
      if ( v10 )
        result = KiRemoveSystemWorkPriorityKick((__int64)v13);
    }
  }
  __writecr8(v12);
  return result;
}
