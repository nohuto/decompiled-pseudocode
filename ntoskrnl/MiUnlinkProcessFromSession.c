/*
 * XREFs of MiUnlinkProcessFromSession @ 0x1402A5200
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1402A54F4 (MiDeleteFinalPageTables.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiUnlinkProcessFromSession(__int64 a1)
{
  __int64 v2; // rdx
  __int64 *v3; // rcx
  __int64 *v4; // rdx
  __int64 **v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
  v2 = *(_QWORD *)(a1 + 1368);
  if ( v2 )
  {
    v3 = (__int64 *)(a1 + 1184);
    if ( *(_QWORD *)(a1 + 1184) )
    {
      if ( (*(_BYTE *)(a1 + 1849) & 1) != 0 && !*(_QWORD *)(v2 + 608) )
        *(_QWORD *)(v2 + 608) = 1LL;
      v4 = (__int64 *)*v3;
      v5 = *(__int64 ***)(a1 + 1192);
      if ( *(__int64 **)(*v3 + 8) != v3 || *v5 != v3 )
LABEL_13:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = (__int64)v5;
    }
  }
  v6 = *(_QWORD *)(a1 + 1984);
  v7 = *(_QWORD **)(a1 + 1992);
  if ( *(_QWORD *)(v6 + 8) != a1 + 1984 || *v7 != a1 + 1984 )
    goto LABEL_13;
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  result = KxReleaseQueuedSpinLock(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && LockHandle.OldIrql <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( v12 )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  return result;
}
