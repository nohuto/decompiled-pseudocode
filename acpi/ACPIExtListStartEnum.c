/*
 * XREFs of ACPIExtListStartEnum @ 0x1C00264F8
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
