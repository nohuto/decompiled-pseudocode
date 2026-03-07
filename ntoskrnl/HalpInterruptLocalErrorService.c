char HalpInterruptLocalErrorService()
{
  int v0; // ebp
  unsigned __int64 v1; // rbx
  __int64 v2; // rsi
  __int64 (__fastcall *v3)(__int64); // rax
  void (__fastcall *v4)(__int64); // rdi
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v0 = 0;
  v1 = (unsigned __int8)HalpAcquireHighLevelLock(&HalpInterruptLocalUnitErrorLock);
  v2 = HalpInterruptLocalUnitErrorCount & 0x7F;
  v3 = *(__int64 (__fastcall **)(__int64))(HalpInterruptController + 56);
  v4 = *(void (__fastcall **)(__int64))(HalpInterruptController + 64);
  v5 = *(_QWORD *)(HalpInterruptController + 16);
  ++HalpInterruptLocalUnitErrorCount;
  if ( v3 )
    v0 = v3(v5);
  if ( v4 )
    v4(v5);
  HalpInterruptLocalUnitErrorLog[v2] = v0;
  HalpInterruptLocalUnitErrorLogProcessor[v2] = KeGetPcr()->Prcb.Number;
  KxReleaseSpinLock((volatile signed __int64 *)&HalpInterruptLocalUnitErrorLock);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v1 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v1 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v1);
  return 1;
}
