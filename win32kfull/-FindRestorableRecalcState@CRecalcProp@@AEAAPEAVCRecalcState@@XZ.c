struct CRecalcState *__fastcall CRecalcProp::FindRestorableRecalcState(CRecalcProp *this)
{
  int v2; // r8d
  const struct tagWND *v3; // rdx
  char v4; // cl
  CRecalcState *i; // rbx

  if ( (unsigned int)GetWindowCloakState(*((struct tagTHREADINFO ***)this + 2)) )
    return 0LL;
  v3 = (const struct tagWND *)*((_QWORD *)this + 2);
  v4 = *(_BYTE *)(*((_QWORD *)v3 + 5) + 31LL);
  if ( (v4 & 0x10) == 0 )
  {
    LOBYTE(v2) = 1;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
      || (LOBYTE(v3) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v3) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      LOBYTE(v2) = 0;
    if ( (_BYTE)v3 || (_BYTE)v2 )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v3,
        v2,
        58,
        5,
        23,
        58,
        (__int64)&WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
    return 0LL;
  }
  if ( (v4 & 0x20) == 0 || !CRecalcState::ShouldRestoreWindowToState(*((CRecalcState **)this + 4), v3) )
  {
    for ( i = (CRecalcState *)*((_QWORD *)this + 5); i; i = (CRecalcState *)*((_QWORD *)i + 1) )
    {
      if ( CRecalcState::ShouldRestoreWindowToState(i, *((const struct tagWND **)this + 2)) )
        return i;
    }
    return 0LL;
  }
  return (struct CRecalcState *)*((_QWORD *)this + 4);
}
