/*
 * XREFs of ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C0078E18
 * Callers:
 *     RawInputThread @ 0x1C007A0C0 (RawInputThread.c)
 * Callees:
 *     Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage @ 0x1C012D214 (Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage.c)
 *     EndPointerDeviceContacts @ 0x1C012E2F8 (EndPointerDeviceContacts.c)
 *     ResetPointerDevicesOld @ 0x1C012E3BC (ResetPointerDevicesOld.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall PrepareForMasterInputThreadTakingOver(struct LegacyInputDispatcher *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx

  EnterCrit(1LL, 0LL);
  SetThreadPriority();
  if ( gptiManipulationThread )
    SetThreadBasePriority(*gptiManipulationThread, 16LL);
  if ( (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage() )
    EndPointerDeviceContacts();
  ResetPointerDevicesOld();
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
  CleanupSensorExplicitly(2LL);
  EtwTraceRitDisEngaged();
  ZwSetEvent(WPP_MAIN_CB.Dpc.DeferredRoutine, 0LL);
  LegacyInputDispatcher::PurgeInputDispatcherObjects(a1);
  v3 = SGDGetUserSessionState(v2);
  CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v3 + 12672), a1);
  gbMIT = 1;
  UserSessionSwitchLeaveCrit(v4);
}
