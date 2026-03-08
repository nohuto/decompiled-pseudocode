/*
 * XREFs of MiFreeMdlTracker @ 0x14061A3EC
 * Callers:
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiValidateMdlTracker @ 0x14061ABD8 (MiValidateMdlTracker.c)
 */

__int64 __fastcall MiFreeMdlTracker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  PEPROCESS v2; // rdi
  unsigned __int64 v5; // rsi
  unsigned __int64 *v6; // r14
  unsigned __int64 *v7; // rbx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v2 || (v2 = PsInitialSystemProcess) != 0LL )
  {
    v5 = v2[1].ActiveProcessors.StaticBitmap[11];
    if ( v5 )
    {
      v6 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 24), &LockHandle);
      v7 = *(unsigned __int64 **)v5;
      while ( v7 )
      {
        if ( BugCheckParameter2 >= v7[3] )
        {
          if ( BugCheckParameter2 <= v7[3] )
            break;
          v7 = (unsigned __int64 *)v7[1];
        }
        else
        {
          v7 = (unsigned __int64 *)*v7;
        }
      }
      if ( v7 )
      {
        v6 = v7;
        MiValidateMdlTracker((ULONG_PTR)v7);
        RtlAvlRemoveNode((unsigned __int64 *)v5, v7);
        *(_QWORD *)(v5 + 16) -= a2;
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v13 = (v12 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v12;
          if ( v13 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      if ( v6 )
      {
        ExFreeToNPagedLookasideList(&stru_140C67F80, v6);
      }
      else if ( *(_DWORD *)(v5 + 32) )
      {
        KeBugCheckEx(
          0x76u,
          1uLL,
          BugCheckParameter2,
          v2[1].Affinity.StaticBitmap[14],
          v2[1].ActiveProcessors.StaticBitmap[11]);
      }
    }
  }
  return 1LL;
}
