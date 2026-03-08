/*
 * XREFs of DxgkMiracastQueryMiracastStatus @ 0x1C039BE64
 * Callers:
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02CE9A0 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C005FF40 (DpiMiracastReleaseMiracastDeviceContext.c)
 *     DpiMiracastGetDeviceContextFromName @ 0x1C039A854 (DpiMiracastGetDeviceContextFromName.c)
 */

__int64 __fastcall DxgkMiracastQueryMiracastStatus(const WCHAR *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 DeviceContextFromName; // rax
  __int64 v6; // rdi
  __int64 result; // rax

  DeviceContextFromName = DpiMiracastGetDeviceContextFromName(a1);
  v6 = DeviceContextFromName;
  if ( DeviceContextFromName )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(DeviceContextFromName + 32);
    *a2 = *(_DWORD *)(v6 + 408);
    *a3 = *(_DWORD *)(v6 + 416);
    *(_QWORD *)(v6 + 88) = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(v6 + 32);
    DpiMiracastReleaseMiracastDeviceContext((int *)v6, v6);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -2147483642LL);
    result = 3221226021LL;
    *a3 = -2147483642;
  }
  return result;
}
