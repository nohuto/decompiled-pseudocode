/*
 * XREFs of ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C01067C8
 * Callers:
 *     NtUserAllowSetForegroundWindow @ 0x1C0106750 (NtUserAllowSetForegroundWindow.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00788F8 (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     LockProcessByClientId @ 0x1C007AC20 (LockProcessByClientId.c)
 *     CanForceForeground @ 0x1C007B000 (CanForceForeground.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C0106B40 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _AllowSetForegroundWindow(int a1, char a2)
{
  void *v3; // rbp
  PDEVICE_OBJECT v4; // rcx
  char v5; // bl
  bool v6; // dl
  __int64 CurrentProcessWin32Process; // rax
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // edi
  __int64 v11; // rsi
  int v12; // edx
  int v13; // r8d
  __int64 ProcessWin32Process; // rbp
  bool v15; // di
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  PVOID Object; // [rsp+90h] [rbp+18h] BYREF

  v3 = (void *)a1;
  v4 = WPP_GLOBAL_Control;
  v5 = 1;
  v6 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_DD(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      4,
      2,
      42,
      (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
      (char)v3,
      a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v10 = 2;
  v11 = CurrentProcessWin32Process;
  if ( (a2 & 1) != 0 || CanForceForeground(CurrentProcessWin32Process) )
  {
    if ( (_DWORD)v3 == -1 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = v5;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v8,
          v9,
          (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          4,
          2,
          44,
          (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
          v11);
      }
      CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      v10 = 0;
    }
    else
    {
      Object = 0LL;
      if ( (int)LockProcessByClientId(v3, (PEPROCESS *)&Object) >= 0
        && (ProcessWin32Process = PsGetProcessWin32Process(Object), ObfDereferenceObject(Object), ProcessWin32Process) )
      {
        LOBYTE(v12) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            2,
            46,
            (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
            v11,
            ProcessWin32Process);
        }
        v15 = 0;
        if ( (unsigned int)IsDesktopApp(v11) )
        {
          PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
          if ( !PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 53) == v11 )
            v15 = 1;
        }
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(ProcessWin32Process + 320), v15);
        v10 = 1;
      }
      else
      {
        v10 = 3;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 3u )
        {
          v5 = 0;
        }
        if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = v5;
          LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v12,
            v13,
            (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
            3,
            2,
            45,
            (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
        }
      }
    }
    if ( (a2 & 2) != 0 )
      gppiLockSFW = 0LL;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = v5;
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v8,
        v9,
        (unsigned int)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
        4,
        2,
        43,
        (__int64)&WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids);
    }
  }
  return v10;
}
