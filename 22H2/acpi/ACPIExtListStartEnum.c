/*
 * XREFs of ACPIExtListStartEnum @ 0x1C0026518
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
 *     <none>
 */

char *__fastcall ACPIExtListStartEnum(__int64 a1)
{
  _QWORD **v2; // r9
  _QWORD **v3; // r8
  char *result; // rax

  if ( *(_DWORD *)(a1 + 48) )
    *(_BYTE *)(a1 + 24) = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
  v2 = *(_QWORD ***)a1;
  v3 = **(_QWORD ****)a1;
  result = (char *)v3 - *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = result;
  if ( v3 == v2 )
    result = 0LL;
  *(_QWORD *)(a1 + 8) = **v2;
  return result;
}
