void __fastcall IVForegroundSync::ivSendForegroundUpdate(unsigned __int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  bool v7; // bl
  const struct CONTAINER_ID *v8; // rdx
  int v9; // ecx
  __int64 v10; // rax
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r14
  int v14; // r15d
  char v15; // bl
  int v16; // edx
  int v17; // r8d
  bool v18; // bl
  bool v19; // bl

  if ( !CIVChannel::ContainerConnected(3u) )
  {
    v7 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = v7;
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        14,
        (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids);
    }
    return;
  }
  if ( !a1 )
  {
    LOBYTE(v4) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v4,
        v5,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        13,
        15,
        (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids);
    }
    v8 = 0LL;
    v9 = 1;
LABEL_47:
    IVForegroundSync::_anonymous_namespace_::ivBroadcastSetNullForeground(v9, v8);
    return;
  }
  v10 = ValidateHbwnd(a1, v4, v5, v6);
  if ( v10 )
  {
    v13 = *(_QWORD *)(v10 + 136);
    v14 = 3 - (a2 != 0);
    if ( v13 )
    {
      v15 = 1;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_ddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          13,
          16,
          (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids,
          v14,
          *(_WORD *)v13,
          *(_WORD *)(v13 + 2));
      }
      IVForegroundSync::_anonymous_namespace_::ivSyncForegroundToContainer((struct CONTAINER_ID *)v13);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v15 = 0;
      }
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = v15;
        LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v16,
          v17,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          13,
          17,
          (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids,
          v14);
      }
    }
    else
    {
      v18 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = v18;
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          13,
          18,
          (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids);
      }
      v13 = 0LL;
    }
    v8 = (const struct CONTAINER_ID *)v13;
    v9 = v14;
    goto LABEL_47;
  }
  v19 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x1000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = v19;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      13,
      19,
      (__int64)&WPP_5f4ff7e9f3c731e8a410f4df7a374e17_Traceguids,
      a1);
  }
}
