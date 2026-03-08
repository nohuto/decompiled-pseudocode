/*
 * XREFs of ?GetDispatchPower@FxPkgPdo@@EEAAPEBQ6AJPEAVFxPkgPnp@@PEAVFxIrp@@@ZXZ @ 0x1C0009760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int (__fastcall *const *__fastcall FxPkgPdo::GetDispatchPower(FxPkgPdo *this))(FxPkgPnp *, FxIrp *)
{
  return FxPkgPdo::m_PdoPowerFunctionTable;
}
