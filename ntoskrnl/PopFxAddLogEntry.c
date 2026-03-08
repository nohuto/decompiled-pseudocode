/*
 * XREFs of PopFxAddLogEntry @ 0x140306584
 * Callers:
 *     PopDiagTraceFxDevicePowerState @ 0x1402B9DB4 (PopDiagTraceFxDevicePowerState.c)
 *     PopFxAllocatePowerIrp @ 0x1402BAC6C (PopFxAllocatePowerIrp.c)
 *     PopDiagTraceIrpStart @ 0x1402BB178 (PopDiagTraceIrpStart.c)
 *     PopDiagTraceIrpFinish @ 0x1402BB864 (PopDiagTraceIrpFinish.c)
 *     PoFxCompleteIdleCondition @ 0x1402EB270 (PoFxCompleteIdleCondition.c)
 *     PoFxSetComponentLatency @ 0x1402EE7E0 (PoFxSetComponentLatency.c)
 *     PoFxCompleteIdleState @ 0x1402EF9F0 (PoFxCompleteIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x1402EFCDC (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x1402FFBF4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x140300BB0 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x140302820 (PoFxCompleteDevicePowerNotRequired.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140304EE0 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x140304F70 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x1403060C4 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1403064E0 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x14030662C (PopFxIdleWorker.c)
 *     PoFxSetComponentResidency @ 0x1403AE930 (PoFxSetComponentResidency.c)
 *     PopFxAllocatePowerIrpLegacy @ 0x14040B520 (PopFxAllocatePowerIrpLegacy.c)
 *     PopPluginNotifyIdleState @ 0x14045A7CE (PopPluginNotifyIdleState.c)
 *     PopFxCompleteComponentPerfState @ 0x1405870F8 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x1405871FC (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x140588000 (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140588718 (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxComponentWake @ 0x140590BCC (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x140591030 (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140591134 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x140837C28 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140837CD4 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x14098C5AC (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x14098F3C0 (PopFxTracePerfRegistration.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall PopFxAddLogEntry(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v6; // r10
  __int64 v7; // r8
  __int64 v8; // rdx
  struct _KTHREAD *result; // rax

  if ( a1 )
  {
    v6 = *(_QWORD *)(a1 + 80);
    if ( v6 )
    {
      v7 = 3LL
         * ((unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 856), 1u) % *(_DWORD *)(v6 + 840));
      v8 = *(_QWORD *)(v6 + 848);
      *(_QWORD *)(v8 + 8 * v7) = MEMORY[0xFFFFF78000000008];
      *(_BYTE *)(v8 + 8 * v7 + 8) = a3;
      *(_BYTE *)(v8 + 8 * v7 + 9) = a2;
      *(_WORD *)(v8 + 8 * v7 + 10) = KeGetCurrentPrcb()->Number;
      *(_WORD *)(v8 + 8 * v7 + 12) = KeGetCurrentThread()[1].CycleTime;
      result = KeGetCurrentThread();
      *(_WORD *)(v8 + 8 * v7 + 14) = result[1].CurrentRunTime;
      *(_QWORD *)(v8 + 8 * v7 + 16) = a4;
    }
  }
  return result;
}
