/*
 * XREFs of KeWakeProcessor @ 0x140341390
 * Callers:
 *     PpmIdleExecuteTransition @ 0x1402C52F0 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x140422330 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140424840 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140424BA0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140424F00 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425260 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404255C0 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x140426460 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140427360 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x14042BF80 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x140430280 (KiMcheckAbort.c)
 * Callees:
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403413F0 (KeInterlockedClearProcessorAffinityEx.c)
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
