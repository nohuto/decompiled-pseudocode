/*
 * XREFs of KeGetCurrentProcessorNumberEx @ 0x1402605D0
 * Callers:
 *     PopFxAddLogEntry @ 0x140260514 (PopFxAddLogEntry.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x140319688 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     HalpHvInitMcaPcrContext @ 0x1403C5150 (HalpHvInitMcaPcrContext.c)
 *     KiInterruptDispatchCommon @ 0x140521368 (KiInterruptDispatchCommon.c)
 *     PopIdleWakeNotifyWakeSource @ 0x14057BC60 (PopIdleWakeNotifyWakeSource.c)
 *     KiCopyCountersWorker @ 0x1408BC2B8 (KiCopyCountersWorker.c)
 *     HalpMcaInitializePcrContext @ 0x14099FEAC (HalpMcaInitializePcrContext.c)
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
