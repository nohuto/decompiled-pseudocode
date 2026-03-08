/*
 * XREFs of FxIsEqualGuid @ 0x1C00229A0
 * Callers:
 *     ?FxVerifyLogHeader@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_IFR_HEADER@@@Z @ 0x1C0007F9C (-FxVerifyLogHeader@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_IFR_HEADER@@@Z.c)
 *     ?FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z @ 0x1C00275CC (-FxIFRValidateLogHeader@@YAJPEAU_WDF_IFR_HEADER@@@Z.c)
 *     imp_WdfWmiInstanceCreate @ 0x1C0027A20 (imp_WdfWmiInstanceCreate.c)
 *     imp_WdfWmiProviderCreate @ 0x1C0027E70 (imp_WdfWmiProviderCreate.c)
 *     ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0029BA0 (-AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmi.c)
 *     WdfDeviceSetDeviceInterfaceStateWorker @ 0x1C0049AE0 (WdfDeviceSetDeviceInterfaceStateWorker.c)
 *     imp_WdfDeviceRetrieveDeviceInterfaceString @ 0x1C0049EF0 (imp_WdfDeviceRetrieveDeviceInterfaceString.c)
 *     ?_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z @ 0x1C0056340 (-_PlugPlayNotification@FxIoTargetRemote@@KAJPEAX0@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0072CCC (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxIsEqualGuid(const _GUID *Lhs, const _GUID *Rhs)
{
  return RtlCompareMemory(Lhs, Rhs, 0x10uLL) == 16;
}
