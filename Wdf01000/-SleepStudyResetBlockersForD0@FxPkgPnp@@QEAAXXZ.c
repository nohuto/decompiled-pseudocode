/*
 * XREFs of ?SleepStudyResetBlockersForD0@FxPkgPnp@@QEAAXXZ @ 0x1C0070890
 * Callers:
 *     ?PowerD0Starting@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E200 (-PowerD0Starting@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWaking@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00701E0 (-PowerWaking@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

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
