/*
 * XREFs of ZwPlugPlayControl @ 0x1403FC080
 * Callers:
 *     PiPnpRtlGetDeviceInterfaceEnabled @ 0x140686B50 (PiPnpRtlGetDeviceInterfaceEnabled.c)
 *     PlugPlayGetDeviceStatus @ 0x14068F4A4 (PlugPlayGetDeviceStatus.c)
 *     PiPnpRtlGetDeviceRelatedDeviceRoutine @ 0x140699880 (PiPnpRtlGetDeviceRelatedDeviceRoutine.c)
 *     PlugPlayGetDeviceProperty @ 0x14069EBF0 (PlugPlayGetDeviceProperty.c)
 *     PiCMDeleteDevice @ 0x14072C52C (PiCMDeleteDevice.c)
 *     PiCMSetProblem @ 0x14072FAFC (PiCMSetProblem.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x1407348A0 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGetDeviceRelationsList @ 0x1408A3440 (PiPnpRtlGetDeviceRelationsList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwPlugPlayControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
