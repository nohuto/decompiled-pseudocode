void __fastcall FxPkgPnp::PowerPolicySubmitUsbIdleNotification(FxPkgPnp *this)
{
  FxUsbIdleInfo *m_UsbIdle; // rbx

  this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_EventDropped = 0;
  m_UsbIdle = this->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  IoReuseIrp(m_UsbIdle->m_IdleIrp.m_Irp, 0);
  FxIrp::SetCompletionRoutineEx(
    &m_UsbIdle->m_IdleIrp,
    this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
    (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgPnp::_PowerPolicyUsbSelectiveSuspendCompletionRoutine,
    this);
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 15;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228263;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = 16;
  m_UsbIdle->m_IdleIrp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)&this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_CallbackInfo;
  IofCallDriver(
    this->m_DeviceBase->m_AttachedDevice.m_DeviceObject,
    this->m_PowerPolicyMachine.m_Owner->m_UsbIdle->m_IdleIrp.m_Irp);
}
