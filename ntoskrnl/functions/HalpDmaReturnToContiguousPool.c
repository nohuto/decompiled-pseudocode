void __fastcall HalpDmaReturnToContiguousPool(__int64 a1, unsigned __int64 a2, char a3)
{
  ULONG v5; // ebp
  unsigned __int8 CurrentIrql; // di
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = HalpDmaTranslationEntryToIndex(a1, a2, &v14);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  RtlClearBits(*(PRTL_BITMAP *)(a1 + 24), v5, 1u);
  if ( a3 )
    ++*(_DWORD *)(a1 + 208);
  if ( CurrentIrql != 15 )
  {
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v8 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v8 <= 0xFu && LockHandle.OldIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
  }
}
