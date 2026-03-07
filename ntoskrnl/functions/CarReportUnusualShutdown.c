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
