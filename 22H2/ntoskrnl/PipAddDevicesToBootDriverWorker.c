/*
 * XREFs of PipAddDevicesToBootDriverWorker @ 0x140B6B094
 * Callers:
 *     PipApplyFunctionToServiceInstances @ 0x14084A26C (PipApplyFunctionToServiceInstances.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     PnpDeviceObjectFromDeviceInstanceWithTag @ 0x1406CBF54 (PnpDeviceObjectFromDeviceInstanceWithTag.c)
 *     PiProcessAddBootDevices @ 0x140855240 (PiProcessAddBootDevices.c)
 */

__int64 __fastcall PipAddDevicesToBootDriverWorker(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  void *v3; // rbx

  v2 = PnpDeviceObjectFromDeviceInstanceWithTag(a2, 0x746C6644u);
  v3 = v2;
  if ( v2 )
  {
    PiProcessAddBootDevices((__int64)v2);
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
  }
  return 1LL;
}
