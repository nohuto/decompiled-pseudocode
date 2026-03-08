/*
 * XREFs of ACPIInternalDecrementIrpReferenceCount @ 0x1C002E528
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIDeviceIrpForwardRequest @ 0x1C00027E0 (ACPIDeviceIrpForwardRequest.c)
 *     ACPIDeviceIrpCompleteRequest @ 0x1C001D680 (ACPIDeviceIrpCompleteRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOffRequest @ 0x1C001D800 (ACPIDeviceIrpDelayedDeviceOffRequest.c)
 *     ACPIDeviceIrpDelayedDeviceOnRequest @ 0x1C001D940 (ACPIDeviceIrpDelayedDeviceOnRequest.c)
 *     ACPIDeviceIrpDeviceFilterRequest @ 0x1C001DA90 (ACPIDeviceIrpDeviceFilterRequest.c)
 *     ACPIDeferredWakeCompletion @ 0x1C0023E50 (ACPIDeferredWakeCompletion.c)
 *     ACPIFilterIrpDeviceUsageNotificationCompletion @ 0x1C00285C0 (ACPIFilterIrpDeviceUsageNotificationCompletion.c)
 *     ACPIFilterIrpStopDeviceCompletion @ 0x1C0028EF0 (ACPIFilterIrpStopDeviceCompletion.c)
 *     ACPIThermalActivateConstraint @ 0x1C003FC80 (ACPIThermalActivateConstraint.c)
 *     ACPIThermalGetSensorDevice @ 0x1C0040BB0 (ACPIThermalGetSensorDevice.c)
 *     ACPIIrpCompletionRoutineWorker @ 0x1C007BDE0 (ACPIIrpCompletionRoutineWorker.c)
 * Callees:
 *     <none>
 */

LONG __fastcall ACPIInternalDecrementIrpReferenceCount(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 728), 0xFFFFFFFF);
  if ( result == 1 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 752), 0, 0);
  return result;
}
