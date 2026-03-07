__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  char v5; // di
  unsigned __int16 v7; // bx
  unsigned __int16 v8; // di
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __int64 v17; // rsi
  char v18; // di
  unsigned __int16 v19; // si
  int v20; // eax
  __int64 v21; // r9
  PDEVICE_OBJECT v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // edx
  _BYTE v28[72]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v29; // [rsp+A0h] [rbp+8h]
  unsigned __int16 v30; // [rsp+B0h] [rbp+18h]

  v4 = a2;
  if ( *(_DWORD *)(a1 + 108) == 2 )
  {
    v7 = *(_WORD *)(a1 + 112);
    v8 = *(_WORD *)(a1 + 116);
    v30 = v7;
    v29 = v8;
    v9 = SGDGetUserSessionState(a1, a2, a3, a4);
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v28, (struct _KTHREAD **)(v9 + 288));
    v12 = RIMSearchHidTLCInfo(v7, v8, v10, v11);
    v16 = 0;
    v17 = (__int64)v12;
    v18 = 1;
    if ( v4 && !v12 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v13) = 0;
      }
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v19 = v29;
      }
      else
      {
        v19 = v29;
        WPP_RECORDER_AND_TRACE_SF_DD(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          23,
          55,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
          v30,
          v29);
      }
      v17 = RIMAllocateAndLinkHidTLCInfo(v30, v19, v14, v15);
    }
    if ( v17 )
    {
      v20 = *(_DWORD *)(v17 + 28);
      if ( v4 )
      {
        v21 = (unsigned int)(v20 + 1);
        *(_DWORD *)(v17 + 28) = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v13) = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            57,
            (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
            v20 + 1);
      }
      else
      {
        if ( !v20 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1035);
        v21 = (unsigned int)(*(_DWORD *)(v17 + 28) - 1);
        *(_DWORD *)(v17 + 28) = v21;
        v22 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
          || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v13) = 0;
        }
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            58,
            (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
            v21);
      }
      v23 = SGDGetUserSessionState(v22, v13, v14, v21);
      CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v23 + 16840));
      if ( !*(_DWORD *)(v17 + 20) && !(unsigned int)RIMHidTLCActive((_DWORD *)v17) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
          || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
        {
          v18 = 0;
        }
        LOBYTE(v25) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 59;
          LOBYTE(v27) = v18;
          WPP_RECORDER_AND_TRACE_SF_DD(
            WPP_GLOBAL_Control->AttachedDevice,
            v27,
            v25,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            23,
            59,
            (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids,
            v30,
            v29);
        }
        RIMFreeHidTLCInfo((void ***)v17, v24, v25, v26);
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v18 = 0;
      }
      if ( v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = v18;
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          23,
          56,
          (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
      }
      if ( !v4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1023);
      v16 = -1073741670;
    }
    RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v28);
    return v16;
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x16u)
      || (v5 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v5 = 0;
    }
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = v5;
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        23,
        54,
        (__int64)&WPP_7ab93bf750ea39448eb6692bed3f413c_Traceguids);
    }
    return 0LL;
  }
}
