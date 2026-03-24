/*
 * XREFs of KeWakeProcessor @ 0x140519960
 * Callers:
 *     PpmIdleExecuteTransition @ 0x140222470 (PpmIdleExecuteTransition.c)
 *     KxIsrLinkage @ 0x1404011C0 (KxIsrLinkage.c)
 *     KiHvInterrupt @ 0x140402C80 (KiHvInterrupt.c)
 *     KiVmbusInterrupt0 @ 0x140402F70 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140403260 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140403550 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140403840 (KiVmbusInterrupt3.c)
 *     KiSwInterrupt @ 0x1404045E0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x140405370 (KiIpiInterrupt.c)
 *     KiNmiInterruptStart @ 0x14040A440 (KiNmiInterruptStart.c)
 *     KiMcheckAbort @ 0x14040E1C0 (KiMcheckAbort.c)
 * Callees:
 *     <none>
 */

unsigned __int64 KeWakeProcessor()
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 Number; // rcx
  unsigned __int64 v2; // rcx
  unsigned __int64 result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  CurrentPrcb->DeepSleep = 0;
  _InterlockedAnd64(
    &qword_140C2B408[(unsigned __int64)(unsigned int)KiProcessorIndexToNumberMappingTable[Number] >> 6],
    ~(1LL << (KiProcessorIndexToNumberMappingTable[Number] & 0x3F)));
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
