/*
 * XREFs of KeInitializeTimer @ 0x140237D80
 * Callers:
 *     CcInitializeBcbProfiler @ 0x140B14354 (CcInitializeBcbProfiler.c)
 *     sub_140B16730 @ 0x140B16730 (sub_140B16730.c)
 *     CcInitializeTelemetry @ 0x140B31E14 (CcInitializeTelemetry.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimer(PKTIMER Timer)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  Timer->Period = 0;
  Timer->Processor = 0;
}
