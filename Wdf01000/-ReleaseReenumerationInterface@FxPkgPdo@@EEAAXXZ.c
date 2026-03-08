/*
 * XREFs of ?ReleaseReenumerationInterface@FxPkgPdo@@EEAAXXZ @ 0x1C0069730
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ @ 0x1C00757A4 (-RemoveWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAXXZ.c)
 */

void __fastcall FxPkgPdo::ReleaseReenumerationInterface(FxPkgPdo *this)
{
  FxPkgPnp::RemoveWorkItemForSetDeviceFailed(this);
}
