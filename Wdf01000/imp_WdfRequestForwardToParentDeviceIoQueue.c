__int64 __fastcall imp_WdfRequestForwardToParentDeviceIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFQUEUE__ *ParentDeviceQueue,
        _WDF_REQUEST_FORWARD_OPTIONS *ForwardOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v7; // dl
  _WDF_REQUEST_FORWARD_OPTIONS *v8; // r9
  int v9; // ebx
  unsigned int _a3; // eax
  FxRequest *v11; // rdx
  FxIoQueue *v12; // rcx
  int globals; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxIoQueue *queue; // [rsp+60h] [rbp+8h] BYREF
  void *PPObject; // [rsp+78h] [rbp+20h] BYREF

  PPObject = 0LL;
  queue = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)ParentDeviceQueue,
    0x1003u,
    (void **)&queue);
  m_Globals = queue->m_Globals;
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, &PPObject);
  if ( !ForwardOptions )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( ForwardOptions->Size == 8 )
  {
    _a3 = ForwardOptions->Flags;
    if ( (_a3 & 0xFFFFFFFE) == 0 )
    {
      v11 = (FxRequest *)PPObject;
      if ( *((_BYTE *)PPObject + 214) || (v12 = (FxIoQueue *)*((_QWORD *)PPObject + 31)) == 0LL )
      {
        if ( m_Globals->FxVerifierOn )
        {
          v9 = Vf_VerifyWdfRequestForwardToParentDeviceIoQueue(m_Globals, (FxRequest *)PPObject);
          if ( v9 < 0 )
            return (unsigned int)v9;
          v11 = (FxRequest *)PPObject;
        }
        return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(queue, v11, 1u);
      }
      else
      {
        return (unsigned int)FxIoQueue::ForwardRequestToParent(v12, queue, (FxRequest *)PPObject, v8);
      }
    }
    v9 = -1073741811;
    WPP_IFR_SF_qDDd(m_Globals, v7, 6u, 0x4Bu, WPP_FxRequestApi_cpp_Traceguids, ForwardOptions, _a3, 1u, globals);
  }
  else
  {
    v9 = -1073741820;
    WPP_IFR_SF_qddd(
      m_Globals,
      v7,
      6u,
      0x4Au,
      WPP_FxRequestApi_cpp_Traceguids,
      ForwardOptions,
      8,
      ForwardOptions->Size,
      -1073741820);
  }
  return (unsigned int)v9;
}
