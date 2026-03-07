void __fastcall FxPowerIdleMachine::Reset(FxPowerIdleMachine *this)
{
  FxTagTracker *m_TagTracker; // r8
  _FX_DRIVER_GLOBALS *m_OwningObject; // rdx
  FxDriverGlobalsDebugExtension *DebugExtension; // rax
  FxTrackPowerOption TrackPower; // cl

  this->m_IoCount = 0;
  m_TagTracker = this[2].m_TagTracker;
  this->m_Flags = 0;
  m_OwningObject = (_FX_DRIVER_GLOBALS *)m_TagTracker->m_OwningObject;
  DebugExtension = m_OwningObject->DebugExtension;
  if ( DebugExtension )
  {
    TrackPower = DebugExtension->TrackPower;
    if ( TrackPower )
      FxTagTracker::CreateAndInitialize(
        &this->m_TagTracker,
        m_OwningObject,
        FxTagTrackerTypePower,
        TrackPower == FxTrackPowerRefsAndStack,
        (FxObject *)m_TagTracker->m_TagHistory[0].Tag);
  }
  FxPowerIdleMachine::SendD0Notification(this);
}
