/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C01B5628
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C004926C (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C01B320C (rimObsAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0049760 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0199C38 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0199EA0 (RIMFreeHidTLCInfo.c)
 *     RIMHidTLCActive @ 0x1C0199F40 (RIMHidTLCActive.c)
 *     RIMSearchHidTLCInfo @ 0x1C019A000 (RIMSearchHidTLCInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, char a2)
{
  bool v3; // bl
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  char v9; // bl
  unsigned __int16 v10; // di
  PDEVICE_OBJECT v11; // rcx
  int v13; // eax
  int v14; // r8d
  int v15; // edx
  __int64 v16; // [rsp+48h] [rbp-30h]
  unsigned __int16 v17; // [rsp+80h] [rbp+8h]
  __int16 v18; // [rsp+90h] [rbp+18h]

  if ( *(_DWORD *)(a1 + 108) != 2 )
  {
    v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v3,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        23,
        54,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
    return 0LL;
  }
  v17 = *(_WORD *)(a1 + 116);
  v18 = *(_WORD *)(a1 + 112);
  v4 = RIMSearchHidTLCInfo(v18, v17);
  v8 = (__int64)v4;
  v9 = 1;
  if ( a2 )
  {
    if ( v4 )
    {
LABEL_33:
      v13 = *(_DWORD *)(v8 + 28);
      if ( a2 )
      {
        *(_DWORD *)(v8 + 28) = v13 + 1;
        LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v7,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            57,
            (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
            v13 + 1);
        }
      }
      else
      {
        if ( !v13 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
          v13 = *(_DWORD *)(v8 + 28);
        }
        *(_DWORD *)(v8 + 28) = v13 - 1;
        LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_D(
            WPP_GLOBAL_Control->AttachedDevice,
            v5,
            v7,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            58,
            (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
            v13 - 1);
        }
      }
      CHidInput::HandleDirectStartStopDeviceReadRequest(gpHidInput);
      if ( !*(_DWORD *)(v8 + 20) && !(unsigned int)RIMHidTLCActive((_DWORD *)v8) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v9 = 0;
        }
        if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v15 = 59;
          LODWORD(v16) = v17;
          LOBYTE(v15) = v9;
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            v15,
            v14,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            59,
            (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
            v18,
            v16);
        }
        RIMFreeHidTLCInfo((void ***)v8);
      }
      return 0LL;
    }
    LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( !(_BYTE)v5 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = v17;
    }
    else
    {
      v10 = v17;
      LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v7,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        23,
        55,
        (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids,
        v18,
        v17);
    }
    v8 = RIMAllocateAndLinkHidTLCInfo(v18, v10);
  }
  if ( v8 )
    goto LABEL_33;
  v11 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
    || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
  {
    v9 = 0;
  }
  LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      (_BYTE)v7,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      23,
      56,
      (__int64)&WPP_43d878ddf4c53d03f90242c2d3f0d36e_Traceguids);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v5, v7);
  return 3221225626LL;
}
