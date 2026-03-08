/*
 * XREFs of ?PowerReleasePendingDeviceIrp@FxPkgPdo@@EEAAXE@Z @ 0x1C00808B0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0071FB0 (-CompletePowerRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 */

void __fastcall FxPkgPdo::PowerReleasePendingDeviceIrp(FxPkgPdo *this, unsigned __int8 IrpMustBePresent)
{
  _IRP *m_PendingDevicePowerIrp; // rax
  FxIrp irp; // [rsp+30h] [rbp+8h] BYREF

  m_PendingDevicePowerIrp = this->m_PendingDevicePowerIrp;
  this->m_PendingDevicePowerIrp = 0LL;
  if ( m_PendingDevicePowerIrp )
  {
    irp.m_Irp = m_PendingDevicePowerIrp;
    FxPkgPnp::CompletePowerRequest(this, &irp, 0);
  }
}
