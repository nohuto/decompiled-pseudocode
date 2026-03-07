int __fastcall FxInterrupt::Connect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  char v5; // dl
  FxInterrupt *v6; // rcx
  int v7; // r8d
  int id; // eax
  int v9; // esi
  const char *_a10; // r10
  const char *flags; // r9
  int v12; // ebx
  const void *ObjectHandleUnchecked; // rax
  const void *v14; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]

  m_Globals = this->m_Globals;
  if ( (NotifyFlags & 8) != 0 && FxInterrupt::IsActiveForWake(this) )
  {
    this->m_WakeInterruptMachine->m_ActiveForWake = 0;
    return 0;
  }
  if ( FxInterrupt::IsSoftDisconnectCapable(this) && v7 )
  {
    FxInterrupt::ReportActive(v6, 1u);
    goto $Enable;
  }
  if ( v6->m_ForceDisconnected || !v6->m_InterruptInfo.Vector )
    return 0;
  if ( (v5 & 1) != 0 )
    goto $Enable;
  id = FxInterrupt::ConnectInternal(v6);
  v9 = id;
  if ( id >= 0 )
  {
    this->m_Connected = 1;
    this->m_Active = 1;
$Enable:
    result = FxInterrupt::InterruptEnable(this);
    v12 = result;
    if ( result >= 0 )
    {
      this->m_Enabled = 1;
    }
    else
    {
      FxObject::GetObjectHandleUnchecked(this);
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xCu,
        0x18u,
        (const _GUID *)&WPP_InterruptObject_cpp_Traceguids,
        ObjectHandleUnchecked,
        v14,
        (__int64)this->m_Interrupt,
        v12);
      return v12;
    }
    return result;
  }
  this->m_Interrupt = 0LL;
  _a10 = "True";
  flags = "True";
  if ( !this->m_FloatingSave )
    flags = "False";
  if ( this->m_InterruptInfo.ShareDisposition != 3 )
    _a10 = "False";
  WPP_IFR_SF_qDDDDsdisd(
    m_Globals,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Irql,
    (unsigned __int16)flags,
    traceGuid,
    this->m_SpinLock,
    this->m_InterruptInfo.Vector,
    this->m_InterruptInfo.Irql,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Mode,
    _a10,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    flags,
    id);
  return v9;
}
