void __fastcall FxUsbPipe::GotoStopState(
        FxUsbPipe *this,
        unsigned __int32 Action,
        _SINGLE_LIST_ENTRY *SentRequestListHead,
        unsigned __int8 *Wait,
        unsigned __int8 LockSelf)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *level; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int8 v13; // r8
  FxUsbPipeContinuousReader *m_Reader; // rax
  const void *ObjectHandleUnchecked; // rax
  unsigned int v16; // edx
  _FX_DRIVER_GLOBALS *v17; // rcx
  struct _KTHREAD *m_WorkItemThread; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]
  unsigned int v20; // [rsp+38h] [rbp-20h]
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( LockSelf )
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)SentRequestListHead);
  if ( this->m_Reader )
  {
    level = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qLL(m_Globals, v11, v12, 0x14u, traceGuid, level, Action, v20);
    Action = 1;
  }
  FxIoTarget::GotoStopState(this, (_WDF_IO_TARGET_SENT_IO_ACTION)Action, SentRequestListHead, Wait, 0);
  m_Reader = this->m_Reader;
  if ( m_Reader )
  {
    m_Reader->m_ReadersSubmitted = 0;
    if ( this->m_Reader->m_WorkItemThread == KeGetCurrentThread() )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x15u, (const _GUID *)&WPP_FxUsbPipe_cpp_Traceguids, ObjectHandleUnchecked);
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v16, 9u) || m_Globals->FxVerifyDownlevel )
          FxVerifierDbgBreakPoint(v17);
      }
    }
    m_WorkItemThread = this->m_Reader->m_WorkItemThread;
    if ( m_WorkItemThread != KeGetCurrentThread()
      || _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, (unsigned int)m_WorkItemThread, 9u) )
    {
      *Wait = 1;
    }
  }
  if ( LockSelf )
    FxNonPagedObject::Unlock(this, irql, v13);
}
