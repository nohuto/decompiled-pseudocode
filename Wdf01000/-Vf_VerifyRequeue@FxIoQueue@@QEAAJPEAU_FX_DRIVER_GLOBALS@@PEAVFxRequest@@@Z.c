// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxIoQueue::Vf_VerifyRequeue(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequest *pRequest)
{
  unsigned __int8 v5; // r8
  int IsDriverOwned; // edi
  FxIoQueue *irql; // [rsp+30h] [rbp+8h] OVERLAPPED BYREF

  irql = this;
  LOBYTE(irql) = 0;
  FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, (unsigned __int8)pRequest);
  if ( !FxDriverGlobals->FxVerifierOn )
    goto LABEL_6;
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(pRequest, FxDriverGlobals);
  if ( IsDriverOwned < 0 )
    goto LABEL_8;
  if ( !FxDriverGlobals->FxVerifierOn )
  {
LABEL_6:
    IsDriverOwned = 0;
LABEL_7:
    pRequest->m_VerifierFlags &= 0xFFF6u;
    goto LABEL_8;
  }
  IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(pRequest, FxDriverGlobals);
  if ( IsDriverOwned >= 0 )
    goto LABEL_7;
LABEL_8:
  FxNonPagedObject::Unlock(pRequest, (unsigned __int8)irql, v5);
  return (unsigned int)IsDriverOwned;
}
