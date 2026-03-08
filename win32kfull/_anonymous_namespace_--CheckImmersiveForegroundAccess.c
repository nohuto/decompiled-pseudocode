/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C0022FA8
 * Callers:
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x1C00113B0 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0022378 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0023718 (_anonymous_namespace_--CanSetForegroundWindow.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C0039CB0 (IsNonImmersiveBand.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C003E064 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C003F908 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C009B8A4 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     PtiKbdFromQ @ 0x1C009FA48 (PtiKbdFromQ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
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
  int v19; // edx
  unsigned int v20; // r14d
  __int64 v21; // rcx
  __int64 v22; // rcx
  unsigned int v23; // ebx
  unsigned int *v24; // rax
  PDEVICE_OBJECT v25; // rcx
  int v26; // edx
  __int64 v27; // rcx
  __int16 v29; // [rsp+30h] [rbp-48h]

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v6 = (_DWORD *)CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v6 = (_DWORD *)(-(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process);
  v9 = (unsigned int)IsDesktopApp(v6, v5) != 0;
  if ( (v6[203] & 0x100) == 0 )
  {
    v10 = 1;
    if ( v6[217] )
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
        v15 = v6[217];
        v16 = *(_QWORD *)(v14 + 424);
        v17 = *(_DWORD *)(v16 + 868);
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
            {
              v19 = 17;
              LOBYTE(v19) = v10;
              LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_DD(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                v8,
                (_DWORD)gFullLog,
                4,
                2,
                17,
                (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
                v6[14],
                *(_DWORD *)(v16 + 56));
            }
            return 0;
          }
        }
      }
      if ( (a2 & 2) != 0 )
      {
        if ( (unsigned int)IsImmersiveAppRestricted(v6) )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1195LL);
LABEL_42:
        if ( gpqForeground )
        {
          v27 = *(_QWORD *)(gpqForeground + 128LL);
          if ( v27 )
          {
            if ( !(unsigned int)IsNonImmersiveBand(v27, v7, v8) )
            {
              v25 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
                || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
              {
                v10 = 0;
              }
              LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return 0;
              v26 = 19;
LABEL_52:
              v29 = v26;
              LOBYTE(v26) = v10;
              WPP_RECORDER_AND_TRACE_SF_D(
                v25->AttachedDevice,
                v26,
                v8,
                (_DWORD)gFullLog,
                4,
                2,
                v29,
                (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
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
            20,
            4,
            2,
            20,
            (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
        }
        return 1;
      }
      if ( gpqForeground )
      {
        v20 = v6[217];
        v8 = *(_QWORD *)(PtiKbdFromQ(gpqForeground) + 424);
        if ( *(_DWORD *)(v8 + 868) != v20 )
        {
          v22 = *(_QWORD *)(PtiKbdFromQ(v21) + 424);
          v23 = *(_DWORD *)(v22 + 868);
          v24 = (unsigned int *)SGDGetUserSessionState(v22);
          if ( !(unsigned __int8)SeIsParentOfChildAppContainer(*v24, v20, v23) )
          {
            v25 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v10 = 0;
            }
            LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( !v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return 0;
            v26 = 18;
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
      16,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
      v6[14]);
  }
  return 1;
}
