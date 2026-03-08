/*
 * XREFs of PnpDeviceObjectToDeviceInstance @ 0x140685094
 * Callers:
 *     PiQueryRemovableDeviceOverride @ 0x140680570 (PiQueryRemovableDeviceOverride.c)
 *     PiCreateDriverSwDevices @ 0x140681C40 (PiCreateDriverSwDevices.c)
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PiUpdateDevicePanel @ 0x140683D74 (PiUpdateDevicePanel.c)
 *     PnpSaveDeviceCapabilities @ 0x140684D74 (PnpSaveDeviceCapabilities.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PiGetDeviceRegistryProperty @ 0x140951DA8 (PiGetDeviceRegistryProperty.c)
 *     PipDmgSetIommuDomainPolicyAndNotifyHal @ 0x140968954 (PipDmgSetIommuDomainPolicyAndNotifyHal.c)
 * Callees:
 *     _CmOpenDeviceRegKey @ 0x1406D3B3C (_CmOpenDeviceRegKey.c)
 */

__int64 __fastcall PnpDeviceObjectToDeviceInstance(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( v4 && *(_QWORD *)(v4 + 48) )
    return CmOpenDeviceRegKey(PiPnpRtlCtx, a3, 0, a2, 0LL);
  else
    return 3221225488LL;
}
