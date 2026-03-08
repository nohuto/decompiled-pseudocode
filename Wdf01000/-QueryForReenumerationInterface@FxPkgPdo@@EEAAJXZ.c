/*
 * XREFs of ?QueryForReenumerationInterface@FxPkgPdo@@EEAAJXZ @ 0x1C00696B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ @ 0x1C0071874 (-AllocateWorkItemForSetDeviceFailed@FxPkgPnp@@IEAAJXZ.c)
 */

int __fastcall FxPkgPdo::QueryForReenumerationInterface(FxPkgPdo *this)
{
  return FxPkgPnp::AllocateWorkItemForSetDeviceFailed(this);
}
