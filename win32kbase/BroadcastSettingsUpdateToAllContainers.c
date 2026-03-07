void __fastcall BroadcastSettingsUpdateToAllContainers(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const struct CONTAINER_ID *v4; // rdx
  int v5; // r8d
  int v6; // [rsp+50h] [rbp+8h] BYREF

  if ( isRootPartition(a1, a2, a3, a4) && CIVChannel::ContainerConnected(3u) )
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        18,
        (__int64)&WPP_ba08f856c6723d7409559d634e9d3140_Traceguids);
    }
    v6 = 0;
    IVRootDeliver::Settings::SendSettingsUpdateToContainer((IVRootDeliver::Settings *)&v6, v4);
  }
}
