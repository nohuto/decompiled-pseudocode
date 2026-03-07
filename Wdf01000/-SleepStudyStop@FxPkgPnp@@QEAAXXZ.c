void __fastcall FxPkgPnp::SleepStudyStop(FxPkgPnp *this)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rax
  SS_COMPONENT__ *ComponentPowerRef; // rcx
  SS_LIBRARY__ *SleepStudyLibContext; // rcx

  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    ComponentPowerRef = m_SleepStudy->ComponentPowerRef;
    if ( ComponentPowerRef )
    {
      if ( SleepstudyHelperRoutineBlock.UnregisterComponent )
        SleepstudyHelperRoutineBlock.UnregisterComponent(ComponentPowerRef);
      this->m_SleepStudy->ComponentPowerRef = 0LL;
    }
    SleepStudyLibContext = this->m_SleepStudy->SleepStudyLibContext;
    if ( SleepStudyLibContext )
    {
      SleepstudyHelper_Uninitialize(SleepStudyLibContext);
      this->m_SleepStudy->SleepStudyLibContext = 0LL;
    }
    ExFreePoolWithTag(this->m_SleepStudy, 0);
    this->m_SleepStudy = 0LL;
  }
}
