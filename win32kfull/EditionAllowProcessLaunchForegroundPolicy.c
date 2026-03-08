/*
 * XREFs of EditionAllowProcessLaunchForegroundPolicy @ 0x1C0016760
 * Callers:
 *     <none>
 * Callees:
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C003D388 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C00E45E8 (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall EditionAllowProcessLaunchForegroundPolicy(int a1)
{
  __int64 v2; // r8
  int v3; // r9d
  int v4; // edx
  int v5; // r8d
  char v6; // bl
  bool v8; // bl
  int v9; // edx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // r9
  int v15; // r9d
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  CAutoPushLockSh::CAutoPushLockSh((CAutoPushLockSh *)&v16, (struct _EX_PUSH_LOCK *)&unk_1C0362418);
  if ( byte_1C035C164 )
  {
    ExReleasePushLockSharedEx(v16, 0LL, v2);
    KeLeaveCriticalRegion();
    v6 = 1;
    if ( a1 == 1 )
      return 1LL;
    if ( a1 == 2 )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v4) = 0;
      }
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1LL;
      v12 = 38;
      goto LABEL_34;
    }
    if ( a1 != 3 )
    {
      LODWORD(v16) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 882LL);
    }
    v13 = PtiCurrentShared();
    if ( (unsigned int)IAMThreadAccessGranted(v13) )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v4) = 0;
      }
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1LL;
      v12 = 39;
      goto LABEL_34;
    }
    if ( CanForceForeground(*(const struct tagPROCESSINFO **)(v14 + 424)) )
    {
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v4) = 0;
      }
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v4 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return 1LL;
      v12 = 40;
LABEL_34:
      WPP_RECORDER_AND_TRACE_SF_(
        v11->AttachedDevice,
        v4,
        v5,
        v12,
        4,
        2,
        v12,
        (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids);
      return 1LL;
    }
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = 41;
      LOBYTE(v10) = v6;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v5,
        v15,
        3,
        2,
        41,
        (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids);
    }
  }
  else
  {
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 37;
      LOBYTE(v9) = v8;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v2,
        v3,
        3,
        2,
        37,
        (__int64)&WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids);
    }
    ExReleasePushLockSharedEx(v16, 0LL, v2);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
