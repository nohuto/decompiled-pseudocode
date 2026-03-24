/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C00098A0
 * Callers:
 *     RawInputThread @ 0x1C0009A50 (RawInputThread.c)
 * Callees:
 *     ResetPointerDevices @ 0x1C00294A8 (ResetPointerDevices.c)
 */

void __fastcall PrepareForMasterInputThreadTakingOver(struct LegacyInputDispatcher *a1)
{
  EnterCrit(0LL, 1LL);
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
  gbDIT = 1;
  UserSessionSwitchLeaveCrit();
}
