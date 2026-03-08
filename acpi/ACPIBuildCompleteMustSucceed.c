/*
 * XREFs of ACPIBuildCompleteMustSucceed @ 0x1C000BCB0
 * Callers:
 *     ACPIBuildProcessDeviceGenericEvalStrict @ 0x1C000E8D0 (ACPIBuildProcessDeviceGenericEvalStrict.c)
 *     ACPIBuildProcessDevicePhaseAdr @ 0x1C000EA70 (ACPIBuildProcessDevicePhaseAdr.c)
 *     ACPIBuildProcessDevicePhaseCid @ 0x1C000ED30 (ACPIBuildProcessDevicePhaseCid.c)
 *     ACPIBuildProcessDevicePhaseCls @ 0x1C000EF00 (ACPIBuildProcessDevicePhaseCls.c)
 *     ACPIBuildProcessDevicePhaseDep @ 0x1C000F130 (ACPIBuildProcessDevicePhaseDep.c)
 *     ACPIBuildProcessDevicePhaseHid @ 0x1C000F4D0 (ACPIBuildProcessDevicePhaseHid.c)
 *     ACPIBuildProcessDevicePhaseHrv @ 0x1C000F6A0 (ACPIBuildProcessDevicePhaseHrv.c)
 *     ACPIBuildProcessDevicePhasePr3 @ 0x1C000F930 (ACPIBuildProcessDevicePhasePr3.c)
 *     ACPIBuildProcessDevicePhasePrr @ 0x1C000FB40 (ACPIBuildProcessDevicePhasePrr.c)
 *     ACPIBuildProcessDevicePhasePrw @ 0x1C000FDA0 (ACPIBuildProcessDevicePhasePrw.c)
 *     ACPIBuildProcessDevicePhasePrx @ 0x1C0010300 (ACPIBuildProcessDevicePhasePrx.c)
 *     ACPIBuildProcessDevicePhaseSta @ 0x1C0010780 (ACPIBuildProcessDevicePhaseSta.c)
 *     ACPIBuildProcessDevicePhaseSub @ 0x1C0010890 (ACPIBuildProcessDevicePhaseSub.c)
 *     ACPIBuildProcessDevicePhaseUid @ 0x1C00109B0 (ACPIBuildProcessDevicePhaseUid.c)
 *     ACPIBuildProcessDevicePhaseUidOrHid @ 0x1C0010B20 (ACPIBuildProcessDevicePhaseUidOrHid.c)
 *     ACPIBuildProcessPowerResourcePhaseDep @ 0x1C0010EE0 (ACPIBuildProcessPowerResourcePhaseDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckBridge @ 0x1C0011430 (ACPIBuildProcessRunMethodPhaseCheckBridge.c)
 *     ACPIBuildProcessRunMethodPhaseCheckDep @ 0x1C0011540 (ACPIBuildProcessRunMethodPhaseCheckDep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C00116D0 (ACPIBuildProcessRunMethodPhaseCheckPep.c)
 *     ACPIBuildProcessRunMethodPhaseCheckSta @ 0x1C0011880 (ACPIBuildProcessRunMethodPhaseCheckSta.c)
 *     ACPIBuildProcessRunMethodPhasePostProcessResult @ 0x1C0011B70 (ACPIBuildProcessRunMethodPhasePostProcessResult.c)
 *     ACPIBuildProcessRunMethodPhaseRecurse @ 0x1C0011C70 (ACPIBuildProcessRunMethodPhaseRecurse.c)
 *     ACPIBuildProcessRunMethodPhaseRunMethod @ 0x1C0011DE0 (ACPIBuildProcessRunMethodPhaseRunMethod.c)
 *     ACPIBuildProcessThermalZoneCheckType @ 0x1C00124A0 (ACPIBuildProcessThermalZoneCheckType.c)
 *     ACPIBuildProcessThermalZoneDep @ 0x1C0012930 (ACPIBuildProcessThermalZoneDep.c)
 *     ACPIBuildProcessThermalZonePep @ 0x1C0012CA0 (ACPIBuildProcessThermalZonePep.c)
 *     ACPIBuildProcessThermalZoneUid @ 0x1C0012E40 (ACPIBuildProcessThermalZoneUid.c)
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000BC30 (ACPIBuildCompleteCommon.c)
 */

void __fastcall ACPIBuildCompleteMustSucceed(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, __int64 a4)
{
  signed __int32 v4; // r8d
  signed __int32 v5; // edx
  unsigned int v6; // eax

  v4 = *(_DWORD *)(a4 + 32);
  if ( a2 == -1073741738 )
  {
    *(_DWORD *)(a4 + 48) = -1073741738;
    v5 = 2;
  }
  else
  {
    v6 = 0;
    if ( a2 < 0 )
    {
      *(_DWORD *)(a4 + 48) = a2;
      if ( BugCheckParameter2 )
        v6 = *(_DWORD *)(*(_QWORD *)BugCheckParameter2 + 40LL);
      KeBugCheckEx(0xA5u, 3uLL, BugCheckParameter2, a2, v6);
    }
    *(_DWORD *)(a4 + 32) = 2;
    v5 = v4;
  }
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a4 + 24), v5);
}
