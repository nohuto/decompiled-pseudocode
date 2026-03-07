WDFDEVICE__ *__fastcall imp_WdfInterruptGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFINTERRUPT__ *Interrupt)
{
  FxInterrupt *pFxInterrupt; // [rsp+30h] [rbp+8h] BYREF

  pFxInterrupt = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Interrupt, 0x1027u, (void **)&pFxInterrupt);
  return (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(pFxInterrupt->m_DeviceBase);
}
