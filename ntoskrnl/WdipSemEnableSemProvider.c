/*
 * XREFs of WdipSemEnableSemProvider @ 0x1408320C4
 * Callers:
 *     WdipSemCleanStart @ 0x1408318F0 (WdipSemCleanStart.c)
 * Callees:
 *     EtwRegister @ 0x140690D20 (EtwRegister.c)
 *     WdipSemEnableDisableTrace @ 0x140833B40 (WdipSemEnableDisableTrace.c)
 */

__int64 WdipSemEnableSemProvider()
{
  NTSTATUS v0; // ecx
  ULONGLONG RegHandle; // [rsp+40h] [rbp+8h] BYREF

  RegHandle = 0LL;
  v0 = WdipSemEnableDisableTrace(
         _InterlockedExchange(&WdipDiagLoggerId, WdipDiagLoggerId),
         (unsigned int)&WDI_SEM_PROVIDER,
         0,
         0,
         0,
         1);
  if ( v0 >= 0 )
  {
    v0 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           (unsigned int)&WDI_SEM_PROVIDER,
           0,
           0,
           0,
           1);
    if ( v0 >= 0 && !WdipSemRegHandle )
    {
      v0 = EtwRegister(&WDI_SEM_PROVIDER, 0LL, 0LL, &RegHandle);
      if ( v0 >= 0 )
        WdipSemRegHandle = RegHandle;
    }
  }
  return (unsigned int)v0;
}
