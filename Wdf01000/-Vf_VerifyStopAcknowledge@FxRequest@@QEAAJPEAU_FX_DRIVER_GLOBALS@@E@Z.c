__int64 __fastcall FxRequest::Vf_VerifyStopAcknowledge(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 Requeue)
{
  unsigned __int8 v6; // r8
  int IsDriverOwned; // ebx
  unsigned __int8 irql; // [rsp+48h] [rbp+10h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, Requeue);
  if ( FxDriverGlobals->FxVerifierOn )
  {
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsInEvtIoStopContext(this, FxDriverGlobals);
    if ( IsDriverOwned < 0 )
      goto $Done_85;
  }
  else
  {
    IsDriverOwned = 0;
  }
  if ( !this->m_Completed && Requeue )
  {
    if ( !FxDriverGlobals->FxVerifierOn )
      goto LABEL_11;
    IsDriverOwned = FxRequest::Vf_VerifyRequestIsDriverOwned(this, FxDriverGlobals);
    if ( IsDriverOwned >= 0 )
    {
      if ( FxDriverGlobals->FxVerifierOn )
      {
        IsDriverOwned = FxRequest::Vf_VerifyRequestIsNotCancelable(this, FxDriverGlobals);
        goto $Done_85;
      }
LABEL_11:
      IsDriverOwned = 0;
    }
  }
$Done_85:
  FxNonPagedObject::Unlock(this, irql, v6);
  return (unsigned int)IsDriverOwned;
}
