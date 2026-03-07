char __fastcall CRecalcState::ShouldDeferRecalc(__int64 a1, int a2)
{
  char v4; // si
  char v5; // bl
  unsigned int ThreadId; // eax
  unsigned __int16 v7; // cx

  if ( a2 != 1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL) & 0x20) != 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
        || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        v4 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
      {
        v5 = 0;
      }
      if ( !v4 && !v5 )
        return 1;
      ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
      v7 = 13;
      goto LABEL_30;
    }
    if ( a2 == 2 )
      return 0;
  }
  if ( !(unsigned int)GetWindowCloakState((struct tagTHREADINFO **)a1) )
    return 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (v4 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    v4 = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( v4 || v5 )
  {
    ThreadId = (unsigned int)PsGetThreadId(**(PETHREAD **)(a1 + 16));
    v7 = 14;
LABEL_30:
    WPP_RECORDER_AND_TRACE_SF_qd(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v5,
      (__int64)gFullLog,
      5u,
      0x17u,
      v7,
      (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
      a1,
      ThreadId);
  }
  return 1;
}
