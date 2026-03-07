void __fastcall ExpFastResourceLegacyRelease(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  struct _KTHREAD *CurrentThread; // r11
  unsigned __int8 CurrentIrql; // bl
  int v7; // eax
  __int64 FastOwnerEntryForThread; // rax
  unsigned __int8 v9; // r9
  __int64 v10; // r10
  ULONG_PTR v11; // r11
  void *v12; // rdi
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf

  if ( FeatureFastResource2 )
  {
    ExpFastResourceLegacyRelease2(BugCheckParameter1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v7 = 4;
      if ( CurrentIrql != 2 )
        v7 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v7;
    }
    LOBYTE(SchedulerAssist) = 1;
    FastOwnerEntryForThread = ExpFindFastOwnerEntryForThread(CurrentThread, BugCheckParameter1, 0LL, SchedulerAssist);
    v12 = (void *)FastOwnerEntryForThread;
    if ( !FastOwnerEntryForThread )
      KeBugCheckEx(0xE3u, BugCheckParameter1, v11, 0LL, 0LL);
    *(_BYTE *)(FastOwnerEntryForThread + 17) &= ~2u;
    if ( KiIrqlFlags )
    {
      v13 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & v9) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(v10 << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    ExReleaseFastResource(BugCheckParameter1, (ULONG_PTR)v12);
    ExFreePoolWithTag(v12, 0);
  }
}
