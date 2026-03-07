void __fastcall PpmCheckCustomRun(unsigned int a1)
{
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 CurrentThread; // rdx
  struct _KPRCB *v5; // rcx
  signed __int32 *v6; // r8
  struct _KPRCB *v7; // rcx
  __int64 v8; // rdx
  struct _KPRCB *v9; // rcx
  signed __int32 *v10; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  _DWORD *SchedulerAssist; // r9
  __int64 v16; // rax
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  _DWORD *v19; // r8
  int v20; // eax
  bool v21; // zf

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v16) = 4;
    if ( CurrentIrql != 2 )
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  _disable();
  KiEndThreadCycleAccumulation((__int64)CurrentPrcb, CurrentThread, 0LL, 0LL);
  v5 = KeGetCurrentPrcb();
  v6 = (signed __int32 *)v5->SchedulerAssist;
  if ( v6 )
  {
    _m_prefetchw(v6);
    v11 = *v6;
    do
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange(v6, v11 & 0xFFDFFFFF, v11);
    }
    while ( v12 != v11 );
    if ( (v11 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v5);
  }
  _enable();
  PpmCheckStart(a1);
  v7 = KeGetCurrentPrcb();
  v8 = (__int64)v7->CurrentThread;
  _disable();
  KiStartThreadCycleAccumulation((__int64)v7, v8, 0);
  v9 = KeGetCurrentPrcb();
  v10 = (signed __int32 *)v9->SchedulerAssist;
  if ( v10 )
  {
    _m_prefetchw(v10);
    v13 = *v10;
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange(v10, v13 & 0xFFDFFFFF, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick(v9);
  }
  _enable();
  if ( KiIrqlFlags )
  {
    v17 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
    {
      v18 = KeGetCurrentPrcb();
      v19 = v18->SchedulerAssist;
      v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v21 = (v20 & v19[5]) == 0;
      v19[5] &= v20;
      if ( v21 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  __writecr8(CurrentIrql);
  KiClearSystemPriority((ULONG_PTR)KeGetCurrentThread());
  KeLeaveCriticalRegion();
}
