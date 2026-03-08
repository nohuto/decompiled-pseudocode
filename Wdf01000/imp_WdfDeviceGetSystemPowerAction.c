/*
 * XREFs of imp_WdfDeviceGetSystemPowerAction @ 0x1C0032C00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetSystemPowerAction@FxPkgPnp@@QEAA?AW4POWER_ACTION@@XZ @ 0x1C00725F8 (-GetSystemPowerAction@FxPkgPnp@@QEAA-AW4POWER_ACTION@@XZ.c)
 */

POWER_ACTION __fastcall imp_WdfDeviceGetSystemPowerAction(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFDEVICE__ *Device)
{
  FxDevice *pDevice; // [rsp+30h] [rbp+8h] BYREF

  pDevice = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Device, 0x1002u, (void **)&pDevice);
  return FxPkgPnp::GetSystemPowerAction(pDevice->m_PkgPnp);
}
