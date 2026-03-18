/*
 * XREFs of ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C00188C4
 * Callers:
 *     ?PowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00188A0 (-PowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?InDxStopped@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0083CA0 (-InDxStopped@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0083CD0 (-PowerFailed@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0083CFC (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?StartedPowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0083DF0 (-StartedPowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutDisabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0083E70 (-TimedOutDisabled@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutEnabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0083EA0 (-TimedOutEnabled@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007BC58 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxPowerIdleMachine::SendD0Notification(FxPowerIdleMachine *this)
{
  unsigned __int8 v2; // r8
  signed __int8 m_Flags; // al
  FxPkgPnp *m_TagTracker; // rcx

  KeSetEvent(&this->m_D0NotificationEvent.m_Event.m_Event, 0, 0);
  m_Flags = this->m_Flags;
  if ( m_Flags < 0 )
  {
    m_TagTracker = (FxPkgPnp *)this[2].m_TagTracker;
    this->m_Flags = m_Flags & 0x7F;
    FxPkgPnp::PnpProcessEvent(m_TagTracker, PnpEventDeviceInD0, v2);
  }
}
