/*
 * XREFs of ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C006CFA0
 * Callers:
 *     DrvSetMonitorsDimState @ 0x1C0069BFC (DrvSetMonitorsDimState.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C006A688 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     bSetDeviceSessionUsage @ 0x1C006ACE0 (bSetDeviceSessionUsage.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C006ADB0 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C006BAAC (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C006C2B0 (UpdateMonitorDevices.c)
 *     DrvSetMonitorBrightness @ 0x1C007E8AC (DrvSetMonitorBrightness.c)
 *     xxxRemoteConnect @ 0x1C007EDC0 (xxxRemoteConnect.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C00BCEF4 (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00D2E70 (DrvSetWddmDeviceMonitorPowerState.c)
 *     GreGdoDeviceIoControlEx @ 0x1C00D4140 (GreGdoDeviceIoControlEx.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00D4218 (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvSetVideoParameters @ 0x1C0174DC4 (DrvSetVideoParameters.c)
 *     EngDeviceIoControl @ 0x1C01772F0 (EngDeviceIoControl.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C006F4B0 (UserRemoteConnectedSessionUsingXddm.c)
 */

__int64 __fastcall GreDeviceIoControlImpl(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        unsigned int *a7,
        BOOLEAN InternalDeviceIoControl,
        int a9)
{
  unsigned int Status; // ebx
  PIRP v14; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741822;
  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  if ( !DeviceObject )
    return 3221225480LL;
  if ( InputBufferLength >= 0x2710000
    || OutputBufferLength >= 0x2710000
    || InputBufferLength + OutputBufferLength >= 0x2710000 )
  {
    return 3221225485LL;
  }
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Object,
          &IoStatusBlock);
  if ( v14 )
  {
    if ( a9 && (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = FileObject;
    Status = IofCallDriver(DeviceObject, v14);
    if ( Status == 259 )
    {
      while ( KeWaitForSingleObject(&Object, UserRequest, 0, 1u, 0LL) == 257 )
        ;
      Status = IoStatusBlock.Status;
    }
    *a7 = IoStatusBlock.Information;
  }
  return Status;
}
