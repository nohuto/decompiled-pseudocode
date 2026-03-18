/*
 * XREFs of _anonymous_namespace_::RemoveForegroundActivate @ 0x1C005E09C
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C005D604 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C005E3E8 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x1C00AE86C (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     ?OnFirstActivationAttempted@ForegroundLaunch@@YAXXZ @ 0x1C005D334 (-OnFirstActivationAttempted@ForegroundLaunch@@YAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_DsDs @ 0x1C005E2C8 (WPP_RECORDER_AND_TRACE_SF_DsDs.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char anonymous_namespace_::RemoveForegroundActivate()
{
  _UNKNOWN **v0; // r8
  char v1; // si
  __int64 v2; // rdi
  char v3; // bp
  bool v4; // r15
  int v5; // ebx
  char ThreadId; // al
  const char *v7; // rdx
  const char *v8; // r10
  const char *v9; // r9
  int v10; // r8d
  char v11; // dl
  ForegroundLaunch *v13; // rcx
  char v14; // dl
  int v15; // [rsp+20h] [rbp-68h]
  int v16; // [rsp+28h] [rbp-60h]
  int v17; // [rsp+30h] [rbp-58h]
  int v18; // [rsp+38h] [rbp-50h]

  v0 = &WPP_RECORDER_INITIALIZED;
  v1 = 1;
  v2 = *(_QWORD *)(gptiCurrent + 424LL);
  if ( (*(_DWORD *)(v2 + 12) & 0x40) != 0 )
  {
    v13 = (ForegroundLaunch *)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v14 = 0;
    }
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v0) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_D(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        (_DWORD)v0,
        (_DWORD)gFullLog,
        4,
        2,
        10,
        (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
        *(_DWORD *)(v2 + 56));
    }
    ForegroundLaunch::OnFirstActivationAttempted(v13);
    if ( (*(_DWORD *)(v2 + 12) & 0x40) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 54LL);
    v0 = &WPP_RECORDER_INITIALIZED;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v3 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v3 = 0;
  }
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(_DWORD *)(gptiCurrent + 488LL);
    ThreadId = (unsigned __int8)PsGetThreadId((PETHREAD)*gptiCurrent);
    v7 = "No";
    v8 = "Yes";
    v9 = "Yes";
    LOBYTE(v10) = v4;
    if ( (v5 & 0x20) == 0 )
      v9 = "No";
    if ( (*(_DWORD *)(v2 + 12) & 0x100) == 0 )
      v8 = "No";
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_DsDs(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v7,
      v10,
      (_DWORD)gFullLog,
      v15,
      v16,
      v17,
      v18,
      *(_DWORD *)(v2 + 56),
      (__int64)v8,
      ThreadId,
      (__int64)v9);
    v0 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (*(_DWORD *)(v2 + 12) & 0x100) == 0 && (*(_BYTE *)(gptiCurrent + 488LL) & 0x20) == 0 )
    return 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (v11 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    v11 = 0;
  }
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      (_DWORD)v0,
      (unsigned int)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      4,
      2,
      12,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
  }
  *(_DWORD *)(gptiCurrent + 488LL) &= ~0x20u;
  *(_DWORD *)(v2 + 12) &= ~0x100u;
  return v1;
}
