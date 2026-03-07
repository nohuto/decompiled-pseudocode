char __fastcall CRecalcState::IsWindowEligibleForMinimize(CRecalcState *this, const struct tagWND *a2)
{
  __int64 v2; // rcx
  const struct tagWND *v3; // r8
  PDEVICE_OBJECT v4; // r9
  char v5; // cl
  char v6; // dl
  unsigned __int16 v7; // r10
  char v9; // al

  v2 = *((_QWORD *)a2 + 5);
  v3 = a2;
  if ( (*(_BYTE *)(v2 + 30) & 2) == 0 )
  {
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 37;
LABEL_8:
    WPP_RECORDER_AND_TRACE_SF_q(
      (__int64)v4->AttachedDevice,
      v5,
      v6,
      (__int64)v4,
      4u,
      0x17u,
      v7,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      *(_QWORD *)v3);
    return 0;
  }
  v9 = *(_BYTE *)(v2 + 31);
  if ( (v9 & 8) != 0 )
  {
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 38;
    goto LABEL_8;
  }
  if ( (v9 & 0x10) == 0 )
  {
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 39;
    goto LABEL_8;
  }
  if ( IsForegroundWindow((__int64)a2) )
  {
    v4 = WPP_GLOBAL_Control;
    v5 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v7 = 40;
    goto LABEL_8;
  }
  return 1;
}
