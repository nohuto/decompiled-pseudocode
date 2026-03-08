/*
 * XREFs of DpiPdoHandleStartDevice @ 0x1C021A3A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 */

__int64 __fastcall DpiPdoHandleStartDevice(PDEVICE_OBJECT DeviceObject)
{
  PVOID DeviceExtension; // rbx
  POWER_STATE v3; // r8d
  int v4; // eax
  bool v5; // zf

  DeviceExtension = DeviceObject->DeviceExtension;
  KeEnterCriticalRegion();
  if ( *((_BYTE *)DeviceExtension + 484) )
    DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
  v3.SystemState = *(SYSTEM_POWER_STATE *)(*((_QWORD *)DeviceExtension + 117) + 68LL);
  *((POWER_STATE *)DeviceExtension + 71) = v3;
  *((_DWORD *)DeviceExtension + 70) = 1;
  PoSetPowerState(DeviceObject, DevicePowerState, v3);
  *((_DWORD *)DeviceExtension + (*((_DWORD *)DeviceExtension + 69) & 7) + 61) = *((_DWORD *)DeviceExtension + 60);
  v4 = *((_DWORD *)DeviceExtension + 59);
  ++*((_DWORD *)DeviceExtension + 69);
  v5 = *((_BYTE *)DeviceExtension + 484) == 0;
  *((_DWORD *)DeviceExtension + 60) = v4;
  *((_DWORD *)DeviceExtension + 59) = 2;
  if ( !v5 )
    DpiEnableD3Requests(*((_QWORD *)DeviceExtension + 3));
  ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  KeLeaveCriticalRegion();
  WdLogSingleEntry1(4LL, DeviceObject);
  return 0LL;
}
