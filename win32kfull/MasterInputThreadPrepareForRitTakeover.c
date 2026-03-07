__int64 MasterInputThreadPrepareForRitTakeover()
{
  char v0; // bl
  char v1; // di
  __int64 v2; // rdx
  __int64 v3; // r8
  const char *v4; // rcx
  char v5; // al

  v0 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v1 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v0 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( PtiCurrentShared((__int64)WPP_GLOBAL_Control) == (struct tagTHREADINFO *)gptiRit )
    {
      v4 = "Rit";
    }
    else
    {
      v5 = IsInputThread(gptiRit, v2, v3);
      v4 = "Mit";
      if ( !v5 )
        v4 = (const char *)&unk_1C03206E9;
    }
    WPP_RECORDER_AND_TRACE_SF_s(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v0,
      v1,
      (__int64)gFullLog,
      4u,
      0x10u,
      0xAu,
      (__int64)&WPP_e32357e9c7193492c103df0418636a09_Traceguids,
      v4);
  }
  if ( (unsigned int)Feature_Servicing_PointerInputIncorrectlyWakingSystem__private_IsEnabledDeviceUsage() )
    EndPointerDeviceContacts();
  ResetPointerDevicesOld();
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1;
  CleanupSensorExplicitly(2LL);
  return EtwTraceDitDisEngaged();
}
