/*
 * XREFs of ?SendD0Notification@FxPowerIdleMachine@@IEAAXXZ @ 0x1C0077584
 * Callers:
 *     ?InDxStopped@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0077390 (-InDxStopped@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00773C0 (-PowerFailed@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?PowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00773F0 (-PowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?Reset@FxPowerIdleMachine@@QEAAXXZ @ 0x1C0077520 (-Reset@FxPowerIdleMachine@@QEAAXXZ.c)
 *     ?StartedPowerFailed@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00776A0 (-StartedPowerFailed@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?StartedPowerUp@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C00776D0 (-StartedPowerUp@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutDisabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0077750 (-TimedOutDisabled@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 *     ?TimedOutEnabled@FxPowerIdleMachine@@KA?AW4FxPowerIdleStates@@PEAV1@@Z @ 0x1C0077780 (-TimedOutEnabled@FxPowerIdleMachine@@KA-AW4FxPowerIdleStates@@PEAV1@@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
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
