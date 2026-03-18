/*
 * XREFs of ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x1C0085998
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C007EEF0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxPkgPnp::SleepStudyStop(FxPkgPnp *this)
{
  _SLEEP_STUDY_INTERFACE *m_SleepStudy; // rcx

  m_SleepStudy = this->m_SleepStudy;
  if ( m_SleepStudy )
  {
    if ( m_SleepStudy->ComponentPowerRef )
    {
      SleepstudyHelper_UnregisterComponent(m_SleepStudy->ComponentPowerRef);
      this->m_SleepStudy->ComponentPowerRef = 0LL;
      m_SleepStudy = this->m_SleepStudy;
    }
    if ( m_SleepStudy->SleepStudyLibContext )
    {
      SleepstudyHelper_Uninitialize(m_SleepStudy->SleepStudyLibContext);
      this->m_SleepStudy->SleepStudyLibContext = 0LL;
      m_SleepStudy = this->m_SleepStudy;
    }
    ExFreePoolWithTag(m_SleepStudy, 0);
    this->m_SleepStudy = 0LL;
  }
}
