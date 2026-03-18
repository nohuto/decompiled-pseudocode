/*
 * XREFs of rimObsStartStopDeviceRead @ 0x1C01AF320
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C007267C (RawInputManagerObjectDelete.c)
 *     rimObsAddInputObserver @ 0x1C01ACCEC (rimObsAddInputObserver.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006F118 (--1RIMLOCKExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C006FBD8 (--0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ @ 0x1C0078780 (-HandleDirectStartStopDeviceReadRequest@CHidInput@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_DD @ 0x1C007FC8C (WPP_RECORDER_AND_TRACE_SF_DD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0191414 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0191810 (RIMFreeHidTLCInfo.c)
 *     RIMHidTLCActive @ 0x1C0191934 (RIMHidTLCActive.c)
 *     RIMSearchHidTLCInfo @ 0x1C0191A58 (RIMSearchHidTLCInfo.c)
 */

__int64 __fastcall rimObsStartStopDeviceRead(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // di
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  __int64 v16; // rsi
  char v17; // dl
  unsigned __int16 v18; // si
  int v19; // eax
  __int64 v20; // r9
  PDEVICE_OBJECT v21; // rcx
  unsigned __int16 v22; // ax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // [rsp+40h] [rbp-58h]
  __int64 v30; // [rsp+48h] [rbp-50h]
  _BYTE v31[72]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int16 v32; // [rsp+B0h] [rbp+18h]

  v4 = a2;
  if ( *(_DWORD *)(a1 + 108) == 2 )
  {
    v6 = *(_WORD *)(a1 + 112);
    v7 = *(_WORD *)(a1 + 116);
    v32 = v6;
    v8 = SGDGetUserSessionState(a1, a2, a3, a4);
    RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v31, (struct _KTHREAD **)(v8 + 288));
    v11 = RIMSearchHidTLCInfo(v6, v7, v9, v10);
    v15 = 0;
    v16 = (__int64)v11;
    if ( v4 && !v11 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v17 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        v17 = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = v7;
      }
      else
      {
        v18 = v7;
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v13,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          1u,
          0x37u,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v32,
          v7);
      }
      v16 = RIMAllocateAndLinkHidTLCInfo(v32, v18, v13, v14);
    }
    if ( !v16 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v12) = 0;
      }
      if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v12,
          v13,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          1,
          56,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
      }
      if ( !v4 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1023);
      v15 = -1073741670;
LABEL_60:
      RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)v31);
      return v15;
    }
    v19 = *(_DWORD *)(v16 + 28);
    if ( v4 )
    {
      v20 = (unsigned int)(v19 + 1);
      *(_DWORD *)(v16 + 28) = v20;
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_50;
      v22 = 57;
    }
    else
    {
      if ( !v19 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1035);
      v20 = (unsigned int)(*(_DWORD *)(v16 + 28) - 1);
      *(_DWORD *)(v16 + 28) = v20;
      v21 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v12) = 0;
      }
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !(_BYTE)v12 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_50;
      v22 = 58;
    }
    LODWORD(v29) = v20;
    WPP_RECORDER_AND_TRACE_SF_d(
      (__int64)v21->AttachedDevice,
      v12,
      v13,
      (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
      4u,
      1u,
      v22,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
      v29);
LABEL_50:
    v23 = SGDGetUserSessionState(v21, v12, v13, v20);
    CHidInput::HandleDirectStartStopDeviceReadRequest(*(CHidInput **)(v23 + 16840), v24, v25);
    if ( !*(_DWORD *)(v16 + 20) && !(unsigned int)RIMHidTLCActive((_DWORD *)v16) )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v26) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v26) = 0;
      }
      LOBYTE(v27) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v30) = v7;
        LODWORD(v29) = v32;
        WPP_RECORDER_AND_TRACE_SF_DD(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v26,
          v27,
          (__int64)WPP_MAIN_CB.Queue.ListEntry.Flink,
          4u,
          1u,
          0x3Bu,
          (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
          v29,
          v30);
      }
      RIMFreeHidTLCInfo((void ***)v16, v26, v27, v28);
    }
    goto LABEL_60;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      4,
      1,
      54,
      (__int64)&WPP_c696d146d7263bd817038d8ba47edda4_Traceguids);
  }
  return 0LL;
}
