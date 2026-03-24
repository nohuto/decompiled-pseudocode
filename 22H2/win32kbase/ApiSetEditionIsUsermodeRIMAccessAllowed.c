/*
 * XREFs of ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C0056718
 * Callers:
 *     NtRIMOnPnpNotification @ 0x1C00538C0 (NtRIMOnPnpNotification.c)
 *     NtRIMReadInput @ 0x1C00B3ED0 (NtRIMReadInput.c)
 *     NtRIMAreSiblingDevices @ 0x1C0153020 (NtRIMAreSiblingDevices.c)
 *     NtRIMDeviceIoControl @ 0x1C0153080 (NtRIMDeviceIoControl.c)
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0153130 (NtRIMEnableMonitorMappingForDevice.c)
 *     NtRIMFreeInputBuffer @ 0x1C0153680 (NtRIMFreeInputBuffer.c)
 *     NtRIMGetDevicePreparsedData @ 0x1C01536C0 (NtRIMGetDevicePreparsedData.c)
 *     NtRIMGetDeviceProperties @ 0x1C0153750 (NtRIMGetDeviceProperties.c)
 *     NtRIMGetPhysicalDeviceRect @ 0x1C01537D0 (NtRIMGetPhysicalDeviceRect.c)
 *     NtRIMGetSourceProcessId @ 0x1C0153820 (NtRIMGetSourceProcessId.c)
 *     NtRIMOnTimerNotification @ 0x1C0153890 (NtRIMOnTimerNotification.c)
 *     NtRIMSetTestModeStatus @ 0x1C0154160 (NtRIMSetTestModeStatus.c)
 *     NtRIMUnregisterForInput @ 0x1C0154190 (NtRIMUnregisterForInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 ApiSetEditionIsUsermodeRIMAccessAllowed()
{
  unsigned int v0; // ebx
  int v1; // eax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      154,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  v0 = 0;
  if ( qword_1C0257138 )
    v1 = qword_1C0257138();
  else
    v1 = -1073741637;
  if ( v1 >= 0 && qword_1C0257140 )
    v0 = qword_1C0257140();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      10,
      155,
      (__int64)&WPP_44e4dd1e14ae338345a151075859def0_Traceguids);
  return v0;
}
