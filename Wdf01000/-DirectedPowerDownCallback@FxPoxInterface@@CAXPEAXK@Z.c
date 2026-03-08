/*
 * XREFs of ?DirectedPowerDownCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C0084150
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z @ 0x1C0010136 (-DprProcessEventFromPoxCallback@FxPoxInterface@@AEAAXW4FxDevicePwrRequirementEvents@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void __fastcall FxPoxInterface::DirectedPowerDownCallback(FxPoxInterface *Context, unsigned int Flags)
{
  const void *_a1; // rax
  __int64 v4; // rdx
  __int64 v5; // r10

  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(Context->m_PkgPnp->m_DeviceBase);
  WPP_IFR_SF_qq(
    *(_FX_DRIVER_GLOBALS **)(v5 + 16),
    4u,
    0xCu,
    0x13u,
    WPP_PoxInterfaceKm_cpp_Traceguids,
    _a1,
    *(const void **)(v4 + 144));
  _InterlockedExchange(&Context->m_DirectedTransitionActive, 1);
  FxPoxInterface::DprProcessEventFromPoxCallback(Context, DprEventPoxDirectedPowerDown);
}
