wchar_t *__fastcall imp_WdfDriverGetRegistryPath(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDRIVER__ *Driver)
{
  FxDriver *pDriver; // [rsp+30h] [rbp+8h] BYREF

  pDriver = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Driver, 0x1001u, (void **)&pDriver);
  if ( (int)FxVerifierCheckIrqlLevel(pDriver->m_Globals, 0) >= 0 )
    return pDriver->m_RegistryPath.Buffer;
  else
    return 0LL;
}
