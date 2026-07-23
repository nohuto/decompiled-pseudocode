/*
 * XREFs of ZwPlugPlayControl @ 0x1403FCBE0
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x140601D00 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x14060ABE4 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140615D80 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x14061AC40 (PlugPlayGetDeviceProperty.c)
 *     PiCMDeleteDevice @ 0x14072BB1C (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14072F814 (PiCMSetProblem.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140734710 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x1408A3550 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwPlugPlayControl(
        PLUGPLAY_CONTROL_CLASS PnPControlClass,
        PVOID PnPControlData,
        ULONG PnPControlDataLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&PnPControlClass);
}
