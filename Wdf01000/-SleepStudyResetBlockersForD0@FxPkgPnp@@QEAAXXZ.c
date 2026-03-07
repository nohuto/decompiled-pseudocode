void __fastcall FxPkgPnp::SleepStudyResetBlockersForD0(FxPkgPnp *this)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  SS_COMPONENT__ *ComponentPowerRef; // rcx

  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    ComponentPowerRef = m_SleepStudy->ComponentPowerRef;
    if ( ComponentPowerRef )
    {
      if ( SleepstudyHelperRoutineBlock.ResetComponentsStartTime )
        SleepstudyHelperRoutineBlock.ResetComponentsStartTime(ComponentPowerRef);
    }
  }
}
