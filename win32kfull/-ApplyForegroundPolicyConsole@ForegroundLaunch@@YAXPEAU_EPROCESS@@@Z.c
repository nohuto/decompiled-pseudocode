// write access to const memory has been detected, the output may be wrong!
void __fastcall ForegroundLaunch::ApplyForegroundPolicyConsole(ForegroundLaunch *this, struct _EPROCESS *a2)
{
  __int64 ProcessWin32Process; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  char v6; // si
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // edx
  int v11; // r8d
  char v12; // bl
  bool v13; // bp
  __int64 v14; // rax
  int v15; // edx
  int v16; // r8d
  char v17; // bl
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-68h]
  int v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+38h] [rbp-50h]

  ProcessWin32Process = PsGetProcessWin32Process(this);
  v5 = ProcessWin32Process;
  if ( ProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)ProcessWin32Process != 0LL) & ProcessWin32Process;
  v6 = 1;
  if ( (*(_DWORD *)(v5 + 12) & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 772LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v9 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v8 = -*(_QWORD *)CurrentProcessWin32Process;
    v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  if ( (*(_DWORD *)(v5 + 12) & 0x100) != 0 || anonymous_namespace_::CheckAllowForeground((__int64)this) )
  {
    if ( (*(_DWORD *)(v9 + 12) & 0x40) == 0 )
      anonymous_namespace_::AppStarting_Set(v9);
    Feature_StrictParentBasedAllowForegroundActivate__private_ReportDeviceUsage(v8);
    *(_DWORD *)(v5 + 12) |= 0x100u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v12 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v12 = 0;
    }
    v13 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = PsGetProcessWin32Process(this);
      if ( v14 )
        v14 &= -(__int64)(*(_QWORD *)v14 != 0LL);
      LOBYTE(v16) = v13;
      LOBYTE(v15) = v12;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (_DWORD)gFullLog,
        4,
        2,
        33,
        (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
        *(_DWORD *)(v14 + 56));
    }
    gdwPUDFlags |= 0x8000000u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        4,
        2,
        34,
        (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids);
    }
    *(_DWORD *)(v9 + 12) |= 0x100u;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v10) = 0;
    }
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        (_DWORD)gFullLog,
        4,
        2,
        35,
        (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
        *(_DWORD *)(v9 + 56));
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v6 = 0;
  }
  v17 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    PsGetProcessWin32Process(this);
    v18 = "set";
    if ( (*(_DWORD *)(v9 + 12) & 0x100) == 0 )
      v18 = "NOT set";
    WPP_RECORDER_AND_TRACE_SF_sDD(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v17,
      (__int64)gFullLog,
      v19,
      v20,
      v21,
      v22,
      v18);
  }
}
