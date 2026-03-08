/*
 * XREFs of ?Invoke@FxPnpDeviceD0ExitPreInterruptsDisabled@@QEAAJPEAUWDFDEVICE__@@W4_WDF_POWER_DEVICE_STATE@@@Z @ 0x1C006CAB8
 * Callers:
 *     ?PowerD0StartingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006E280 (-PowerD0StartingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoD3Stopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006EA80 (-PowerGotoD3Stopped@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z @ 0x1C006EDF4 (-PowerGotoDxIoStoppedCommon@FxPkgPnp@@IEAAEE@Z.c)
 *     ?PowerInitialDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C006F150 (-PowerInitialDmaEnableFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterrupt@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070260 (-PowerWakingConnectInterrupt@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingConnectInterruptNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C00703A0 (-PowerWakingConnectInterruptNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070480 (-PowerWakingDmaEnableFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0070510 (-PowerWakingDmaEnableFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

int (__fastcall *__fastcall FxPnpDeviceD0ExitPreInterruptsDisabled::Invoke(
        FxPnpDeviceD0ExitPreInterruptsDisabled *this,
        WDFDEVICE__ *Device,
        unsigned int TargetState))(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE)
{
  int (__fastcall *result)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE); // rax

  result = this->m_Method;
  if ( this->m_Method )
    return (int (__fastcall *)(WDFDEVICE__ *, _WDF_POWER_DEVICE_STATE))((__int64 (__fastcall *)(WDFDEVICE__ *, _QWORD))result)(
                                                                         Device,
                                                                         TargetState);
  return result;
}
