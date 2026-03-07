void __fastcall FxIoQueue::RequestCompletedCallback(FxIoQueue *this, FxRequest *Request, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  irql = 0;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyValidateCompletedRequest(this, m_Globals, Request);
  FxNonPagedObject::Lock(this, &irql, a3);
  FxIoQueue::RemoveFromDriverOwnedList(this, Request);
  FxIoQueue::DispatchInternalEvents(this, irql);
}
