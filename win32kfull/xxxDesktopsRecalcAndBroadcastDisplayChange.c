void __fastcall xxxDesktopsRecalcAndBroadcastDisplayChange(
        __int64 a1,
        struct tagWINDOWSTATION *a2,
        unsigned __int16 a3,
        unsigned int a4,
        struct CMonitorTopology *a5)
{
  bool WorkAreasFromShell; // r15
  BOOL v10; // esi
  int v11; // edx
  _UNKNOWN **v12; // r8
  int v13; // edx
  int v14; // r8d
  struct tagWND *i; // rbx
  char v16; // [rsp+80h] [rbp+18h] BYREF

  WorkAreasFromShell = xxxGetWorkAreasFromShell();
  v10 = a2 != 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  if ( !a2 )
    AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
  v12 = &WPP_RECORDER_INITIALIZED;
  if ( a2 )
  {
    DesktopRecalc::OnMonitorRectsChanged(
      *(DesktopRecalc **)(a1 + 40),
      a2,
      a5,
      (struct _DXGK_SET_DISPLAY_CONFIG_PARAMS_EX *)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
  }
  else
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        (_DWORD)v12,
        (unsigned int)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
        3,
        23,
        10,
        (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
    }
    for ( i = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL) + 112LL);
          i;
          i = (struct tagWND *)*((_QWORD *)i + 11) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)i + 5) + 21LL) & 8) != 0 )
        SelectWindowRgn(i, 2LL, 0);
    }
  }
  xxxBroadcastDisplaySettingsChange(a1, *(_WORD *)(gpsi + 6996LL) != a3, v10, a4);
  if ( WorkAreasFromShell )
  {
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        (unsigned int)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
        4,
        23,
        11,
        (__int64)&WPP_cd3fe56ee1413630481d590c05906531_Traceguids);
    }
    xxxSendNotifyMessage((struct tagTHREADINFO **)0xFFFFFFFFFFFFFFFFLL, 0x1Au, 0x2FuLL, 0LL, 1);
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16);
}
