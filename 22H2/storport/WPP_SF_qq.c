/*
 * XREFs of WPP_SF_qq @ 0x1C0033760
 * Callers:
 *     RaDriverScsiIrp @ 0x1C0009AB0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0009B50 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000B0D0 (RaDriverDeviceControlIrp.c)
 *     RaUnitScsiGetDumpPointersIoctl @ 0x1C0011BC0 (RaUnitScsiGetDumpPointersIoctl.c)
 *     RaDriverPowerIrp @ 0x1C0012990 (RaDriverPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0012B08 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0012BEC (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetDevicePowerIrp @ 0x1C0012EDC (RaidUnitSetDevicePowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0013040 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0013118 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0013324 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00134DC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C001360C (RaidUnitProcessSetDevicePowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C00141FC (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00142B0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0014A80 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaUnitScsiFreeDumpPointersIoctl @ 0x1C00151D4 (RaUnitScsiFreeDumpPointersIoctl.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C00159B0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0015F80 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00160C0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C00161C0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00162A0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0016350 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00169F4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001D21C (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C002F9D4 (RaidAdapterStartDevice.c)
 *     RaDriverAddDevice @ 0x1C00341F0 (RaDriverAddDevice.c)
 *     StorpFreeTimer @ 0x1C003B73C (StorpFreeTimer.c)
 *     StorpFreeWorkItem @ 0x1C003B9AC (StorpFreeWorkItem.c)
 *     StorpInitializeTimer @ 0x1C003C490 (StorpInitializeTimer.c)
 *     StorpInitializeWorkItem @ 0x1C003C61C (StorpInitializeWorkItem.c)
 *     RaidSyncAcpiEvalMethod @ 0x1C0045D5C (RaidSyncAcpiEvalMethod.c)
 *     RaDriverCreateIrp @ 0x1C0072B00 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0072BB0 (RaDriverCloseIrp.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1C0073D24 (RaUnitStorageDataSetManagementIoctl.c)
 *     RaDriverSystemControlIrp @ 0x1C0074FC0 (RaDriverSystemControlIrp.c)
 *     RaidAdapterDiagnosticIoctl @ 0x1C0077B5C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1C007843C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1C0078750 (RaidAdapterGetMiniportDumpInfo.c)
 *     RaidAdapterScsiIrp @ 0x1C00790E8 (RaidAdapterScsiIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qq(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  va_list va1; // [rsp+80h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           va1,
           8LL,
           0LL);
}
