char __fastcall CRecalcState::HasWindowMovedUnexpectedly(CRecalcState *this, const struct tagWND *a2)
{
  int v2; // r8d
  __int64 v3; // rdx
  __int128 v5; // [rsp+A8h] [rbp-40h]

  v5 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
  if ( *((_BYTE *)this + 60) )
    return 0;
  v2 = *(_QWORD *)(*((_QWORD *)a2 + 5) + 96LL);
  v3 = v5 - *(_QWORD *)((char *)this + 28);
  if ( !v3 )
    v3 = *((_QWORD *)&v5 + 1) - *(_QWORD *)((char *)this + 36);
  if ( !v3 )
    return 0;
  LOBYTE(v3) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_dddddddddddd(WPP_GLOBAL_Control->AttachedDevice, v3, v2, HIDWORD(v5) - DWORD1(v5));
  }
  return 1;
}
