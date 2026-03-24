/*
 * XREFs of Phase1Initialization @ 0x1407B3EE0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022BCB0 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x1403B40C4 (InbvSetProgressBarSubset.c)
 *     KeBugCheck @ 0x1403FD550 (KeBugCheck.c)
 *     MmFreeBootDriverInitializationCode @ 0x1407B3F48 (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140A4C104 (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140A66E8C (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140D587A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheck(0x69u);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
