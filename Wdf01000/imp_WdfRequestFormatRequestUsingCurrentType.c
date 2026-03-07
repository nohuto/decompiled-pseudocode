void __fastcall imp_WdfRequestFormatRequestUsingCurrentType(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  _IRP *m_Irp; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Request, 0x1008u, (void **)&pRequest);
  m_Irp = pRequest->m_Irp.m_Irp;
  m_Globals = pRequest->m_Globals;
  if ( !m_Irp )
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 2uLL, (unsigned __int64)Request);
  if ( m_Irp->CurrentLocation < 2 )
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 1uLL, (unsigned __int64)m_Irp);
  pRequest->m_NextStackLocationFormatted = 1;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  FxRequestBase::VerifierSetFormatted(pRequest);
}
