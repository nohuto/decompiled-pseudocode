/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C00848D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00827D4 (-RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgFdo::ReleaseReenumerationInterface(FxPkgFdo *this)
{
  void (__fastcall *InterfaceDereference)(void *); // rax

  FxPkgPnp::RemoveWorkItemForSetDeviceFailed(this);
  InterfaceDereference = this->m_SurpriseRemoveAndReenumerateSelfInterface.InterfaceDereference;
  this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf = 0LL;
  if ( InterfaceDereference )
    InterfaceDereference(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
}
