/*
 * XREFs of ZwPlugPlayControl @ 0x14041DE80
 * Callers:
 *     PiCMSetProblem @ 0x14065F700 (PiCMSetProblem.c)
 *     PlugPlayGetDeviceStatus @ 0x1406C13E4 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1406C2770 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1406CDA50 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x1406CE6C0 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x1406E7910 (PiPnpRtlGetDeviceRelationsList.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1409486E4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDevice @ 0x140954E2C (PiCMDeleteDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
