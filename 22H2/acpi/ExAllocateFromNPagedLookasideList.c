/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1C001C8A4
 * Callers:
 *     ACPIBuildDeviceRequest @ 0x1C001B46C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x1C001BA9C (ACPIBuildDeviceExtension.c)
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C001C75C (ACPIBuildSpecialSynchronizationRequest.c)
 *     NewContext @ 0x1C0023FE8 (NewContext.c)
 *     ACPIDispatchAddDevice @ 0x1C0025260 (ACPIDispatchAddDevice.c)
 *     ACPIBuildRunMethodRequest @ 0x1C0025AF4 (ACPIBuildRunMethodRequest.c)
 *     ACPIDeviceDiscoverDependencies @ 0x1C0029674 (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x1C002971C (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIBuildSynchronizationRequestInternal @ 0x1C002C8F0 (ACPIBuildSynchronizationRequestInternal.c)
 *     ACPIBuildPowerResourceRequest @ 0x1C002DF88 (ACPIBuildPowerResourceRequest.c)
 *     DispatchNotification @ 0x1C002EF54 (DispatchNotification.c)
 *     ACPIWakeEnableDisableAsync @ 0x1C002F564 (ACPIWakeEnableDisableAsync.c)
 *     ACPIBuildThermalZoneRequest @ 0x1C002F9E0 (ACPIBuildThermalZoneRequest.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0030590 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIAssociateWakeInterrupt @ 0x1C00611B8 (ACPIAssociateWakeInterrupt.c)
 *     ACPIWakeDisableAsync @ 0x1C00619AC (ACPIWakeDisableAsync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = ExpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
