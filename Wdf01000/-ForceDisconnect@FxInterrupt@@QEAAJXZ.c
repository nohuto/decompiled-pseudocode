__int64 __fastcall FxInterrupt::ForceDisconnect(FxInterrupt *this)
{
  unsigned int Flags; // ebx
  FxObject *v3; // rdx
  const void *_a1; // rax
  const void *_a2; // r8

  Flags = this->m_DeviceBase->m_DeviceObject.m_DeviceObject->Flags;
  FxObject::GetObjectHandleUnchecked(this);
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v3);
  WPP_IFR_SF_qqq(
    this->m_Globals,
    4u,
    0xCu,
    0x1Au,
    (const _GUID *)&WPP_InterruptObject_cpp_Traceguids,
    _a1,
    _a2,
    this->m_Interrupt);
  this->m_ForceDisconnected = 1;
  return FxInterrupt::Disconnect(this, (Flags & 0x2000) == 0);
}
