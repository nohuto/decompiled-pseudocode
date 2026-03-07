unsigned __int8 __fastcall FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(FxPkgPnp *this)
{
  FxUsbIdleInfo *m_UsbIdle; // rcx

  m_UsbIdle = this->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  if ( !m_UsbIdle || m_UsbIdle->m_EventDropped )
    return 0;
  IoCancelIrp(m_UsbIdle->m_IdleIrp.m_Irp);
  return 1;
}
