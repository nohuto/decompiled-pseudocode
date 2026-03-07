void __fastcall FxInterrupt::DeleteObject(FxInterrupt *this)
{
  FxDeviceBase *m_DeviceBase; // rax
  _LIST_ENTRY *p_m_PnpList; // rcx
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned int MessageNumber; // edi
  FxDevicePwrRequirementMachine *m_WakeInterruptMachine; // rcx
  FxDeviceBase *v8; // rax

  if ( this->m_AddedToList )
  {
    m_DeviceBase = this->m_DeviceBase;
    p_m_PnpList = &this->m_PnpList;
    --*(_DWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 1184LL);
    Flink = p_m_PnpList->Flink;
    if ( p_m_PnpList->Flink->Blink != p_m_PnpList || (Blink = p_m_PnpList->Blink, Blink->Flink != p_m_PnpList) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  if ( this->m_CmTranslatedResource )
  {
    MessageNumber = this->m_InterruptInfo.MessageNumber;
    memset(&this->m_InterruptInfo, 0, sizeof(this->m_InterruptInfo));
    this->m_InterruptInfo.Size = 64;
    this->m_CmTranslatedResource = 0LL;
    this->m_InterruptInfo.MessageNumber = MessageNumber;
  }
  m_WakeInterruptMachine = (FxDevicePwrRequirementMachine *)this->m_WakeInterruptMachine;
  if ( m_WakeInterruptMachine )
  {
    FxWakeInterruptMachine::`scalar deleting destructor'(m_WakeInterruptMachine);
    v8 = this->m_DeviceBase;
    this->m_WakeInterruptMachine = 0LL;
    --*(_DWORD *)(*(_QWORD *)&v8[3].m_SpinLock.m_DbgFlagIsInitialized + 1208LL);
  }
  FxObject::DeleteObject(this);
}
