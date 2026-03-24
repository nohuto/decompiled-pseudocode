/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C00551A0
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C0005EB0 (RIMRemoveInputOfType.c)
 *     RIMDeviceIoControl @ 0x1C0052E70 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x1C00535F0 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0053760 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0053BE0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C00542C0 (RIMReadInput.c)
 *     RIMUnregisterForInput @ 0x1C0054610 (RIMUnregisterForInput.c)
 *     RIMOnPnpNotification @ 0x1C00549C0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0054E80 (RIMDirectStartStopDeviceRead.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0088F08 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00893D0 (RIMRegisterForInputWithCallbacks.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00C4490 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0152CE8 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01547D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0154CB0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0154E40 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01551B0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0155790 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0155C90 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0155E20 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C01560F0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0156710 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C01569C0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0156BD0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0157080 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0157380 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C01577C0 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0157D30 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0157F00 (RIMRemoveInjectionDevice.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01B1E78 (UserDeactivateMITInputProcessing.c)
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
