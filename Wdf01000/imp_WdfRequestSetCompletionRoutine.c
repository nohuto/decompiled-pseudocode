void __fastcall imp_WdfRequestSetCompletionRoutine(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        void (__fastcall *CompletionRoutine)(WDFREQUEST__ *, WDFIOTARGET__ *, _WDF_REQUEST_COMPLETION_PARAMS *, void *),
        void *CompletionContext)
{
  FxRequest *v6; // rax
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v6 = pRequest;
  pRequest->m_CompletionRoutine.m_Completion = CompletionRoutine;
  v6->m_TargetCompletionContext = CompletionContext;
}
