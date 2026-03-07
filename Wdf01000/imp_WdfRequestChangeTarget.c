__int64 __fastcall imp_WdfRequestChangeTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFIOTARGET__ *IoTarget)
{
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF
  FxIoTarget *pTarget; // [rsp+48h] [rbp+20h] BYREF

  pRequest = 0LL;
  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  FxObjectHandleGetPtr(pRequest->m_Globals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  return FxRequestBase::ValidateTarget(pRequest, pTarget);
}
