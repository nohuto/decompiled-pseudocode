/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1406D3FF4
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D4030 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopGetDeviceInterfaces @ 0x140787900 (IopGetDeviceInterfaces.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140790C94 (IopDeviceObjectFromSymbolicName.c)
 *     IopProcessSetInterfaceState @ 0x140793BE4 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1407940CC (IopBuildGlobalSymbolicLinkString.c)
 *     IoGetDeviceInterfaceAlias @ 0x1407C5A60 (IoGetDeviceInterfaceAlias.c)
 *     PiDeviceRegistration @ 0x1407CFB4C (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1407CFCF8 (PpForEachDeviceInstanceDriver.c)
 *     PnpIsDeviceInstanceEnabled @ 0x1407D8E64 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1407D8FDC (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x1407DC404 (PnpGetDeviceInterfacePropertyData.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x140849F50 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PipApplyFunctionToServiceInstances @ 0x14084A26C (PipApplyFunctionToServiceInstances.c)
 *     IoRegisterDeviceInterface @ 0x140867290 (IoRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086DD78 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpDisableDeviceInterfaces @ 0x140883160 (PnpDisableDeviceInterfaces.c)
 *     PnpGetDeviceDependencyList @ 0x140954A18 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x140956504 (PnpDeleteDeviceInterfaces.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140B3D92C (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140B405B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PnpUnicodeStringToWstrFree(void *a1, __int64 a2)
{
  void *v2; // rax

  if ( a1 )
  {
    if ( a2 )
    {
      if ( *(_WORD *)(a2 + 2) )
      {
        v2 = *(void **)(a2 + 8);
        if ( v2 )
        {
          if ( v2 != a1 )
            ExFreePoolWithTag(a1, 0);
        }
      }
    }
  }
}
