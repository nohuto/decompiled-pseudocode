/*
 * XREFs of DynamicLock_Release @ 0x1C000A958
 * Callers:
 *     Command_HandleCommandCompletionEvent @ 0x1C000A2B4 (Command_HandleCommandCompletionEvent.c)
 *     Command_SendCommand @ 0x1C000A820 (Command_SendCommand.c)
 *     Interrupter_ReleaseEventRingLock @ 0x1C000F4C4 (Interrupter_ReleaseEventRingLock.c)
 *     Controller_Start @ 0x1C0014F3C (Controller_Start.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x1C00182B0 (RootHub_ReleaseReadModifyWriteLock.c)
 *     Command_ControllerResetPostReset @ 0x1C002F8B4 (Command_ControllerResetPostReset.c)
 *     Command_ControllerResetPostResetSuccess @ 0x1C002FA7C (Command_ControllerResetPostResetSuccess.c)
 *     Command_FailAllCommands @ 0x1C002FB48 (Command_FailAllCommands.c)
 *     Command_HandleCommandRingStoppedEvent @ 0x1C002FD74 (Command_HandleCommandRingStoppedEvent.c)
 *     Command_WdfEvtWatchdogTimerFunction @ 0x1C0030270 (Command_WdfEvtWatchdogTimerFunction.c)
 *     Controller_AudioOffloadWnfStateUpdateWorker @ 0x1C0032650 (Controller_AudioOffloadWnfStateUpdateWorker.c)
 *     Controller_DecrementNumberOfEndpointsOffloaded @ 0x1C0032DE0 (Controller_DecrementNumberOfEndpointsOffloaded.c)
 *     Controller_DetectFrameMicroframeBoundary @ 0x1C0032EF4 (Controller_DetectFrameMicroframeBoundary.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x1C0033878 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     Controller_InternalReset @ 0x1C0033D04 (Controller_InternalReset.c)
 *     Controller_IsHandlePresentInCollection @ 0x1C0034130 (Controller_IsHandlePresentInCollection.c)
 *     Controller_StopTimeTrackingForHandle @ 0x1C0034904 (Controller_StopTimeTrackingForHandle.c)
 *     Controller_TimeSyncStartTrackingWorker @ 0x1C0035200 (Controller_TimeSyncStartTrackingWorker.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035B60 (Controller_UcxEvtStartTrackingForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020390 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_sds @ 0x1C0037A20 (WPP_RECORDER_SF_sds.c)
 */

__int64 __fastcall DynamicLock_Release(__int64 a1)
{
  int v3; // edx
  int v4; // r8d
  int v5; // r9d

  if ( *(_DWORD *)a1 != 1 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2536))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 8));
  if ( KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, v3, v4, v5);
    if ( !KdRefreshDebuggerNotPresent() )
      __debugbreak();
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01023 + 2512))(
           WdfDriverGlobals,
           *(_QWORD *)(a1 + 8));
}
