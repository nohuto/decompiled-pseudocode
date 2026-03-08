/*
 * XREFs of CarReportUnusualShutdown @ 0x1405D2190
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B42D0C (Phase1InitializationIoReady.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     VfUtilCrashEvent @ 0x1405CBE14 (VfUtilCrashEvent.c)
 *     CarEtwCrashEvent @ 0x1405D03FC (CarEtwCrashEvent.c)
 *     CarInitLogging @ 0x1405D0E40 (CarInitLogging.c)
 *     CarCleanup @ 0x1405D1318 (CarCleanup.c)
 *     CarInit @ 0x1405D18E4 (CarInit.c)
 */

unsigned __int64 CarReportUnusualShutdown()
{
  _QWORD v1[9]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v2; // [rsp+70h] [rbp+8h] BYREF

  CarInit();
  CarInitLogging();
  memset(v1, 0, 0x40uLL);
  v2 = 0LL;
  v1[5] = &v2;
  if ( VfUtilCrashEvent((__int64)v1) )
    CarEtwCrashEvent();
  return CarCleanup();
}
