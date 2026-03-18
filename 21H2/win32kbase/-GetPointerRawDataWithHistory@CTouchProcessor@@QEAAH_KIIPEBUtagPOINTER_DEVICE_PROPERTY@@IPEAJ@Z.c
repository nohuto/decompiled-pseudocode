/*
 * XREFs of ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01CC260
 * Callers:
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01CC1B8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C00DC65C (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01C9028 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01CC0FC (-GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPER.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01CD608 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_LL @ 0x1C01DA994 (WPP_RECORDER_AND_TRACE_SF_LL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        const struct tagPOINTER_DEVICE_PROPERTY *a5,
        unsigned int a6,
        int *a7)
{
  __int64 v8; // r15
  char v9; // di
  _UNKNOWN **v10; // r8
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  PDEVICE_OBJECT v14; // rcx
  __int16 v15; // ax
  const struct CPointerMsgData *MsgData; // rax
  const struct CPointerMsgData *v17; // r14
  __int64 v18; // rcx
  _QWORD *FrameById; // r12
  __int64 v21; // rax
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int HistoryCount; // eax
  __int64 v27; // rdx
  int v28; // r8d
  unsigned int PointerRawData; // r15d
  int v30; // r8d
  PDEVICE_OBJECT v31; // rcx
  _UNKNOWN **v32; // r8
  unsigned int v33; // r14d
  __int64 v34; // rcx
  __int64 v35; // r8
  const struct CPointerInputFrame *PreviousFrameByDevice; // r13
  __int64 v37; // r14
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // edx
  _UNKNOWN **v42; // r8
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  int v47; // [rsp+28h] [rbp-80h]
  __int16 v48; // [rsp+30h] [rbp-78h]
  __int16 v49; // [rsp+30h] [rbp-78h]
  int v50; // [rsp+38h] [rbp-70h]
  size_t Size; // [rsp+50h] [rbp-58h]
  int *v52; // [rsp+58h] [rbp-50h]
  PERESOURCE *v53[8]; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v56; // [rsp+D8h] [rbp+30h]
  int *v57; // [rsp+E0h] [rbp+38h]

  v8 = a2;
  Size = a6;
  v52 = &a7[Size];
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 5u )
  {
    LOBYTE(a2) = 0;
    v9 = 1;
  }
  else
  {
    v9 = 1;
    LOBYTE(a2) = 1;
  }
  v10 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v10) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v10) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)v10 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)v10,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      126,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v53, (CTouchProcessor *)((char *)this + 32));
  if ( a6 != a4 * a3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  if ( a6 < a4 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        127,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v11 && !v9 )
      goto LABEL_70;
    v15 = 128;
    goto LABEL_32;
  }
  MsgData = CTouchProcessor::GetMsgData(v12, v8, v13);
  v17 = MsgData;
  if ( !MsgData )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        129,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v11 && !v9 )
      goto LABEL_70;
    v15 = 130;
LABEL_32:
    v48 = v15;
LABEL_69:
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v14->AttachedDevice,
      v11,
      v13,
      v14->DeviceExtension,
      5,
      7,
      v48,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
LABEL_70:
    CInpLockGuardShared::~CInpLockGuardShared(v53);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
  if ( !FrameById )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v13,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        7,
        131,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    v14 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v11) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v11 && !v9 )
      goto LABEL_70;
    v48 = 132;
    goto LABEL_69;
  }
  v21 = *((unsigned int *)v17 + 8);
  if ( (unsigned int)v21 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v11, v13);
    v21 = *((unsigned int *)v17 + 8);
  }
  v22 = FrameById[30] + 480 * v21;
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v22) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
  HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v22);
  v56 = HistoryCount;
  if ( a3 == 1 || a3 == HistoryCount )
  {
    PointerRawData = 1;
  }
  else
  {
    PointerRawData = 0;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(v27) = 0;
    }
    if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_LL(
        WPP_GLOBAL_Control->AttachedDevice,
        v27,
        v28,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        3,
        v47,
        133,
        v50,
        a3,
        HistoryCount);
    }
  }
  if ( (void *)FrameById[8] == TouchExtensibility::hDeviceUser )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v27) = 0;
    }
    if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v28) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v27,
        v28,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        7,
        134,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
    memset(a7, 0, Size * 4);
    v31 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v27) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v27 && !v9 )
      goto LABEL_146;
    v49 = 136;
  }
  else
  {
    if ( PointerRawData )
    {
      PointerRawData = CTouchProcessor::GetPointerRawData(
                         (PERESOURCE *)this,
                         (const struct CPointerInputFrame *)FrameById,
                         *(_DWORD *)(v22 + 156),
                         *(_WORD *)(v22 + 162),
                         a4,
                         a5,
                         a7);
      if ( !PointerRawData )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
        {
          LOBYTE(v27) = 0;
        }
        v32 = &WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v27 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v32) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v27,
            (_DWORD)v32,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            3,
            7,
            137,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        }
      }
      if ( PointerRawData )
      {
        v57 = &a7[a4];
        if ( a3 > 1 )
        {
          v33 = *(_DWORD *)(v22 + 344);
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                    this,
                                    (const struct CPointerInputFrame *)FrameById);
          do
          {
            if ( !PreviousFrameByDevice || v56 <= 1 )
              break;
            if ( v33 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v27, v35);
            v37 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v33;
            if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v37) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40);
            v41 = a4;
            if ( &v57[a4] > v52 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
                || (LOBYTE(v41) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
              {
                LOBYTE(v41) = 0;
              }
              v42 = &WPP_RECORDER_INITIALIZED;
              if ( (_BYTE)v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v42) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                WPP_RECORDER_AND_TRACE_SF_(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v41,
                  (_DWORD)v42,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  3,
                  7,
                  138,
                  (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
              }
              PointerRawData = 0;
            }
            else
            {
              PointerRawData = CTouchProcessor::GetPointerRawData(
                                 (PERESOURCE *)this,
                                 PreviousFrameByDevice,
                                 *(_DWORD *)(v37 + 156),
                                 *(_WORD *)(v37 + 162),
                                 a4,
                                 a5,
                                 v57);
              if ( PointerRawData )
                v57 += a4;
            }
            v43 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v37);
            v46 = v56 - 1;
            if ( v43 != (_DWORD)v46 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v46, v44, v45);
            v56 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v37);
            v33 = *(_DWORD *)(v37 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
          }
          while ( PointerRawData );
        }
      }
    }
    v31 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v27) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v27) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( !(_BYTE)v27 && !v9 )
      goto LABEL_146;
    v30 = 139;
    v49 = 139;
  }
  LOBYTE(v30) = v9;
  WPP_RECORDER_AND_TRACE_SF_(
    v31->AttachedDevice,
    v27,
    v30,
    v31->DeviceExtension,
    5,
    7,
    v49,
    (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
LABEL_146:
  CInpLockGuardShared::~CInpLockGuardShared(v53);
  return PointerRawData;
}
