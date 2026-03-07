__int64 __fastcall imp_WdfRequestRetrieveInputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFMEMORY__ **Memory)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int MemoryObject; // ebx
  void *pBuffer; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxRequest *pRequest; // [rsp+60h] [rbp+8h] BYREF
  IFxMemory *pMemory; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 length; // [rsp+78h] [rbp+20h] BYREF

  pRequest = 0LL;
  pBuffer = 0LL;
  length = 0LL;
  pMemory = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  m_Globals = pRequest->m_Globals;
  if ( !Memory )
    FxVerifierNullBugCheck(pRequest->m_Globals, retaddr);
  if ( pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 3 )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x13u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
    return 3221225488LL;
  }
  else
  {
    MemoryObject = FxRequest::GetMemoryObject(pRequest, (FxRequestSystemBuffer **)&pMemory, &pBuffer, &length);
    if ( MemoryObject >= 0 )
      *Memory = pMemory->GetHandle(pMemory);
    return (unsigned int)MemoryObject;
  }
}
