/*
 * XREFs of ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C006A058
 * Callers:
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C0069F80 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00CF400 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C017492C (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C00719F0 (DrvGetDeviceFromName.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C0071D50 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

__int64 __fastcall DrvGetDeviceFromNameAndValidateDevice(
        struct _UNICODE_STRING *a1,
        enum _MODE a2,
        struct tagGRAPHICS_DEVICE **a3)
{
  __int64 DeviceFromName; // rdi
  int v5; // eax
  PCUNICODE_STRING String1; // [rsp+48h] [rbp+20h] BYREF

  DeviceFromName = 0LL;
  if ( a2 == UserMode )
  {
    String1 = 0LL;
    if ( (int)DrvProbeAndCaptureString(a1, (struct AUTO_FREE_STRING *)&String1) >= 0 )
      DeviceFromName = DrvGetDeviceFromName(String1);
    if ( String1 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (void *)String1);
  }
  else
  {
    DeviceFromName = DrvGetDeviceFromName(a1);
  }
  if ( !DeviceFromName )
    return 3223193057LL;
  v5 = *(_DWORD *)(DeviceFromName + 160);
  if ( (v5 & 1) == 0 )
    return 3223193058LL;
  if ( (v5 & 8) != 0 )
    return 3223193059LL;
  *a3 = (struct tagGRAPHICS_DEVICE *)DeviceFromName;
  return 0LL;
}
