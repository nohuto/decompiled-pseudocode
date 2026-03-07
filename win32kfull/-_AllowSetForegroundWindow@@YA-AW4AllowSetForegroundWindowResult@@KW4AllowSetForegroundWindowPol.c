// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall _AllowSetForegroundWindow(int a1, char a2)
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
  char v17; // dl
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  __int64 v20; // [rsp+40h] [rbp-28h]

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
      59,
      (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
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
      v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v12 = &WPP_RECORDER_INITIALIZED;
      if ( v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v20) = *(_DWORD *)(v8 + 56);
        WPP_RECORDER_AND_TRACE_SF_D(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v17,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gFullLog,
          4u,
          2u,
          0x3Du,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
          v20);
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
            63,
            (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
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
          62,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
        goto LABEL_23;
      }
    }
    if ( (a2 & 2) != 0 )
    {
      gppiLockSFW = 0LL;
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v5 = 0;
      }
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = 64;
LABEL_40:
        LOBYTE(v10) = v5;
        WPP_RECORDER_AND_TRACE_SF_(
          v18->AttachedDevice,
          v10,
          v11,
          (_DWORD)v12,
          4,
          2,
          v19,
          (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
        return v9;
      }
    }
    return v9;
  }
  v18 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v5 = 0;
  }
  LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v19 = 60;
    goto LABEL_40;
  }
  return v9;
}
