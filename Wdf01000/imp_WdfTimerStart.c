unsigned __int8 __fastcall imp_WdfTimerStart(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFTIMER__ *Timer,
        _LARGE_INTEGER DueTime)
{
  FxTimer *pFxTimer; // [rsp+30h] [rbp+8h] BYREF

  pFxTimer = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Timer, 0x1028u, (void **)&pFxTimer);
  return FxTimer::Start(pFxTimer, DueTime);
}
