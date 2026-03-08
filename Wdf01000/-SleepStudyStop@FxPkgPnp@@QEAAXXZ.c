/*
 * XREFs of ?SleepStudyStop@FxPkgPnp@@QEAAXXZ @ 0x1C0079834
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0070ED0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     SleepstudyHelper_Uninitialize @ 0x1C00B21E0 (SleepstudyHelper_Uninitialize.c)
 */

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
