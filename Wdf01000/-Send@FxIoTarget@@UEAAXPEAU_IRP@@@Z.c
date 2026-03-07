void __fastcall FxIoTarget::Send(FxIoTarget *this, _IRP *Irp)
{
  IofCallDriver(this->m_TargetDevice, Irp);
}
