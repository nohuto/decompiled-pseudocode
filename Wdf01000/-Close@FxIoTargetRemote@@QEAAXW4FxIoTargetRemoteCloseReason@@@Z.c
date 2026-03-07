void __fastcall FxIoTargetRemote::Close(FxIoTargetRemote *this, int Reason, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  const _GUID *v7; // rdx
  unsigned int v8; // edx
  unsigned __int8 v9; // r8
  unsigned __int8 m_OpenState; // al
  const void *ObjectHandleUnchecked; // rax
  int v12; // r14d
  const void *v13; // rax
  unsigned __int8 FxVerboseOn; // al
  const void *v15; // rax
  const void *v16; // rax
  const void *v17; // rax
  const void *v18; // rax
  unsigned __int8 v19; // dl
  unsigned int v20; // r8d
  unsigned __int16 v21; // r9
  void *m_TargetNotifyHandle; // r15
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // r8
  const void *v25; // rax
  int v26; // esi
  const void *v27; // rax
  const void *v28; // rdx
  const void *v29; // rax
  const void *v30; // rdx
  const void *v31; // rax
  const void *v32; // r10
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _LIST_ENTRY pended; // [rsp+50h] [rbp-30h] BYREF
  FxIoTargetClearedPointers pointers; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int8 wait; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 irql; // [rsp+C8h] [rbp+48h] BYREF
  _SINGLE_LIST_ENTRY sent; // [rsp+D0h] [rbp+50h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(m_Globals, 5u, 0xEu, 0x16u, v7, _a1, Reason);
  }
  sent.Next = 0LL;
  wait = 0;
  pended.Blink = &pended;
  pended.Flink = &pended;
  memset(&pointers, 0, sizeof(pointers));
  while ( 1 )
  {
    FxNonPagedObject::Lock(this, &irql, a3);
    m_OpenState = this->m_OpenState;
    if ( m_OpenState != 2 )
      break;
    FxNonPagedObject::Unlock(this, irql, v9);
    if ( m_Globals->FxVerboseOn )
    {
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qq(
        m_Globals,
        5u,
        0xEu,
        0x17u,
        WPP_FxIoTargetRemote_cpp_Traceguids,
        ObjectHandleUnchecked,
        &this->m_OpenedEvent);
    }
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&this->m_OpenedEvent, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  v12 = 3;
  if ( Reason == 3 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v13 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetRemote_cpp_Traceguids, v13);
    }
    v12 = 5;
  }
  else if ( m_OpenState == 3 )
  {
    FxVerboseOn = m_Globals->FxVerboseOn;
    if ( Reason == 1 )
    {
      if ( FxVerboseOn )
      {
        v15 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetRemote_cpp_Traceguids, v15);
      }
    }
    else
    {
      if ( FxVerboseOn )
      {
        v16 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetRemote_cpp_Traceguids, v16);
      }
      v12 = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 9u) + 3;
    }
    this->m_OpenState = 1;
  }
  else
  {
    if ( m_Globals->FxVerboseOn )
    {
      v17 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Bu, WPP_FxIoTargetRemote_cpp_Traceguids, v17);
    }
    v12 = 4;
  }
  if ( m_Globals->FxVerboseOn )
  {
    v18 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqqqi(
      m_Globals,
      v19,
      v20,
      v21,
      traceGuid,
      v18,
      this->m_TargetFileObject,
      this->m_TargetDevice,
      this->m_TargetHandle,
      (__int64)this->m_TargetNotifyHandle);
  }
  m_TargetNotifyHandle = 0LL;
  if ( Reason != 1 )
  {
    m_TargetNotifyHandle = this->m_TargetNotifyHandle;
    this->m_TargetNotifyHandle = 0LL;
  }
  this->m_ClearedPointers = &pointers;
  LOBYTE(traceGuid) = 0;
  this->GotoRemoveState(this, (_WDF_IO_TARGET_STATE)v12, &pended, &sent, (unsigned __int8)traceGuid, &wait);
  FxNonPagedObject::Unlock(this, irql, v23);
  if ( m_TargetNotifyHandle )
    IoUnregisterPlugPlayNotificationEx(m_TargetNotifyHandle);
  FxIoTarget::CompletePendedRequestList(this, &pended, v24);
  FxIoTarget::_CancelSentRequests(&sent);
  if ( wait )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v25 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x1Du, WPP_FxIoTargetRemote_cpp_Traceguids, v25);
    }
    this->WaitForSentIoToComplete(this);
  }
  v26 = Reason - 1;
  if ( v26 )
  {
    if ( v26 == 2 )
      FxIoTargetRemoteOpenParams::Clear(&this->m_OpenParams);
    else
      KeClearEvent(&this->m_SentIoEvent.m_Event.m_Event);
  }
  if ( v12 == 5 )
    this->WaitForDisposeEvent(this);
  if ( pointers.TargetPdo )
  {
    v27 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Eu, WPP_FxIoTargetRemote_cpp_Traceguids, v27, v28);
    ObfDereferenceObject(pointers.TargetPdo);
  }
  if ( pointers.TargetFileObject )
  {
    v29 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTargetRemote_cpp_Traceguids, v29, v30);
    ObfDereferenceObject(pointers.TargetFileObject);
  }
  if ( pointers.TargetHandle )
  {
    v31 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTargetRemote_cpp_Traceguids, v31, v32);
    ZwClose(pointers.TargetHandle);
  }
}
