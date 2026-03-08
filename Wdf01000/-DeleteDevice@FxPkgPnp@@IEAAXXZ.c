/*
 * XREFs of ?DeleteDevice@FxPkgPnp@@IEAAXXZ @ 0x1C00720C4
 * Callers:
 *     ?ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C00695F0 (-ProcessRemoveDeviceOverload@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C007512C (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0078470 (-ProcessRemoveDeviceOverload@FxPkgFdo@@EEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C003C60C (-Destroy@FxDevice@@QEAAXXZ.c)
 */

void __fastcall FxPkgPnp::DeleteDevice(FxPkgPnp *this)
{
  FxDevice::Destroy(this->m_Device);
  this->m_DeviceBase->DeleteObject(this->m_DeviceBase);
}
