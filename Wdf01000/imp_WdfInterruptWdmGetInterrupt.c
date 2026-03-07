struct _KINTERRUPT *__fastcall imp_WdfInterruptWdmGetInterrupt(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFINTERRUPT__ *Interrupt)
{
  struct _KINTERRUPT *result; // rax
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Interrupt,
    0x1027u,
    (void **)&pFxInterrupt);
  result = pFxInterrupt->m_Interrupt;
  if ( !result )
    return pFxInterrupt->m_InterruptCaptured;
  return result;
}
