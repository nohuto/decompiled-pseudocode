/*
 * XREFs of ?PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070510
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qqLd @ 0x1C00581F8 (WPP_IFR_SF_qqLd.c)
 *     ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C006CAB8 (-Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0081E40 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableFailedNP(FxPkgPnp *This)
{
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  const void *_a2; // rax
  __int64 v4; // rdx
  int v5; // r8d

  FxPkgPnp::PowerDmaPowerDown(This);
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
  if ( (int)FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
              &This->m_DeviceD0ExitPreInterruptsDisabled,
              ObjectHandleUnchecked,
              5u) < 0 )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(This->m_DeviceBase);
    WPP_IFR_SF_qqLd(
      This->m_Globals,
      v4,
      0xCu,
      0x1Cu,
      WPP_PowerStateMachine_cpp_Traceguids,
      _a2,
      *(const void **)(v4 + 144),
      5u,
      v5);
  }
  return 33592LL;
}
