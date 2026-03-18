/*
 * XREFs of Phase1Initialization @ 0x140822CA0
 * Callers:
 *     <none>
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 *     InbvSetProgressBarSubset @ 0x1403874BC (InbvSetProgressBarSubset.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     MmFreeBootDriverInitializationCode @ 0x14084E87C (MmFreeBootDriverInitializationCode.c)
 *     Phase1InitializationDiscard @ 0x140B4FF9C (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140B532AC (Phase1InitializationIoReady.c)
 *     IoInitSystem @ 0x140B606E0 (IoInitSystem.c)
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
