/*
 * XREFs of PopFxAddLogEntry @ 0x140312914
 * Callers:
 *     PopDiagTraceFxDevicePowerState @ 0x14028DBA4 (PopDiagTraceFxDevicePowerState.c)
 *     PopDiagTraceIrpFinish @ 0x14028E3F4 (PopDiagTraceIrpFinish.c)
 *     PopDiagTraceIrpStart @ 0x14028EA80 (PopDiagTraceIrpStart.c)
 *     PopFxAllocatePowerIrp @ 0x14028ED0C (PopFxAllocatePowerIrp.c)
 *     PopFxCompleteDevicePowerRequired @ 0x140310900 (PopFxCompleteDevicePowerRequired.c)
 *     PopDiagTraceFxDevicePowered @ 0x140310990 (PopDiagTraceFxDevicePowered.c)
 *     PopFxProcessWork @ 0x140312454 (PopFxProcessWork.c)
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140312870 (PopDiagTraceFxDevicePowerRequirement.c)
 *     PopFxIdleWorker @ 0x1403129BC (PopFxIdleWorker.c)
 *     PoFxCompleteIdleCondition @ 0x140356D00 (PoFxCompleteIdleCondition.c)
 *     PoFxSetComponentLatency @ 0x14035AE70 (PoFxSetComponentLatency.c)
 *     PoFxCompleteIdleState @ 0x14035BD70 (PoFxCompleteIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x14035C05C (PopDiagTraceFxComponentIdleState.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14036AC84 (PopFxUpdateDeviceIdleTimer.c)
 *     PopFxIdleTimeoutDpcRoutine @ 0x14036B940 (PopFxIdleTimeoutDpcRoutine.c)
 *     PoFxCompleteDevicePowerNotRequired @ 0x14036E150 (PoFxCompleteDevicePowerNotRequired.c)
 *     PoFxSetComponentResidency @ 0x1403B3620 (PoFxSetComponentResidency.c)
 *     PopPluginNotifyIdleState @ 0x14046276E (PopPluginNotifyIdleState.c)
 *     PopFxCompleteComponentPerfState @ 0x140589628 (PopFxCompleteComponentPerfState.c)
 *     PopFxCompleteDirectedPowerTransition @ 0x14058972C (PopFxCompleteDirectedPowerTransition.c)
 *     PopFxHandleDirectedPowerTransition @ 0x14058A530 (PopFxHandleDirectedPowerTransition.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x14058AC48 (PopFxIssueComponentPerfStateChanges.c)
 *     PopDiagTraceFxComponentWake @ 0x1405930E8 (PopDiagTraceFxComponentWake.c)
 *     PopDiagTraceFxDeviceDirectedCompletion @ 0x14059354C (PopDiagTraceFxDeviceDirectedCompletion.c)
 *     PopDiagTraceFxDeviceDirectedTransition @ 0x140593650 (PopDiagTraceFxDeviceDirectedTransition.c)
 *     PopFxTraceDeviceRegistration @ 0x140838CD8 (PopFxTraceDeviceRegistration.c)
 *     PopDiagTraceFxDeviceStartPowerManagement @ 0x140838D84 (PopDiagTraceFxDeviceStartPowerManagement.c)
 *     PopDiagTraceFxDeviceUnregistration @ 0x14098F65C (PopDiagTraceFxDeviceUnregistration.c)
 *     PopFxTracePerfRegistration @ 0x140992470 (PopFxTracePerfRegistration.c)
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
