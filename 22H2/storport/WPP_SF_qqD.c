/*
 * XREFs of WPP_SF_qqD @ 0x1C00337B0
 * Callers:
 *     RaUnitStartIo @ 0x1C0003A20 (RaUnitStartIo.c)
 *     RaUnitAsyncError @ 0x1C00073C8 (RaUnitAsyncError.c)
 *     RaidUnitCompleteRequest @ 0x1C0007A00 (RaidUnitCompleteRequest.c)
 *     RaDriverScsiIrp @ 0x1C0009AB0 (RaDriverScsiIrp.c)
 *     RaUnitScsiIrp @ 0x1C0009B50 (RaUnitScsiIrp.c)
 *     RaDriverDeviceControlIrp @ 0x1C000B0D0 (RaDriverDeviceControlIrp.c)
 *     RaUnitDeviceControlIrp @ 0x1C000B178 (RaUnitDeviceControlIrp.c)
 *     RaUnitPnpIrp @ 0x1C000B9E8 (RaUnitPnpIrp.c)
 *     RaDriverPnpIrp @ 0x1C000BC70 (RaDriverPnpIrp.c)
 *     RaidAdapterPowerUpDeviceCompletionLastStep @ 0x1C00127AC (RaidAdapterPowerUpDeviceCompletionLastStep.c)
 *     RaDriverPowerIrp @ 0x1C0012990 (RaDriverPowerIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0012A38 (RaidAdapterPowerIrp.c)
 *     RaUnitPowerIrp @ 0x1C0012B08 (RaUnitPowerIrp.c)
 *     RaidUnitSetPowerIrp @ 0x1C0012BEC (RaidUnitSetPowerIrp.c)
 *     RaidUnitSetSystemPowerIrp @ 0x1C0012D78 (RaidUnitSetSystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0013040 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterSetDevicePowerIrp @ 0x1C0013118 (RaidAdapterSetDevicePowerIrp.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0013324 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterDevicePowerDownSrbComplete @ 0x1C0013480 (RaidAdapterDevicePowerDownSrbComplete.c)
 *     RaidAdapterDevicePowerstopAdapter @ 0x1C00134DC (RaidAdapterDevicePowerstopAdapter.c)
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0013718 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00142B0 (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDeviceCompletion @ 0x1C0014A80 (RaidAdapterPowerUpDeviceCompletion.c)
 *     RaAdapterStartPowerIo @ 0x1C0014CB0 (RaAdapterStartPowerIo.c)
 *     RaidAdapterSetSystemPowerCompletion @ 0x1C00159B0 (RaidAdapterSetSystemPowerCompletion.c)
 *     RaidAdapterQuerySystemPowerCompletionRoutine @ 0x1C0015F80 (RaidAdapterQuerySystemPowerCompletionRoutine.c)
 *     RaidUnitSetDevicePowerCompletionRoutine @ 0x1C00160C0 (RaidUnitSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterPowerDownDeviceCompletion @ 0x1C00161C0 (RaidAdapterPowerDownDeviceCompletion.c)
 *     RaidAdapterSetDevicePowerCompletionRoutine @ 0x1C00162A0 (RaidAdapterSetDevicePowerCompletionRoutine.c)
 *     RaidAdapterQueryDevicePowerCompletionRoutine @ 0x1C0016350 (RaidAdapterQueryDevicePowerCompletionRoutine.c)
 *     RaidAdapterPnpIrp @ 0x1C0016854 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C00169F4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaUnitRemoveDeviceIrp @ 0x1C001D21C (RaUnitRemoveDeviceIrp.c)
 *     RaidAdapterStartDevice @ 0x1C002F9D4 (RaidAdapterStartDevice.c)
 *     RaUnitStartResetIo @ 0x1C0048E98 (RaUnitStartResetIo.c)
 *     RaidUnitCompleteResetRequest @ 0x1C004A660 (RaidUnitCompleteResetRequest.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C004AE60 (RaidUnitIdentityUpdateWorkRoutine.c)
 *     RaDriverCreateIrp @ 0x1C0072B00 (RaDriverCreateIrp.c)
 *     RaDriverCloseIrp @ 0x1C0072BB0 (RaDriverCloseIrp.c)
 *     RaDriverSystemControlIrp @ 0x1C0074FC0 (RaDriverSystemControlIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C00781BC (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_SF_qqD(__int64 a1, unsigned __int16 a2, __int64 a3, ...)
{
  __int64 v4; // [rsp+88h] [rbp+20h] BYREF
  va_list va; // [rsp+88h] [rbp+20h]
  __int64 v6; // [rsp+90h] [rbp+28h] BYREF
  va_list va1; // [rsp+90h] [rbp+28h]
  va_list va2; // [rsp+98h] [rbp+30h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           a3,
           a2,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           va2,
           4LL,
           0LL);
}
