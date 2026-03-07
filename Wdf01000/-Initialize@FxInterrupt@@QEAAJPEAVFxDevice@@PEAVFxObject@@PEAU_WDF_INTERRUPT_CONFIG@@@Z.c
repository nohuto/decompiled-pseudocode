int __fastcall FxInterrupt::Initialize(
        FxInterrupt *this,
        FxDevice *Device,
        FxObject *Parent,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  FxPkgPnp *m_PkgPnp; // rbx
  int result; // eax
  _LIST_ENTRY *Blink; // rdx
  _LIST_ENTRY *p_m_PnpList; // rax

  FxObject::AddRef(Device, this, 416, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
  this->m_DeviceBase = Device;
  m_PkgPnp = Device->m_PkgPnp;
  FxObject::AddRef(
    this,
    FxInterrupt::_InterruptThunk,
    433,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\interruptobject.cpp");
  this->m_ShareVector = Configuration->ShareVector;
  this->m_FloatingSave = Configuration->FloatingSave;
  this->m_EvtInterruptEnable = Configuration->EvtInterruptEnable;
  this->m_EvtInterruptDisable = Configuration->EvtInterruptDisable;
  result = FxInterrupt::InitializeWorker(this, Parent, Configuration);
  if ( result >= 0 )
  {
    this->m_InterruptInfo.MessageNumber = m_PkgPnp->m_InterruptObjectCount;
    if ( Configuration->InterruptRaw )
    {
      this->m_CreatedInPrepareHardware = 1;
      FxInterrupt::AssignResources(this, Configuration->InterruptRaw - 1, Configuration->InterruptTranslated - 1);
    }
    ++m_PkgPnp->m_InterruptObjectCount;
    Blink = m_PkgPnp->m_InterruptListHead.Blink;
    p_m_PnpList = &this->m_PnpList;
    if ( Blink->Flink != &m_PkgPnp->m_InterruptListHead )
      __fastfail(3u);
    p_m_PnpList->Flink = &m_PkgPnp->m_InterruptListHead;
    this->m_PnpList.Blink = Blink;
    Blink->Flink = p_m_PnpList;
    m_PkgPnp->m_InterruptListHead.Blink = p_m_PnpList;
    result = 0;
    this->m_AddedToList = 1;
  }
  return result;
}
