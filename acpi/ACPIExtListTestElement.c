/*
 * XREFs of ACPIExtListTestElement @ 0x1C0026554
 * Callers:
 *     ACPIDockFindCorrespondingDock @ 0x1C0009314 (ACPIDockFindCorrespondingDock.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C0011C70 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C0013960 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDetectDockDevices @ 0x1C0019FD0 (ACPIDetectDockDevices.c)
 *     ACPIDetectDuplicateHID @ 0x1C001A3CC (ACPIDetectDuplicateHID.c)
 *     ACPIDetectEjectDevices @ 0x1C001A6C0 (ACPIDetectEjectDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C0028FE8 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIGpeBuildWakeMasks @ 0x1C002BFE0 (ACPIGpeBuildWakeMasks.c)
 *     ACPIInitDeleteChildDeviceList @ 0x1C002CC88 (ACPIInitDeleteChildDeviceList.c)
 *     ACPIInternalFindDeviceExtensionNoLock @ 0x1C002E754 (ACPIInternalFindDeviceExtensionNoLock.c)
 *     EnableDisableDeviceTreeRegionSpace @ 0x1C00399A0 (EnableDisableDeviceTreeRegionSpace.c)
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x1C003DAE0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 * Callees:
 *     ACPIInitReferenceDeviceExtension @ 0x1C002D594 (ACPIInitReferenceDeviceExtension.c)
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
