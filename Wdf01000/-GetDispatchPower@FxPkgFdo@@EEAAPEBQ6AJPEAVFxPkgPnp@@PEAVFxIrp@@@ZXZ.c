/*
 * XREFs of ?GetDispatchPower@FxPkgFdo@@EEAAPEBQ6AJPEAVFxPkgPnp@@PEAVFxIrp@@@ZXZ @ 0x1C0009990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int (__fastcall *const *__fastcall FxPkgFdo::GetDispatchPower(FxPkgFdo *this))(FxPkgPnp *, FxIrp *)
{
  return FxPkgFdo::m_FdoPowerFunctionTable;
}
