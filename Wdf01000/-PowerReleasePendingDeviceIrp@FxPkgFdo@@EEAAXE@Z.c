/*
 * XREFs of ?PowerReleasePendingDeviceIrp@FxPkgFdo@@EEAAXE@Z @ 0x1C00830F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0071FB0 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00832A0 (-_PowerPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

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
