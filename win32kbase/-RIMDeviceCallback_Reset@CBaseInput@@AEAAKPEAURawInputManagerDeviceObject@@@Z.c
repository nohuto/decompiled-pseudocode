__int64 __fastcall CBaseInput::RIMDeviceCallback_Reset(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  char v2; // r8
  void *v3; // r8
  char v5; // [rsp+40h] [rbp-18h]

  v2 = (char)a2;
  if ( a2 )
  {
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = v2;
      v3 = &WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids;
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_q(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)a2,
        (_DWORD)v3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        3,
        22,
        (__int64)&WPP_b9fda6c6f15d3af104d8d89ad615ee8c_Traceguids,
        v5);
    }
  }
  return 0LL;
}
