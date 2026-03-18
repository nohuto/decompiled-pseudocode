/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C0043EC0
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004880 (RIMAddInjectionDeviceOfType.c)
 *     RIMOnPnpNotification @ 0x1C0042B50 (RIMOnPnpNotification.c)
 *     RIMReadInput @ 0x1C0043300 (RIMReadInput.c)
 *     RIMDeviceIoControl @ 0x1C0043640 (RIMDeviceIoControl.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0047820 (RIMDirectStartStopDeviceRead.c)
 *     RIMUnregisterForInput @ 0x1C0047ED0 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0048450 (RIMDirectStopDeviceClassNotifications.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C005DB90 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005E080 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C00B5D50 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMRemoveInputOfType @ 0x1C00B6F70 (RIMRemoveInputOfType.c)
 *     RIMResetPointerDevices @ 0x1C00B71A0 (RIMResetPointerDevices.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00D3390 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C017FAEC (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInputOfType @ 0x1C01816C0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0181990 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0182000 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0182990 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0183000 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0183250 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0183600 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0183CF0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C01840C0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C01843F0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01849A0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0184E30 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0185330 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMOnTimerNotification @ 0x1C01857B0 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0185AD0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0185D90 (RIMRemoveInjectionDevice.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01EBB48 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  Object = 0LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
