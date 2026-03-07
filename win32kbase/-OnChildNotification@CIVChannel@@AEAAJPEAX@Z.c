__int64 __fastcall CIVChannel::OnChildNotification(CIVChannel *this, _DWORD *a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  __int64 v7; // r8
  char v8; // di
  void *v9; // r9
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // edx
  int v14; // edx
  char v15; // di
  int v16; // edx

  if ( isRootPartition((__int64)this, (__int64)a2, a3, a4) )
  {
    v8 = 1;
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    v9 = &WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_d(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        19,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        a2[2]);
      v9 = &WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids;
    }
    LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v6,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        12,
        20,
        (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 10));
    }
    v10 = a2[2];
    v11 = a2[3];
    if ( v10 == 1 )
    {
      _InterlockedAdd((volatile signed __int32 *)this + 10, 1u);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v8 = 0;
      }
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 21;
        LOBYTE(v12) = v8;
        WPP_RECORDER_AND_TRACE_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, v12, v7, SHIWORD(v11));
      }
      (*((void (__fastcall **)(_QWORD, _QWORD, __int64, void *))this + 2))(*(_QWORD *)this, v11, v7, v9);
    }
    else if ( v10 == 3 )
    {
      _InterlockedDecrement((volatile signed __int32 *)this + 10);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v8 = 0;
      }
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = (__int16)v11;
        LOBYTE(v14) = v8;
        LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dddd(WPP_GLOBAL_Control->AttachedDevice, v14, v7, 22);
      }
    }
    return 0LL;
  }
  v15 = 1;
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      23,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
      a2[2]);
  }
  if ( a2[2] != 2 )
    return 0LL;
  LOBYTE(v6) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v6,
      v7,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      24,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
      *((_DWORD *)this + 2));
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0xBu)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v15 = 0;
  }
  if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 25;
    LOBYTE(v16) = v15;
    LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v16,
      v7,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      12,
      25,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids);
  }
  return CIVChannel::Reconnect(this);
}
