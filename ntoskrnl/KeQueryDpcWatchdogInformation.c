/*
 * XREFs of KeQueryDpcWatchdogInformation @ 0x1402B7480
 * Callers:
 *     HalpCmcPollProcessor @ 0x14037CF58 (HalpCmcPollProcessor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall KeQueryDpcWatchdogInformation(PKDPC_WATCHDOG_INFORMATION WatchdogInformation)
{
  struct _KPRCB *CurrentPrcb; // rdx
  ULONG SingleDpcSoftTimeLimitTicks; // eax
  unsigned int DpcTimeCount; // r8d
  ULONG CumulativeDpcSoftTimeLimitTicks; // eax
  unsigned int DpcWatchdogCount; // r8d

  CurrentPrcb = KeGetCurrentPrcb();
  if ( KeGetCurrentIrql() < 2u )
    return -1073741823;
  *(_OWORD *)&WatchdogInformation->DpcTimeLimit = 0LL;
  WatchdogInformation->Reserved = 0;
  SingleDpcSoftTimeLimitTicks = CurrentPrcb->SingleDpcSoftTimeLimitTicks;
  if ( SingleDpcSoftTimeLimitTicks || (SingleDpcSoftTimeLimitTicks = CurrentPrcb->DpcTimeLimitTicks) != 0 )
  {
    WatchdogInformation->DpcTimeLimit = SingleDpcSoftTimeLimitTicks;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    if ( SingleDpcSoftTimeLimitTicks > DpcTimeCount )
      WatchdogInformation->DpcTimeCount = SingleDpcSoftTimeLimitTicks - DpcTimeCount;
  }
  CumulativeDpcSoftTimeLimitTicks = CurrentPrcb->CumulativeDpcSoftTimeLimitTicks;
  if ( CumulativeDpcSoftTimeLimitTicks || (CumulativeDpcSoftTimeLimitTicks = CurrentPrcb->DpcWatchdogPeriodTicks) != 0 )
  {
    WatchdogInformation->DpcWatchdogLimit = CumulativeDpcSoftTimeLimitTicks;
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    if ( CumulativeDpcSoftTimeLimitTicks <= DpcWatchdogCount )
      WatchdogInformation->DpcWatchdogCount = 0;
    else
      WatchdogInformation->DpcWatchdogCount = CumulativeDpcSoftTimeLimitTicks - DpcWatchdogCount;
  }
  return 0;
}
