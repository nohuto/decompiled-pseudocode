void __fastcall ForegroundLaunch::OnFirstActivationAttempted(ForegroundLaunch *this)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v2; // rbx
  __int64 v3; // rbp
  __int64 v4; // r8
  __int64 v5; // rax
  _QWORD *v6; // rcx
  char v7; // di
  __int64 v8; // rsi
  int v9; // edx
  __int64 v10; // [rsp+A8h] [rbp+10h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(this);
  v2 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v2 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( (*(_DWORD *)(v2 + 12) & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 617LL);
  v3 = *(int *)(v2 + 56);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v10, (struct _EX_PUSH_LOCK *)&unk_1C0362418);
  v5 = 5LL;
  v6 = &unk_1C0361228;
  v7 = 1;
  while ( *v6 != v3 )
  {
    v5 = (unsigned int)(v5 + 1);
    v6 += 3;
    if ( (unsigned int)v5 >= 0xF )
      goto LABEL_8;
  }
  v8 = 3 * v5;
  if ( LODWORD(qword_1C03611B0[3 * v5 + 1]) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 632LL);
  if ( HIDWORD(qword_1C03611B0[v8 + 1]) == 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v7 = 0;
    }
    LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 28;
      LOBYTE(v9) = v7;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v4,
        (_DWORD)gFullLog,
        4,
        2,
        28,
        (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
        v3);
    }
    PsSetProcessPriorityByClass(*(_QWORD *)v2, 0LL, v4);
  }
  *(_OWORD *)&qword_1C03611B0[v8] = 0LL;
  qword_1C03611B0[v8 + 2] = 0LL;
LABEL_8:
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  anonymous_namespace_::AppStarting_Clear(v2);
}
