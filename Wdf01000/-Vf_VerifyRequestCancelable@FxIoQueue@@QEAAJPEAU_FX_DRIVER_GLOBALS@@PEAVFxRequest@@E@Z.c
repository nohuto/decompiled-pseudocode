// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyRequestCancelable(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest,
        unsigned __int8 Cancelable)
{
  unsigned __int8 v7; // r8
  int IsDriverOwned; // ebx
  unsigned __int8 FxVerifierOn; // al
  int IsNotCancelable; // eax
  FxIoQueue *irql; // [rsp+40h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, (unsigned __int8)pRequest);
  if ( !FxDriverGlobals->FxVerifierOn
    || (IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals), IsDriverOwned >= 0) )
  {
    FxVerifierOn = FxDriverGlobals->FxVerifierOn;
    if ( Cancelable )
    {
      if ( FxVerifierOn )
      {
        IsNotCancelable = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
LABEL_8:
        IsDriverOwned = IsNotCancelable;
        goto $Done_87;
      }
    }
    else if ( FxVerifierOn )
    {
      IsNotCancelable = FxRequest::Vf_VerifyRequestIsCancelable(pRequest, FxDriverGlobals);
      goto LABEL_8;
    }
    IsDriverOwned = 0;
  }
$Done_87:
  FxNonPagedObject::Unlock(pRequest, (unsigned __int8)irql, v7);
  return (unsigned int)IsDriverOwned;
}
