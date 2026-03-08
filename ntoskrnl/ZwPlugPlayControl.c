/*
 * XREFs of ZwPlugPlayControl @ 0x140414A70
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x14076AD10 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x14076F8F4 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x14077EC00 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x140783CF0 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140851CF0 (PiPnpRtlGetDeviceRelationsList.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140957504 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDevice @ 0x140965ED8 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x140967AB4 (PiCMSetProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
