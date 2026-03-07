int __fastcall FxRequest::Complete(FxRequest *this, int Status)
{
  FxDeviceBase *m_DeviceBase; // rsi
  char m_Globals_high; // di
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v8; // r10

  m_DeviceBase = this->m_DeviceBase;
  m_Globals_high = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qqqd(
      v8,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      this->m_Irp.m_Irp,
      this->m_Irp.m_Irp->IoStatus.Information,
      Status);
  }
  if ( m_DeviceBase )
    m_Globals_high = HIBYTE(m_DeviceBase[1].m_Globals);
  this->m_PriorityBoost = m_Globals_high;
  return FxRequest::CompleteInternal(this, Status);
}
