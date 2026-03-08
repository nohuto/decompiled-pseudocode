/*
 * XREFs of Phase1Initialization @ 0x14080E810
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x14037FD30 (InbvSetProgressBarSubset.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084B4CC (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 *     IoInitSystem @ 0x140B5E3E0 (IoInitSystem.c)
 */

void __fastcall Phase1Initialization(ULONG_PTR StartContext)
{
  char v2; // di
  __int64 v3; // rdx

  qword_140D81760 = KeQueryPerformanceCounter(0LL).QuadPart;
  v2 = Phase1InitializationDiscard(StartContext);
  InbvSetProgressBarSubset();
  if ( !(unsigned __int8)IoInitSystem(StartContext) )
    KeBugCheckEx(0x69u, (unsigned int)IopInitFailCode, 0LL, 0LL, 0LL);
  LOBYTE(v3) = v2;
  Phase1InitializationIoReady(StartContext, v3);
  MmFreeBootDriverInitializationCode();
}
