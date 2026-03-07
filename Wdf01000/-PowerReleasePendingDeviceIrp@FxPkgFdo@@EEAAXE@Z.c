void __fastcall FxPkgFdo::PowerReleasePendingDeviceIrp(FxPkgFdo *this, unsigned __int8 IrpMustBePresent)
{
  _IRP *m_PendingDevicePowerIrp; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp;
  this->m_PendingDevicePowerIrp = 0LL;
  if ( m_PendingDevicePowerIrp )
  {
    CurrentStackLocation = m_PendingDevicePowerIrp->Tail.Overlay.CurrentStackLocation;
    irp.m_Irp = m_PendingDevicePowerIrp;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    {
      FxPkgPnp::CompletePowerRequest(this, &irp, 0);
    }
    else
    {
      m_PendingDevicePowerIrp->IoStatus.Status = 0;
      FxPkgFdo::_PowerPassDown(this, &irp);
    }
  }
}
