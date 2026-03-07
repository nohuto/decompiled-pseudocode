unsigned __int8 __fastcall FxCompanionTarget::Dispose(FxCompanionTarget *this, unsigned __int8 a2)
{
  unsigned __int8 v3; // cf
  const void *_a1; // rax
  FxCompanionLibrary *v5; // rbx
  FxCREvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  FxCREvent::FxCREvent(&eventOnStack, a2);
  KeInitializeEvent(&eventOnStack.m_Event.m_Event, SynchronizationEvent, 0);
  v3 = _bittest16((const signed __int16 *)&this->24, 0xAu);
  eventOnStack.m_Event.m_DbgFlagIsInitialized = 1;
  if ( v3 )
    FxObject::CallCleanupCallbacks(this);
  this->m_DisposeEvent = &eventOnStack;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  WPP_IFR_SF_qq(
    this->m_Globals,
    4u,
    0xCu,
    0xEu,
    (const _GUID *)&WPP_FxCompanionTarget_cpp_Traceguids,
    _a1,
    &eventOnStack);
  if ( _InterlockedExchangeAdd(&this->m_PendingTaskCount, 0xFFFFFFFF) > 1 )
  {
    KeEnterCriticalRegion();
    KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
    KeLeaveCriticalRegion();
  }
  this->m_DisposeEvent = 0LL;
  if ( this->m_RdDeviceCompanion )
  {
    v5 = qword_1C009FF58;
    ((void (__fastcall *)(ICompanionLibrary *))qword_1C009FF58->m_RdCompanionLibrary->UnloadCompanion)(qword_1C009FF58->m_RdCompanionLibrary);
    FxCompanionLibrary::CloseCompanionLibraryInterface(v5);
    this->m_RdDeviceCompanion = 0LL;
  }
  return 0;
}
