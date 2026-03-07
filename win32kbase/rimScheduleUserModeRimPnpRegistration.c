void __fastcall rimScheduleUserModeRimPnpRegistration(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 **v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *i; // rbx
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d

  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      53,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  v5 = SGDGetUserSessionState(v4, a2, a3, a4);
  RIMLockExclusive(v5 + 240);
  v12 = (__int64 **)(SGDGetUserSessionState(v7, v6, v8, v9) + 304);
  for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
  {
    if ( !*((_BYTE *)i + 65) && !*((_BYTE *)i + 64) && *((_BYTE *)i + 376) )
    {
      if ( *((_DWORD *)i + 260) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1769LL);
      if ( (*((_DWORD *)i + 17) & 0x20) == 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1770LL);
      ZwSetEvent((HANDLE)i[41], 0LL);
    }
  }
  v16 = SGDGetUserSessionState(v11, v10, v13, v14);
  *(_QWORD *)(v16 + 248) = 0LL;
  ExReleasePushLockExclusiveEx(v16 + 240, 0LL);
  KeLeaveCriticalRegion();
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v17) = 0;
  }
  if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v17,
      v18,
      (_DWORD)gRimLog,
      4,
      1,
      54,
      (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
  }
}
