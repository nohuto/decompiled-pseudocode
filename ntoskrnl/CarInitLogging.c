/*
 * XREFs of CarInitLogging @ 0x1405D0E40
 * Callers:
 *     CarInit @ 0x1405D18E4 (CarInit.c)
 *     CarReportUnusualShutdown @ 0x1405D2190 (CarReportUnusualShutdown.c)
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     CarEtwRegister @ 0x1405D05C8 (CarEtwRegister.c)
 *     DifiDbgPrint @ 0x1405D3224 (DifiDbgPrint.c)
 */

__int64 CarInitLogging()
{
  unsigned int v0; // ebx
  NTSTATUS v1; // eax

  v0 = 0;
  if ( _InterlockedCompareExchange(&CarLogInitialized, 1, 0) != 1
    && (!dword_140C09378 || !tlgKeywordOn((__int64)&dword_140C09378, 0x800000000000LL)) )
  {
    CarEtwRandomSeed = KeQueryPerformanceCounter(0LL).QuadPart;
    v1 = CarEtwRegister();
    v0 = v1;
    if ( v1 < 0 )
      DifiDbgPrint("Driver Verifier: CarLogging failed to initialize with %08lx\n", v1);
  }
  return v0;
}
