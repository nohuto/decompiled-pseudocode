__int64 __fastcall CIVChannel::Reconnect(CIVChannel *this)
{
  char v2; // bl
  bool v3; // dl
  int v4; // edi
  int v5; // eax
  int v6; // r8d
  char v7; // si
  void *v8; // rdx
  int v10; // edx
  int v11; // r8d

  v2 = 1;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v3,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      26,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
      *((_DWORD *)this + 2));
  v4 = 0;
  while ( 1 )
  {
    if ( !gpfnIVChildReInitialize )
    {
      v7 = -69;
      goto LABEL_21;
    }
    v5 = gpfnIVChildReInitialize(*((_DWORD *)this + 2));
    v7 = v5;
    if ( v5 >= 0 )
      break;
LABEL_21:
    UserSleep(1000);
    LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v10,
        v11,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        12,
        27,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        v4,
        v7);
    }
    if ( (unsigned int)++v4 >= 0xA )
      KeBugCheck(0x164u);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v2 = 0;
  }
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v8 = &WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids;
    LOBYTE(v8) = v2;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)v8,
      v6,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      28,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
  }
  return CIVChannel::Receive(this);
}
