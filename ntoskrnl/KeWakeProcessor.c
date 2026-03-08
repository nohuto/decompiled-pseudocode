/*
 * XREFs of KeWakeProcessor @ 0x1402DA170
 * Callers:
 *     PpmIdleExecuteTransition @ 0x14022D7D0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x140419FA0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x14041C4B0 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x14041C810 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x14041CB70 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x14041CED0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x14041D230 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x14041E0D0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x14041EFD0 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x140423B80 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140427E80 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1402DA1D0 (KeInterlockedClearProcessorAffinityEx.c)
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rdx
  unsigned __int64 v2; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  KeInterlockedClearProcessorAffinityEx(&KeSleepingProcessors, Number);
  v2 = __readcr4();
  if ( (v2 & 0x20080) != 0 )
  {
    result = v2 ^ 0x80;
    __writecr4(v2 ^ 0x80);
    __writecr4(v2);
  }
  else
  {
    result = __readcr3();
    __writecr3(result);
  }
  return result;
}
