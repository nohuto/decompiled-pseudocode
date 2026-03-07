__int64 __fastcall CreateMonitorRegionForDpi(__int64 a1, unsigned __int16 a2)
{
  int v2; // edx
  __int64 v3; // rbx
  int v4; // r8d
  struct _RECTL v6; // [rsp+40h] [rbp-18h] BYREF

  v6 = *(struct _RECTL *)GetMonitorRectForDpi(&v6, a1, a2);
  v3 = GreCreateRectRgnIndirect(&v6);
  if ( !v3 )
  {
    LOBYTE(v2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v4,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        25,
        10,
        (__int64)&WPP_f8563ecc31083c42ba75b8756f4e6851_Traceguids);
    }
  }
  return v3;
}
