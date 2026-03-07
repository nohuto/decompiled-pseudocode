__int64 __fastcall imp_WdfObjectQuery(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        const _GUID *Guid,
        unsigned int QueryBufferLength)
{
  FxObject *p; // [rsp+30h] [rbp+8h] BYREF

  p = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Object, 0x1000u, (void **)&p);
  return 3221226021LL;
}
