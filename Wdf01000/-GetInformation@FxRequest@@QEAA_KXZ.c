unsigned __int64 __fastcall FxRequest::GetInformation(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 Information; // rdi
  unsigned __int8 v6; // r8
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  Information = 0LL;
  if ( !m_Globals->FxVerifierIO )
    return this->m_Irp.m_Irp->IoStatus.Information;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( !m_Globals->FxVerifierOn || FxRequest::Vf_VerifyRequestIsNotCompleted(this, m_Globals) >= 0 )
    Information = this->m_Irp.m_Irp->IoStatus.Information;
  FxNonPagedObject::Unlock(this, irql, v6);
  return Information;
}
