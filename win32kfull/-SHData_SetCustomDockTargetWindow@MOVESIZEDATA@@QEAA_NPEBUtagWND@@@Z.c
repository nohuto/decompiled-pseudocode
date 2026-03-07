bool __fastcall MOVESIZEDATA::SHData_SetCustomDockTargetWindow(MOVESIZEDATA *this, const struct tagWND *a2)
{
  int v4; // eax
  int v5; // edx
  int v6; // r8d
  PDEVICE_OBJECT v7; // rcx
  int v8; // r9d
  __int64 v9; // rcx
  char v10; // dl
  __int64 v11; // rax
  char v12; // dl
  int v13; // eax
  const struct tagWND *CustomDockTargetWindow; // rax
  char v15; // dl
  bool result; // al

  LOBYTE(v4) = IsMessageOnlyWindow((__int64)a2);
  if ( !v4 )
  {
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = 16;
    goto LABEL_84;
  }
  v9 = *((_QWORD *)a2 + 2);
  if ( v9 != gptiCurrent )
  {
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = 17;
    goto LABEL_84;
  }
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL) & 0xF) != 2 )
  {
    v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v10,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        3u,
        1u,
        0x12u,
        (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
        *(_DWORD *)(*((_QWORD *)a2 + 5) + 288LL));
    return 0;
  }
  v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( v9 == v11 )
  {
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = 19;
    goto LABEL_84;
  }
  if ( *(_QWORD *)(v9 + 456) != *(_QWORD *)(v11 + 456) )
  {
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = 20;
    goto LABEL_84;
  }
  v6 = *((_DWORD *)this + 44);
  if ( v6 != 9 )
  {
    v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    if ( v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v12,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        3u,
        1u,
        0x15u,
        (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
        *((_DWORD *)this + 44));
    return 0;
  }
  v13 = *((_DWORD *)this + 50);
  if ( (v13 & 0x800) == 0 )
  {
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = 22;
    goto LABEL_84;
  }
  if ( (v13 & 0x80008) != 0x80000 )
  {
    v7 = WPP_GLOBAL_Control;
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v8 = 23;
LABEL_84:
    WPP_RECORDER_AND_TRACE_SF_(
      v7->AttachedDevice,
      v5,
      v6,
      v8,
      3,
      1,
      v8,
      (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids);
    return 0;
  }
  CustomDockTargetWindow = MOVESIZEDATA::SHData_GetCustomDockTargetWindow(this);
  if ( !CustomDockTargetWindow || CustomDockTargetWindow == a2 )
  {
    *((_QWORD *)this + 41) = *(_QWORD *)a2;
    result = 1;
    *((_BYTE *)this + 337) = 1;
    return result;
  }
  v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v15,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      24LL,
      3u,
      1u,
      0x18u,
      (__int64)&WPP_014a4f769f313c7aeb3767ee4b85a43c_Traceguids,
      *(_QWORD *)a2);
  return 0;
}
