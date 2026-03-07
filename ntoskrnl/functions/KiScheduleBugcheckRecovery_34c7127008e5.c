char KiScheduleBugcheckRecovery()
{
  bool v0; // al
  struct _KPRCB *CurrentPrcb; // rcx
  bool v2; // bl
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  char result; // al

  v0 = KeAreInterruptsEnabled();
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = v0;
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v4 = *SchedulerAssist;
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange(SchedulerAssist, v4 & 0xFFDFFFFF, v4);
    }
    while ( v5 != v4 );
    if ( (v4 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  LODWORD(KiDeferredBugcheckRecoveryDpc) = 531;
  qword_140C40FF8 = (__int64)KiScheduleBugcheckRecoveryWorkItem;
  qword_140C41000 = 0LL;
  qword_140C41018 = 0LL;
  qword_140C40FF0 = 0LL;
  if ( (unsigned __int8)KiInsertQueueDpc((ULONG_PTR)&KiDeferredBugcheckRecoveryDpc, 0LL, 0LL, 0LL, 0) )
    result = KiStallBugcheckThread();
  else
    result = KiRecordRecoveryFailure(4u);
  if ( !v2 )
    _disable();
  return result;
}
