void __fastcall FxPoxInterface::~FxPoxInterface(FxPoxInterface *this)
{
  FxDevicePwrRequirementMachine *m_DevicePowerRequirementMachine; // rcx

  m_DevicePowerRequirementMachine = this->m_DevicePowerRequirementMachine;
  if ( m_DevicePowerRequirementMachine )
    FxWakeInterruptMachine::`scalar deleting destructor'(m_DevicePowerRequirementMachine);
  this->m_DevicePowerRequiredLock.m_DbgFlagIsInitialized = 0;
}
