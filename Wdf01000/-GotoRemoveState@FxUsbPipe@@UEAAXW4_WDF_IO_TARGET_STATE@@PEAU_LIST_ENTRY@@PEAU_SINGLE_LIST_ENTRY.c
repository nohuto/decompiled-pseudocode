void __fastcall FxUsbPipe::GotoRemoveState(
        FxUsbPipe *this,
        _WDF_IO_TARGET_STATE NewState,
        _LIST_ENTRY *PendedRequestListHead,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 LockSelf,
        unsigned __int8 *Wait)
{
  unsigned __int8 v6; // di
  FxUsbPipeContinuousReader *m_Reader; // rax
  const void *flags; // rax
  _FX_DRIVER_GLOBALS *v13; // r8
  unsigned __int16 v14; // r9
  const char *id; // rdx
  unsigned int v16; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v18; // rcx
  unsigned __int8 *v19; // rsi
  unsigned __int8 v20; // r8
  const _GUID *Lock; // [rsp+20h] [rbp-38h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  v6 = 0;
  irql = 0;
  if ( LockSelf )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)PendedRequestListHead);
    v6 = irql;
  }
  m_Reader = this->m_Reader;
  if ( m_Reader && m_Reader->m_ReadersSubmitted && this->m_State == WdfIoTargetStarted )
  {
    flags = (const void *)FxObject::GetObjectHandleUnchecked(this);
    id = "in EvtCleanupCallback of the miniport framework device object";
    if ( (v13->Public.DriverFlags & 2) == 0 )
      id = "in EvtDeviceD0Exit callback";
    WPP_IFR_SF_qs(v13, (unsigned __int8)id, (unsigned int)v13, v14, Lock, flags, id);
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerifierOn
      && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v16, 9u) || v18->FxVerifyDownlevel) )
    {
      FxVerifierDbgBreakPoint(v18);
    }
  }
  v19 = Wait;
  FxIoTarget::GotoRemoveState(this, NewState, PendedRequestListHead, SentRequestListHead, 0, Wait);
  if ( this->m_Reader )
    *v19 = 1;
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, v6, v20);
}
