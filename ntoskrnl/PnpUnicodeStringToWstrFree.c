/*
 * XREFs of PnpUnicodeStringToWstrFree @ 0x1406D08F4
 * Callers:
 *     PiDeviceRegistration @ 0x140680FE4 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x140681190 (PpForEachDeviceInstanceDriver.c)
 *     IopProcessSetInterfaceState @ 0x140683354 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x14068383C (IopBuildGlobalSymbolicLinkString.c)
 *     IopGetDeviceInterfaces @ 0x1406C4A94 (IopGetDeviceInterfaces.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406CF7A0 (PiControlGetDeviceInterfaceEnabled.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1406F6F58 (IopDeviceObjectFromSymbolicName.c)
 *     PnpIsDeviceInstanceEnabled @ 0x14078A304 (PnpIsDeviceInstanceEnabled.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14078A47C (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PnpGetDeviceInterfacePropertyData @ 0x14078D104 (PnpGetDeviceInterfacePropertyData.c)
 *     IoGetDeviceInterfaceAlias @ 0x14078E260 (IoGetDeviceInterfaceAlias.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IoOpenDeviceInterfaceRegistryKey @ 0x1408478E0 (IoOpenDeviceInterfaceRegistryKey.c)
 *     PipApplyFunctionToServiceInstances @ 0x140847BFC (PipApplyFunctionToServiceInstances.c)
 *     IoRegisterDeviceInterface @ 0x14086A510 (IoRegisterDeviceInterface.c)
 *     PnpSetDeviceInterfacePropertyData @ 0x14086B858 (PnpSetDeviceInterfacePropertyData.c)
 *     PnpDisableDeviceInterfaces @ 0x14087E3BC (PnpDisableDeviceInterfaces.c)
 *     PnpGetDeviceDependencyList @ 0x1409519F8 (PnpGetDeviceDependencyList.c)
 *     PnpDeleteDeviceInterfaces @ 0x1409534E4 (PnpDeleteDeviceInterfaces.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     PipInitComputerIds @ 0x140B552F0 (PipInitComputerIds.c)
 *     IopInitializeBootDrivers @ 0x140B57F78 (IopInitializeBootDrivers.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
