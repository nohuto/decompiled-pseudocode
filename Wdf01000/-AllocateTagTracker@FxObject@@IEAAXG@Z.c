void __fastcall FxObject::AllocateTagTracker(FxObject *this, unsigned __int16 Type)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  FxObjectDebugInfo **p_ObjectDebugInfo; // rax
  void *v5; // [rsp+28h] [rbp-10h]

  m_Globals = this->m_Globals;
  p_ObjectDebugInfo = &m_Globals->DebugExtension->ObjectDebugInfo;
  if ( p_ObjectDebugInfo
    && m_Globals->FxVerifyTagTrackingEnabled
    && *p_ObjectDebugInfo
    && FxVerifierIsDebugInfoFlagSetForType(*p_ObjectDebugInfo, Type, FxObjectDebugTrackReferences) )
  {
    FxTagTracker::CreateAndInitialize(
      (FxTagTracker **)&this[-1].m_SpinLock.m_Lock,
      m_Globals,
      FxTagTrackerTypeHandle,
      0,
      this,
      v5);
    this->m_ObjectFlags |= 0x200u;
  }
}
