void __fastcall FxPkgPnp::PowerPolicySetSxWakeState(FxPkgPnp *this, unsigned __int8 State)
{
  _FX_DRIVER_GLOBALS *v3; // rdx
  int v4; // eax
  __int64 timeout; // [rsp+30h] [rbp+8h] BYREF

  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Enabled = State != 0;
  this->m_PowerPolicyMachine.m_Owner->m_WakeSettings.Dirty = 1;
  if ( !KeGetCurrentIrql() )
  {
    timeout = 0LL;
    v4 = FxWaitLockInternal::AcquireLock(&this->m_PowerPolicyMachine.m_StateMachineLock, v3, (_LARGE_INTEGER *)&timeout);
    if ( v4 >= 0 && v4 != 258 )
    {
      FxPkgPnp::SaveState(this, 1u);
      this->m_PowerPolicyMachine.m_StateMachineLock.m_OwningThread = 0LL;
      KeSetEvent(&this->m_PowerPolicyMachine.m_StateMachineLock.m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
    }
  }
}
