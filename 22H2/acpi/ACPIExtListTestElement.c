/*
 * XREFs of ACPIExtListTestElement @ 0x1C0026574
 * Callers:
 *     ACPIDockFindCorrespondingDock @ 0x1C0009314 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C0011C70 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0013960 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectDockDevices @ 0x1C0019FF0 (ACPIDetectDockDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C001A3EC (ACPIDetectDuplicateHID.c)
 *     ACPIDetectEjectDevices @ 0x1C001A6E0 (ACPIDetectEjectDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0029008 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C002C000 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002CCA8 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C002E774 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C00399C0 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C003DB00 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D5B4 (ACPIInitReferenceDeviceExtension.c)
 */

char __fastcall ACPIExtListTestElement(__int64 a1, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r9

  v3 = *(_QWORD *)(a1 + 32);
  if ( v3 + *(_QWORD *)(a1 + 40) == *(_QWORD *)a1 || !a2 )
  {
    if ( *(_DWORD *)(a1 + 48) )
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), *(_BYTE *)(a1 + 24));
    return 0;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 48) == 1 )
    {
      ACPIInitReferenceDeviceExtension(v3);
      KeReleaseSpinLock(*(PKSPIN_LOCK *)(v4 + 16), *(_BYTE *)(v4 + 24));
    }
    return 1;
  }
}
