/*
 * XREFs of ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00AFAD4
 * Callers:
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00AF980 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0192D10 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1C0194628 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     DrvGetDeviceFromName @ 0x1C003C370 (DrvGetDeviceFromName.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z @ 0x1C00AFB64 (-DrvProbeAndCaptureString@@YAJPEAU_UNICODE_STRING@@PEAUAUTO_FREE_STRING@@@Z.c)
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
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)String1);
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
