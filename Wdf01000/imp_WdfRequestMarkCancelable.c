void __fastcall imp_WdfRequestMarkCancelable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxIoQueue *m_IoQueue; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxRequest *pRequest; // [rsp+40h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !EvtRequestCancel )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  if ( pRequest->m_Completed || (m_IoQueue = pRequest->m_IoQueue) == 0LL )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x10u, 0x4Fu, WPP_FxRequestApi_cpp_Traceguids, Request);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    FxIoQueue::RequestCancelable(m_IoQueue, pRequest, 1u, EvtRequestCancel, 0);
  }
}
