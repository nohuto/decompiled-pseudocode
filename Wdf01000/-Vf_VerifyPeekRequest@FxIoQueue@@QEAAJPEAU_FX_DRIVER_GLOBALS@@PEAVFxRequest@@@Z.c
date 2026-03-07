// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyPeekRequest(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *TagRequest)
{
  unsigned int IsTagRequest; // ebx
  unsigned __int8 v6; // r8
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  IsTagRequest = 0;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(TagRequest, (unsigned __int8 *)&irql, (unsigned __int8)TagRequest);
  if ( FxDriverGlobals->FxVerifierOn )
    IsTagRequest = FxRequest::Vf_VerifyRequestIsTagRequest(TagRequest, FxDriverGlobals);
  FxNonPagedObject::Unlock(TagRequest, (unsigned __int8)irql, v6);
  return IsTagRequest;
}
