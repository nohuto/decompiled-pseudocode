/*
 * XREFs of ?PowerGotoDxStoppedDisableInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006F060
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1C0073524 (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 */

__int64 __fastcall FxPkgPnp::PowerGotoDxStoppedDisableInterruptNP(FxPkgPnp *This)
{
  FxPkgPnp::NotifyResourceObjectsDx(This, 2u);
  return 841LL;
}
