void *__fastcall UnpackMouseSettings(int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  char v6; // di
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  void *result; // rax
  int v16; // ebx

  v4 = *a1;
  v6 = 1;
  if ( *a1 != *((_DWORD *)gpsi + 497) )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_s(WPP_GLOBAL_Control->AttachedDevice, a2, a3, WPP_MAIN_CB.Queue.ListEntry.Flink);
    SetSwapMouseButton(v4 != 0, a2, a3, a4);
    if ( qword_1C02D6EC8 )
      qword_1C02D6EC8(33LL, 0LL, 0LL);
  }
  v7 = a1[1];
  v8 = SGDGetUserSessionState(a1, a2, a3, a4);
  if ( v7 != (unsigned int)CMouseAcceleration::MOUSE_SENSITIVITY_INFO::GetMouseSensitivity((CMouseAcceleration::MOUSE_SENSITIVITY_INFO *)(*(_QWORD *)(v8 + 16008) + 104LL)) )
  {
    LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        11,
        (__int64)&WPP_ba08f856c6723d7409559d634e9d3140_Traceguids,
        v7);
    UpdateMouseSensitivity(v7, v9, v10, v11);
    ResetAccelerationCurves(0LL, v12, v13, v14);
    if ( qword_1C02D6EC8 )
      qword_1C02D6EC8(113LL, 0LL, 0LL);
  }
  result = gpsi;
  v16 = a1[2];
  if ( v16 != *((_DWORD *)gpsi + 1247) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
    {
      v6 = 0;
    }
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = v6;
      LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v9,
        v10,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        12,
        (__int64)&WPP_ba08f856c6723d7409559d634e9d3140_Traceguids,
        a1[2]);
    }
    *((_DWORD *)gpsi + 1247) = v16;
    result = qword_1C02D6EC8;
    if ( qword_1C02D6EC8 )
      return (void *)qword_1C02D6EC8(105LL, 0LL, 0LL);
  }
  return result;
}
