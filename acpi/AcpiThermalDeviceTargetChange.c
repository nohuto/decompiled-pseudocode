/*
 * XREFs of AcpiThermalDeviceTargetChange @ 0x1C0042620
 * Callers:
 *     <none>
 * Callees:
 *     ACPIThermalStopZone @ 0x1C0041F54 (ACPIThermalStopZone.c)
 */

__int64 __fastcall AcpiThermalDeviceTargetChange(char *NotificationStructure, __int64 Context)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v2 )
    ACPIThermalStopZone(Context);
  return 0LL;
}
