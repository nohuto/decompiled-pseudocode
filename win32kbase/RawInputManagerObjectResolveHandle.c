/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C0039E60
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C0004D20 (RIMAddInjectionDeviceOfType.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C002F1B0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C00320D4 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMUnregisterForInput @ 0x1C00326C0 (RIMUnregisterForInput.c)
 *     RIMDeviceIoControl @ 0x1C00336C0 (RIMDeviceIoControl.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00356F0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMOnPnpNotification @ 0x1C00383E0 (RIMOnPnpNotification.c)
 *     RIMOnAsyncPnpWorkNotification @ 0x1C0038B90 (RIMOnAsyncPnpWorkNotification.c)
 *     RIMReadInput @ 0x1C0039160 (RIMReadInput.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0093B20 (UserDeactivateMITInputProcessing.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00B5E60 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C00C7510 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C00C9690 (RIMRemoveInputOfType.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00D76C0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C01A1574 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInputOfType @ 0x1C01A3240 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01A3530 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01A3C50 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C01A46A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C01A4D80 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C01A4FD0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C01A5390 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C01A5A80 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C01A5E90 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C01A61D0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01A67F0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C01A6C80 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C01A7180 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C01A7490 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C01A7750 (RIMRemoveInjectionDevice.c)
 *     RIMResetPointerDevices @ 0x1C01A7E40 (RIMResetPointerDevices.c)
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
