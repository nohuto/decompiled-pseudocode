/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C01CA0D0
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C01CB54C (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C00E85F2 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 *     GetPointerInfoSize @ 0x1C015363C (GetPointerInfoSize.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01C9028 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01CD608 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  char v9; // di
  int v10; // edx
  int v11; // r8d
  __int64 PointerInfoSize; // r15
  unsigned int v13; // ebx
  CTouchProcessor *v14; // rcx
  __int64 v15; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v17; // rdx
  const struct CPointerMsgData *v18; // rsi
  PDEVICE_OBJECT v19; // rcx
  __int16 v20; // ax
  __int64 v21; // rcx
  __int64 v22; // r8
  const int *v23; // r8
  __int64 v24; // rax
  CPointerInfoNode *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // r14d
  unsigned int HistoryCount; // eax
  unsigned int v31; // esi
  unsigned int v32; // r13d
  __int64 v33; // rdx
  __int64 v34; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rbp
  __int64 v36; // r8
  int v37; // eax
  CPointerInfoNode *v38; // rsi
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // rcx
  unsigned int v46; // eax
  const int *v47; // r8
  _QWORD *FrameById; // [rsp+40h] [rbp-58h]
  PERESOURCE *v50[10]; // [rsp+48h] [rbp-50h] BYREF
  int v53; // [rsp+B8h] [rbp+20h]

  v9 = 1;
  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v53 = 1;
  v13 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v11) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v11) = 0;
  }
  if ( (_BYTE)v10 || (_BYTE)v11 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v10,
      v11,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      117,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v50, (CTouchProcessor *)((char *)this + 32), 1);
  MsgData = CTouchProcessor::GetMsgData(v14, a2, v15);
  v18 = MsgData;
  if ( MsgData )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
    if ( FrameById )
    {
      v24 = *((unsigned int *)v18 + 8);
      if ( (unsigned int)v24 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v17, v22);
        v24 = *((unsigned int *)v18 + 8);
      }
      v25 = (CPointerInfoNode *)(FrameById[30] + 480 * v24);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v25) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
      if ( (*(_DWORD *)v25 & 2) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26, v28);
      v29 = 1;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v53 = CTouchProcessor::PointerInfoCopyOutHelper(
                (PERESOURCE *)this,
                v25,
                (struct tagHID_POINTER_DEVICE_INFO *)FrameById[32],
                a3,
                PointerInfoSize,
                a6);
        if ( v53 )
        {
          a4 -= PointerInfoSize;
          a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
        }
      }
      HistoryCount = CPointerInfoNode::GetHistoryCount(v25);
      v31 = *((_DWORD *)v25 + 86);
      v32 = HistoryCount;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                this,
                                (const struct CPointerInputFrame *)FrameById);
      v37 = v53;
      if ( v53 )
      {
        while ( PreviousFrameByDevice )
        {
          if ( v32 > 1 )
          {
            if ( v31 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v34, v33, v36);
            v38 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v31);
            if ( !(unsigned int)CPointerInfoNode::IsValid(v38) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41);
            ++v29;
            if ( a4 >= (unsigned int)PointerInfoSize )
            {
              v53 = CTouchProcessor::PointerInfoCopyOutHelper(
                      (PERESOURCE *)this,
                      v38,
                      (struct tagHID_POINTER_DEVICE_INFO *)FrameById[32],
                      a3,
                      PointerInfoSize,
                      a6);
              if ( v53 )
              {
                a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
                a4 -= PointerInfoSize;
              }
            }
            v42 = CPointerInfoNode::GetHistoryCount(v38);
            v45 = v32 - 1;
            if ( v42 != (_DWORD)v45 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v43, v44);
            v46 = CPointerInfoNode::GetHistoryCount(v38);
            v31 = *((_DWORD *)v38 + 86);
            v32 = v46;
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
            v37 = v53;
            if ( v53 )
              continue;
          }
          if ( !v37 )
            goto LABEL_58;
          break;
        }
        *a5 = v29;
      }
LABEL_58:
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v33) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v33) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v9 = 0;
      if ( (_BYTE)v33 || v9 )
      {
        v47 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
        LOBYTE(v47) = v9;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v33,
          (_DWORD)v47,
          WPP_GLOBAL_Control->DeviceExtension,
          5,
          7,
          120,
          (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
      }
      v13 = v53;
    }
    else
    {
      v19 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v17) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v9 = 0;
      if ( (_BYTE)v17 || v9 )
      {
        v20 = 119;
        goto LABEL_33;
      }
    }
  }
  else
  {
    v19 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v17) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v17) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v9 = 0;
    if ( (_BYTE)v17 || v9 )
    {
      v20 = 118;
LABEL_33:
      v23 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
      LOBYTE(v23) = v9;
      WPP_RECORDER_AND_TRACE_SF_(
        v19->AttachedDevice,
        v17,
        (_DWORD)v23,
        v19->DeviceExtension,
        5,
        7,
        v20,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v50);
  return v13;
}
