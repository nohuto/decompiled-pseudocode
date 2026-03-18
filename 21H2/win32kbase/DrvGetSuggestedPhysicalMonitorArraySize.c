/*
 * XREFs of DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C0069F80
 * Callers:
 *     NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00D04B0 (NtGdiGetSuggestedOPMProtectedOutputArraySize.c)
 * Callees:
 *     ?DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z @ 0x1C006A010 (-DrvGetNumberOfPhysicalMonitors@@YAJPEAUtagGRAPHICS_DEVICE@@PEAK@Z.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006A058 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     UpdateMonitorDevices @ 0x1C006C2B0 (UpdateMonitorDevices.c)
 */

__int64 __fastcall DrvGetSuggestedPhysicalMonitorArraySize(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        unsigned int *Address)
{
  __int64 result; // rax
  struct tagGRAPHICS_DEVICE *v7; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF

  UpdateMonitorDevices(0LL);
  v7 = 0LL;
  result = DrvGetDeviceFromNameAndValidateDevice(a1, a2, &v7);
  if ( (int)result >= 0 )
  {
    v8 = 0;
    result = DrvGetNumberOfPhysicalMonitors(v7, &v8);
    if ( (int)result >= 0 )
    {
      ProbeForWrite(Address, 4uLL, 4u);
      *Address = v8;
      return 0LL;
    }
  }
  return result;
}
