/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1402C1200
 * Callers:
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x1402DF844 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x14037CEA4 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x14039E224 (KiInterruptDispatchCommon.c)
 *     WheaFlushETWEventsSelectProcessor @ 0x14057DE20 (WheaFlushETWEventsSelectProcessor.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14059B75C (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x140972238 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x140A8CFF8 (HalpMcaInitializePcrContext.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall KeGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcNumber)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  if ( ProcNumber )
  {
    ProcNumber->Group = CurrentPrcb->Group;
    *(_WORD *)&ProcNumber->Number = CurrentPrcb->GroupIndex;
  }
  return CurrentPrcb->Number;
}
