/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C00FD3FC
 * Callers:
 *     RawInputThread @ 0x1C005CC60 (RawInputThread.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C00FD4D4 (ResetPointerDevices.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall PrepareForMasterInputThreadTakingOver(struct LegacyInputDispatcher *a1)
{
  __int64 v2; // rcx

  EnterCrit(1LL, 0LL);
  SetThreadPriority();
  if ( gptiManipulationThread )
    SetThreadBasePriority(*gptiManipulationThread, 16LL);
  ResetPointerDevices();
  gbPendRecreateTouchInjectionDevices = 1;
  CleanupSensorExplicitly(2LL);
  EtwTraceRitDisEngaged();
  ZwSetEvent(ghDITRITEvent, 0LL);
  LegacyInputDispatcher::PurgeInputDispatcherObjects(a1);
  CBaseInput::RegisterDispatcherObject(gpKeyboardSensor, a1);
  gbMIT = 1;
  UserSessionSwitchLeaveCrit(v2);
}
