WDFQUEUE__ *__fastcall imp_WdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxIoQueue *m_IoQueue; // r9
  FxRequest *pRequest; // [rsp+40h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( pRequest->m_Completed || (m_IoQueue = pRequest->m_IoQueue) == 0LL )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0x10u, 0x45u, WPP_FxRequestApi_cpp_Traceguids, Request);
  }
  else
  {
    if ( pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction
      || *(FxIoQueue **)(pRequest->m_DeviceBase[3].m_SpinLock.m_Lock + 144) != m_IoQueue )
    {
      return (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(pRequest->m_IoQueue);
    }
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x46u, WPP_FxRequestApi_cpp_Traceguids, pRequest);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  return 0LL;
}
