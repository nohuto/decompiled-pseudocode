bool __fastcall FxIoQueue::IsPowerStateNotifyingDriver(FxIoQueue *this)
{
  FxIoQueuePowerState m_PowerState; // eax

  m_PowerState = this->m_PowerState;
  return m_PowerState == FxIoQueuePowerStoppingNotifyingDriver
      || m_PowerState == FxIoQueuePowerPurgeNotifyingDriver
      || m_PowerState == FxIoQueuePowerRestartingNotifyingDriver;
}
