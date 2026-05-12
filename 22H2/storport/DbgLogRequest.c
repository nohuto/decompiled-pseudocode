/*
 * XREFs of DbgLogRequest @ 0x1C0002BF8
 * Callers:
 *     StorPortPauseDevice @ 0x1C0002950 (StorPortPauseDevice.c)
 *     RaidPauseUnitQueue @ 0x1C0002ABC (RaidPauseUnitQueue.c)
 *     RaidResumeUnitQueue @ 0x1C0002B50 (RaidResumeUnitQueue.c)
 *     StorPortResumeDevice @ 0x1C0002CE0 (StorPortResumeDevice.c)
 *     RaidUnitSubmitRequest @ 0x1C00099F0 (RaidUnitSubmitRequest.c)
 *     RaUnitScsiIrp @ 0x1C0009B50 (RaUnitScsiIrp.c)
 *     StorPortNotification @ 0x1C000E7B0 (StorPortNotification.c)
 *     RaidUnitPendingDpcRoutine @ 0x1C0011130 (RaidUnitPendingDpcRoutine.c)
 *     RaidResumeAdapterQueue @ 0x1C0014194 (RaidResumeAdapterQueue.c)
 *     RaidPauseAdapterQueue @ 0x1C00143DC (RaidPauseAdapterQueue.c)
 *     RaidStallDeviceQueue @ 0x1C001577C (RaidStallDeviceQueue.c)
 *     RaidAdapterResetBus @ 0x1C002E2C0 (RaidAdapterResetBus.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1C0032DC8 (RaidResumeAndRestartAdapterQueues.c)
 *     StorPortBusy @ 0x1C0038DC0 (StorPortBusy.c)
 *     StorPortCompleteRequest @ 0x1C0038EE0 (StorPortCompleteRequest.c)
 *     StorPortDeviceBusy @ 0x1C0039160 (StorPortDeviceBusy.c)
 *     StorPortDeviceReady @ 0x1C00392E0 (StorPortDeviceReady.c)
 *     StorPortPause @ 0x1C0039A00 (StorPortPause.c)
 *     StorPortReady @ 0x1C0039CD0 (StorPortReady.c)
 *     StorPortResume @ 0x1C003A080 (StorPortResume.c)
 *     StorpMarkDeviceFailed @ 0x1C003C898 (StorpMarkDeviceFailed.c)
 *     RaidCompleteMiniportRequestCallback @ 0x1C0044DE4 (RaidCompleteMiniportRequestCallback.c)
 *     RaidLogRequestComplete @ 0x1C0049E8C (RaidLogRequestComplete.c)
 *     RaidResumeAndRestartUnitQueue @ 0x1C004A104 (RaidResumeAndRestartUnitQueue.c)
 *     RaidUnitSubmitResetRequest @ 0x1C004BF64 (RaidUnitSubmitResetRequest.c)
 * Callees:
 *     <none>
 */

void __fastcall DbgLogRequest(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // rax
  __int64 v8; // rcx

  if ( a1 && *(_DWORD *)(a1 + 5060) && *(_QWORD *)(a1 + 5064) )
  {
    v7 = a7;
    v8 = *(_QWORD *)(a1 + 5064)
       + 48LL * ((unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 5056)) % *(_DWORD *)(a1 + 5060));
    *(_DWORD *)v8 = a2;
    if ( !a7 )
      v7 = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v8 + 40) = v7;
    *(_QWORD *)(v8 + 24) = a5;
    *(_QWORD *)(v8 + 32) = a6;
    *(_QWORD *)(v8 + 8) = a3;
    *(_QWORD *)(v8 + 16) = a4;
  }
}
