__int64 __fastcall FxIoQueue::Vf_VerifyGetRequestUpdateFlags(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  const void *_a1; // rax
  int v7; // r8d
  unsigned __int8 v9; // r8
  int IsTagRequest; // ebp
  unsigned __int8 v11; // r8
  const void *ObjectHandleUnchecked; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+18h] BYREF

  irql = 0;
  if ( TagRequest )
  {
    if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)FxDriverGlobals, 0xBu) )
    {
      if ( this->m_Type != WdfIoQueueDispatchManual )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_qd(FxDriverGlobals, 2u, v7 + 2, v7 + 13, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
        FxVerifierDbgBreakPoint(FxDriverGlobals);
        return 3221225488LL;
      }
    }
    else
    {
      FxNonPagedObject::Lock(TagRequest, &irql, (unsigned __int8)TagRequest);
      if ( FxDriverGlobals->FxVerifierOn )
        IsTagRequest = FxRequest::Vf_VerifyRequestIsTagRequest(TagRequest, FxDriverGlobals);
      else
        IsTagRequest = 0;
      FxNonPagedObject::Unlock(TagRequest, irql, v9);
      if ( IsTagRequest < 0 )
        return (unsigned int)IsTagRequest;
    }
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)TagRequest);
  if ( this->m_Type == WdfIoQueueDispatchSequential && !this->m_DriverIoCount )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xDu, 0x19u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v11);
  return 0LL;
}
