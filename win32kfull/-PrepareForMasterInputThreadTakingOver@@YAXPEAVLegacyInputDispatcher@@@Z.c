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
