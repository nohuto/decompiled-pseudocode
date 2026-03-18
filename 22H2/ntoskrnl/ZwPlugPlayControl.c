/*
 * XREFs of ZwPlugPlayControl @ 0x14041CE00
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x1407BCA80 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x1407C0D64 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x1407CE3E0 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x1407D34A0 (PlugPlayGetDeviceProperty.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x140855B20 (PiPnpRtlGetDeviceRelationsList.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14095A524 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiCMDeleteDevice @ 0x140968EF8 (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14096AAD4 (PiCMSetProblem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
