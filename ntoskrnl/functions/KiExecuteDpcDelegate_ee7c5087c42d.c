void __noreturn KiExecuteDpcDelegate()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v2; // r9
  struct _KPRCB *v3; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  CurrentThread = KeGetCurrentThread();
  CurrentPrcb = KeGetCurrentPrcb();
  KeAttachProcess(PsInitialSystemProcess);
  while ( 1 )
  {
    _disable();
    _InterlockedAnd16((volatile signed __int16 *)&CurrentPrcb->13244, 0xFF7Fu);
    KiRetireDpcList((__int64)CurrentPrcb);
    CurrentPrcb->PrcbFlags.PrcbFlags &= ~0x1000u;
    v3 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v3->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v5 = *SchedulerAssist;
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange(SchedulerAssist, v5 & 0xFFDFFFFF, v5);
      }
      while ( v6 != v5 );
      if ( (v5 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v3);
    }
    _enable();
    CurrentThread->WaitIrql = 2;
    KiSwapThread((ULONG_PTR)CurrentThread, (__int64)CurrentPrcb, 0LL, v2);
  }
}
