/*
 * XREFs of ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C007FB00
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C0051B74 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C007BC58 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::CleanupDeviceFromFailedCreate(FxPkgPnp *this, MxEvent *WaitEvent)
{
  unsigned __int8 v4; // r8
  FxPkgPnp_vtbl *v5; // rax

  KeGetCurrentIrql();
  KeClearEvent(&WaitEvent->m_Event);
  FxObject::AddRef(this, WaitEvent, 2407, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  this->m_DeviceRemoveProcessed = WaitEvent;
  FxPkgPnp::PnpProcessEvent(this, PnpEventRemove, v4);
  KeWaitForSingleObject(WaitEvent, Executive, 0, 0, 0LL);
  v5 = this->__vftable;
  this->m_DeviceRemoveProcessed = 0LL;
  v5->Release(this, WaitEvent, 2425, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
}
