void __fastcall FxPowerIdleMachine::IoDecrement(FxPowerIdleMachine *this, void *Tag, int Line, const char *File)
{
  FxTagTracker *m_TagTracker; // rsi
  _FX_DRIVER_GLOBALS *m_OwningObject; // rbx
  KIRQL v10; // r13
  unsigned int v11; // ebx
  FxTagTracker *v12; // rcx
  const void *_a1; // rax
  __int64 v14; // rdx
  unsigned int v15; // edx
  _FX_DRIVER_GLOBALS *v16; // rcx

  m_TagTracker = this[2].m_TagTracker;
  m_OwningObject = (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject;
  v10 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
  if ( !this->m_IoCount )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)m_TagTracker->m_TagHistory[0].Tag);
    WPP_IFR_SF_qq(
      m_OwningObject,
      2u,
      0xCu,
      0xFu,
      WPP_PowerIdleStateMachine_cpp_Traceguids,
      _a1,
      *(const void **)(v14 + 144));
    if ( m_OwningObject->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_OwningObject, v15, 0xBu)
        || m_OwningObject->FxVerifyDownlevel )
      {
        FxVerifierDbgBreakPoint(v16);
      }
    }
  }
  v11 = this->m_IoCount - 1;
  this->m_IoCount = v11;
  FxPowerIdleMachine::ProcessEventLocked(this, PowerIdleEventIoDecrement);
  KeReleaseSpinLock(&this->m_Lock.m_Lock, v10);
  v12 = this->m_TagTracker;
  if ( v12 )
    FxTagTracker::UpdateTagHistory(v12, Tag, Line, File, TagRelease, v11);
}
