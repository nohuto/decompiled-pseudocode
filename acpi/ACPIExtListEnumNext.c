/*
 * XREFs of ACPIExtListEnumNext @ 0x1C00263F4
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
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C002D0C0 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

char *__fastcall ACPIExtListEnumNext(__int64 a1)
{
  __int64 v2; // r8
  _QWORD *v3; // rdx
  char *result; // rax
  KIRQL v5; // al
  __int64 v6; // rcx
  __int64 v7; // rdx
  _QWORD *v8; // rdi
  _QWORD *v9; // rcx
  char *v10; // rdi
  KIRQL v11; // al
  __int64 v12; // rcx

  if ( *(_DWORD *)(a1 + 48) == 1 )
  {
    v5 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v6 = *(_QWORD *)(a1 + 32);
    v7 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 24) = v5;
    v8 = *(_QWORD **)(v7 + v6);
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 == v8 )
    {
      v8 = *(_QWORD **)(a1 + 8);
      v9 = (_QWORD *)*v8;
    }
    v10 = (char *)v8 - v7;
    *(_QWORD *)(a1 + 8) = v9;
    KeReleaseSpinLock(*(PKSPIN_LOCK *)(a1 + 16), v5);
    ACPIInitDereferenceDeviceExtensionUnlocked(*(_QWORD *)(a1 + 32));
    v11 = KeAcquireSpinLockRaiseToDpc(*(PKSPIN_LOCK *)(a1 + 16));
    v12 = *(_QWORD *)(a1 + 40);
    *(_BYTE *)(a1 + 24) = v11;
    result = 0LL;
    *(_QWORD *)(a1 + 32) = v10;
    if ( &v10[v12] != *(char **)a1 )
      return v10;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 40);
    v3 = *(_QWORD **)(v2 + *(_QWORD *)(a1 + 32));
    if ( (_QWORD *)*v3 == v3 )
      v3 = *(_QWORD **)(a1 + 8);
    *(_QWORD *)(a1 + 32) = (char *)v3 - v2;
    *(_QWORD *)(a1 + 8) = *v3;
    result = 0LL;
    if ( v3 != *(_QWORD **)a1 )
      return (char *)v3 - v2;
  }
  return result;
}
