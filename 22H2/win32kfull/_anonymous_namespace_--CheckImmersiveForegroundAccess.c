/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C005FEFC
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C005D604 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00B6D14 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C004C704 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     PtiKbdFromQ @ 0x1C0060CFC (PtiKbdFromQ.c)
 *     IsNonImmersiveBand @ 0x1C00CEFB4 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

char __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, unsigned int a2)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  bool v9; // r12
  char v10; // di
  __int64 v11; // rcx
  char v12; // al
  char v13; // bl
  __int64 v14; // rax
  unsigned int v15; // r14d
  __int64 v16; // r13
  unsigned int v17; // r15d
  unsigned int *v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  unsigned int *v23; // rax
  PDEVICE_OBJECT v24; // rcx
  int v25; // edx
  __int64 v26; // rcx
  __int16 v28; // [rsp+30h] [rbp-48h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = (_DWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = (_DWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v9 = (unsigned int)IsDesktopApp(v6, v5) != 0;
  if ( (v6[204] & 0x100) == 0 )
  {
    v10 = 1;
    if ( v6[223] )
    {
      if ( (unsigned int)IsImmersiveAppRestricted(v6) )
      {
        v11 = a2;
        v12 = a2 | 1;
        v13 = a2 & 0xFE;
        if ( (v11 & 8) != 0 )
          v13 = v12;
        if ( (v13 & 0x10) != 0 )
          LOBYTE(a2) = v13 | 2;
        else
          LOBYTE(a2) = v13 & 0xFD;
      }
      if ( (a2 & 1) == 0 )
      {
        v14 = *(_QWORD *)(a1 + 16);
        v15 = v6[223];
        v16 = *(_QWORD *)(v14 + 424);
        v17 = *(_DWORD *)(v16 + 892);
        if ( v15 != v17 )
        {
          v18 = (unsigned int *)SGDGetUserSessionState(v11);
          if ( !(unsigned __int8)SeIsParentOfChildAppContainer(*v18, v15, v17) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v10 = 0;
            }
            if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_DD(
                (__int64)WPP_GLOBAL_Control->AttachedDevice,
                v10,
                WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
                (__int64)gFullLog,
                4u,
                2u,
                0x12u,
                (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
                v6[14],
                *(_DWORD *)(v16 + 56));
            return 0;
          }
        }
      }
      if ( (a2 & 2) != 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v6) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1193LL);
LABEL_42:
        if ( gpqForeground )
        {
          v26 = *(_QWORD *)(gpqForeground + 128LL);
          if ( v26 )
          {
            if ( !(unsigned int)IsNonImmersiveBand(v26, v7, v8) )
            {
              v24 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
              {
                v10 = 0;
              }
              LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return 0;
              v25 = 20;
LABEL_52:
              v28 = v25;
              LOBYTE(v25) = v10;
              WPP_RECORDER_AND_TRACE_SF_D(
                v24->AttachedDevice,
                v25,
                v8,
                (_DWORD)gFullLog,
                4,
                2,
                v28,
                (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
                v6[14]);
              return 0;
            }
          }
        }
LABEL_54:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v7) = 0;
        }
        if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v7,
            v8,
            21,
            4,
            2,
            21,
            (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        }
        return 1;
      }
      if ( gpqForeground )
      {
        v19 = v6[223];
        v8 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424);
        if ( *(_DWORD *)(v8 + 892) != v19 )
        {
          v21 = *(_QWORD *)(PtiKbdFromQ(v20) + 424);
          v22 = *(_DWORD *)(v21 + 892);
          v23 = (unsigned int *)SGDGetUserSessionState(v21);
          if ( !(unsigned __int8)SeIsParentOfChildAppContainer(*v23, v19, v22) )
          {
            v24 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v10 = 0;
            }
            LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0;
            v25 = 19;
            goto LABEL_52;
          }
        }
      }
    }
    if ( !v9 )
      goto LABEL_54;
    goto LABEL_42;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      v8,
      (_DWORD)gFullLog,
      4,
      2,
      17,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      v6[14]);
  }
  return 1;
}
