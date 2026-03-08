/*
 * XREFs of Controller_IsSecureDevice @ 0x1C000B0F8
 * Callers:
 *     Endpoint_Create @ 0x1C006D624 (Endpoint_Create.c)
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 *     Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C006E400 (Controller_ExecuteHSICDisconnectInU3Workaround.c)
 *     Register_Create @ 0x1C006FE40 (Register_Create.c)
 *     Command_CreateCommandWatchdogTimer @ 0x1C00700BC (Command_CreateCommandWatchdogTimer.c)
 *     Interrupter_CreateInterrupter @ 0x1C0070198 (Interrupter_CreateInterrupter.c)
 *     RootHub_PrepareHardware @ 0x1C00706C0 (RootHub_PrepareHardware.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071B88 (Register_ParseCapabilityRegister.c)
 *     Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd @ 0x1C00725A0 (Endpoint_UcxEvtUsbDeviceDefaultEndpointAdd.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x1C0072A30 (Controller_WdfEvtDevicePrepareHardware.c)
 *     CommonBuffer_Create @ 0x1C0072F2C (CommonBuffer_Create.c)
 *     Register_PrepareHardware @ 0x1C0073388 (Register_PrepareHardware.c)
 *     Controller_PopulateDeviceFlags @ 0x1C00738B4 (Controller_PopulateDeviceFlags.c)
 *     Bulk_GetConfiguration @ 0x1C00752B0 (Bulk_GetConfiguration.c)
 *     Controller_TelemetryAddControllerData @ 0x1C0078AF0 (Controller_TelemetryAddControllerData.c)
 *     Controller_WdfEvtDeviceReleaseHardware @ 0x1C0079480 (Controller_WdfEvtDeviceReleaseHardware.c)
 * Callees:
 *     <none>
 */

char __fastcall Controller_IsSecureDevice(__int64 a1)
{
  return *(_BYTE *)(a1 + 601);
}
