/*
 * XREFs of ?_AllowSetForegroundWindow@@YA?AW4AllowSetForegroundWindowResult@@KW4AllowSetForegroundWindowPolicy@@@Z @ 0x1C004C34C
 * Callers:
 *     NtUserAllowSetForegroundWindow @ 0x1C004B190 (NtUserAllowSetForegroundWindow.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C004C704 (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     ProcessInfoFromPID @ 0x1C004FC54 (ProcessInfoFromPID.c)
 *     ?CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C00E3BA4 (-CanForceForeground@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00E5B60 (WPP_RECORDER_AND_TRACE_SF_D.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _AllowSetForegroundWindow(unsigned int a1, char a2)
{
  PDEVICE_OBJECT v4; // rcx
  char v5; // bl
  bool v6; // dl
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdi
  unsigned int v9; // esi
  __int64 v10; // rdx
  int v11; // r8d
  _UNKNOWN **v12; // r9
  __int64 v13; // rbp
  bool v14; // si
  struct tagTHREADINFO *PtiLastWokenHotKey; // rax
  PDEVICE_OBJECT v17; // rcx
  __int16 v18; // ax

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
      (_DWORD)gFullLog,
      4,
      2,
      58,
      (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
      a1,
      a2);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  v8 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v9 = 2;
  if ( (a2 & 1) != 0 || CanForceForeground((const struct tagPROCESSINFO *)v8) )
  {
    if ( a1 == -1 )
    {
      CInputGlobals::ClearPtiLastWoken(gpInputGlobals);
      v9 = 0;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v12 = &WPP_RECORDER_INITIALIZED;
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
          60,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
          *(_DWORD *)(v8 + 56));
LABEL_23:
        v12 = &WPP_RECORDER_INITIALIZED;
      }
    }
    else
    {
      v13 = ProcessInfoFromPID(a1);
      if ( v13 )
      {
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_DD(
            WPP_GLOBAL_Control->AttachedDevice,
            (_BYTE)v10,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            (_DWORD)gFullLog,
            4,
            2,
            62,
            (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids,
            *(_DWORD *)(v8 + 56),
            *(_DWORD *)(v13 + 56));
        v14 = 0;
        if ( (unsigned int)IsDesktopApp(v8, v10) )
        {
          PtiLastWokenHotKey = CInputGlobals::GetPtiLastWokenHotKey(gpInputGlobals);
          if ( !PtiLastWokenHotKey || *((_QWORD *)PtiLastWokenHotKey + 53) == v8 )
            v14 = 1;
        }
        CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v13 + 320), v14);
        v9 = 1;
        goto LABEL_23;
      }
      v9 = 3;
      LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v12 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v10,
          v11,
          (unsigned int)&WPP_RECORDER_INITIALIZED,
          3,
          2,
          61,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        goto LABEL_23;
      }
    }
    if ( (a2 & 2) != 0 )
    {
      gppiLockSFW = 0LL;
      v17 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 63;
LABEL_40:
        LOBYTE(v10) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          v17->AttachedDevice,
          v10,
          v11,
          (_DWORD)v12,
          4,
          2,
          v18,
          (__int64)&WPP_998a63ff47c63414c5882e9b8cb70cf1_Traceguids);
        return v9;
      }
    }
    return v9;
  }
  v17 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = 59;
    goto LABEL_40;
  }
  return v9;
}
