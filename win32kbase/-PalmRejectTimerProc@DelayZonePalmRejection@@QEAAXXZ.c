void __fastcall DelayZonePalmRejection::PalmRejectTimerProc(
        DelayZonePalmRejection *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80u) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      8,
      10,
      (__int64)&WPP_86908d42d98631d196c6ca9688fccfc3_Traceguids);
  *((_BYTE *)this + 8) = 0;
  DelayZonePalmRejection::DispatchBufferedInputFrames(this, a2, a3, a4);
  v6 = *((_QWORD *)this + 16);
  if ( v6 )
  {
    v7 = *((unsigned int *)this + 1);
    v8 = 0LL;
    DelayZoneTelemetry::UpdateDelayZoneStateInfo(v6, v7, v5, 1LL, &v8);
  }
}
