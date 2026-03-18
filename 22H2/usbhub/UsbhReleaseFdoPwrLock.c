/*
 * XREFs of UsbhReleaseFdoPwrLock @ 0x1C0018364
 * Callers:
 *     UsbhFdoReturnPortStatus @ 0x1C00099C0 (UsbhFdoReturnPortStatus.c)
 *     UsbhFdoWakePoComplete_Action @ 0x1C000CA20 (UsbhFdoWakePoComplete_Action.c)
 *     UsbhFdoD0Worker_Action @ 0x1C000DC30 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoS0IoComplete_Action @ 0x1C000E210 (UsbhFdoS0IoComplete_Action.c)
 *     UsbhFdoSystemPowerState @ 0x1C000E9B0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoDevicePowerState @ 0x1C00101B0 (UsbhFdoDevicePowerState.c)
 *     UsbhPdoDevicePowerState @ 0x1C00109A0 (UsbhPdoDevicePowerState.c)
 *     UsbhSS_PdoWakeWorker @ 0x1C0016F40 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetD0 @ 0x1C00173C0 (UsbhPdoSetD0.c)
 *     UsbhPdoSetD0_Finish @ 0x1C001820C (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSetDx @ 0x1C0018BE0 (UsbhPdoSetDx.c)
 *     UsbhFdoResetPdoPort @ 0x1C0031320 (UsbhFdoResetPdoPort.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x1C003BD38 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x1C003CA70 (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C003F534 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhPdoPnp_RemoveDevice @ 0x1C0057150 (UsbhPdoPnp_RemoveDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 */

void __fastcall UsbhReleaseFdoPwrLock(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx

  v3 = FdoExt(a1);
  FdoExt(*(_QWORD *)(a2 + 8));
  *(_DWORD *)(a2 + 32) = 1734964085;
  *((_QWORD *)v3 + 168) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)v3 + 632, *((_BYTE *)v3 + 5064));
}
