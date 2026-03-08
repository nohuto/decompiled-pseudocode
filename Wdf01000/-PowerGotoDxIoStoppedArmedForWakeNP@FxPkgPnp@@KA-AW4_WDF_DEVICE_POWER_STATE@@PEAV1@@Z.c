/*
 * XREFs of ?PowerGotoDxIoStoppedArmedForWakeNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006EDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C006EDF4 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxIoStoppedArmedForWakeNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerGotoDxIoStoppedCommon(This, 1u) != 0 ? 33574 : 33566;
}
