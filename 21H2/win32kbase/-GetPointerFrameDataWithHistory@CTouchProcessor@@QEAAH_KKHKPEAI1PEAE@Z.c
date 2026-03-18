/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01CA750
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C01CAC1C (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     GetPointerInfoSize @ 0x1C015363C (GetPointerInfoSize.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01C9028 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C01CA614 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01CAE88 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01CD608 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE108 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        unsigned __int8 *a8)
{
  unsigned int v9; // ebx
  int v12; // edx
  int v13; // r8d
  char v14; // di
  CTouchProcessor *v15; // rcx
  __int64 v16; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v18; // rdx
  const struct CPointerMsgData *v19; // rsi
  PDEVICE_OBJECT v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD *FrameById; // r15
  __int64 v25; // rax
  CPointerInfoNode *v26; // r14
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  const int *v30; // r8
  unsigned int v31; // r13d
  __int64 v32; // rdx
  __int64 v33; // rcx
  int PointerFrameData; // ebp
  __int64 v35; // r8
  unsigned __int64 v36; // rsi
  unsigned int HistoryCount; // eax
  unsigned int v38; // r14d
  unsigned int v39; // r13d
  __int64 v40; // rcx
  __int64 v41; // r8
  const struct CPointerInputFrame *PreviousFrameByDevice; // r15
  CPointerInfoNode *v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  unsigned int v50; // eax
  unsigned int v51; // ecx
  const int *v52; // r8
  unsigned int v54; // [rsp+40h] [rbp-58h] BYREF
  unsigned int PointerInfoSize; // [rsp+44h] [rbp-54h]
  unsigned __int8 *v56; // [rsp+48h] [rbp-50h]
  PERESOURCE *v57[9]; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v61; // [rsp+C0h] [rbp+28h]

  v9 = 0;
  v56 = a8;
  v54 = 0;
  PointerInfoSize = GetPointerInfoSize(a3);
  v14 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v13) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v13) = 0;
  }
  if ( (_BYTE)v12 || (_BYTE)v13 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      121,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v57, (CTouchProcessor *)((char *)this + 32), 1);
  MsgData = CTouchProcessor::GetMsgData(v15, a2, v16);
  v19 = MsgData;
  if ( MsgData )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
    if ( FrameById )
    {
      v25 = *((unsigned int *)v19 + 8);
      if ( (unsigned int)v25 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v22, v18, v23);
        v25 = *((unsigned int *)v19 + 8);
      }
      v26 = (CPointerInfoNode *)(FrameById[30] + 480 * v25);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v26) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27, v29);
      if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v26) )
      {
        v20 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v18) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v14 = 0;
        }
        if ( (_BYTE)v18 || v14 )
        {
          v21 = 124;
          goto LABEL_48;
        }
      }
      else
      {
        v61 = 1;
        v31 = 1;
        PointerFrameData = CTouchProcessor::GetPointerFrameData(
                             (PERESOURCE *)this,
                             (const struct CPointerInputFrame *)FrameById,
                             v26,
                             a3,
                             a5,
                             &v54,
                             (struct tagPOINTER_INFO *)a8);
        if ( PointerFrameData )
        {
          v36 = v54 * (unsigned __int64)PointerInfoSize;
          if ( v36 > 0xFFFFFFFF )
          {
            PointerFrameData = 0;
          }
          else
          {
            PointerFrameData = 1;
            if ( a5 >= (unsigned int)v36 )
            {
              if ( !(_DWORD)v36 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v33, v32, v35);
              v56 = &a8[(unsigned int)v36];
              a5 -= v36;
            }
            if ( a4 )
            {
              HistoryCount = CPointerInfoNode::GetHistoryCount(v26);
              v38 = *((_DWORD *)v26 + 86);
              v39 = HistoryCount;
              PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                        this,
                                        (const struct CPointerInputFrame *)FrameById);
              while ( PreviousFrameByDevice )
              {
                if ( v39 > 1 )
                {
                  if ( v38 >= *((_DWORD *)PreviousFrameByDevice + 12) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v32, v41);
                  v43 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v38);
                  if ( !(unsigned int)CPointerInfoNode::IsValid(v43) )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v45, v44, v46);
                  ++v61;
                  if ( a5 >= (unsigned int)v36 )
                  {
                    PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                         this,
                                         PreviousFrameByDevice,
                                         a3,
                                         v54,
                                         v36,
                                         a8,
                                         v56);
                    if ( PointerFrameData )
                    {
                      v56 += (unsigned int)v36;
                      a5 -= v36;
                    }
                  }
                  v47 = CPointerInfoNode::GetHistoryCount(v43);
                  if ( v47 != v39 - 1 )
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v47, v48, v49);
                  v50 = CPointerInfoNode::GetHistoryCount(v43);
                  v38 = *((_DWORD *)v43 + 86);
                  v39 = v50;
                  PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
                  if ( PointerFrameData )
                    continue;
                }
                if ( !PointerFrameData )
                  goto LABEL_73;
                break;
              }
              v31 = v61;
            }
            v51 = v54;
            *a6 = v31;
            *a7 = v51;
          }
        }
LABEL_73:
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v32) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v32) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v14 = 0;
        }
        if ( (_BYTE)v32 || v14 )
        {
          v52 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
          LOBYTE(v52) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v32,
            (_DWORD)v52,
            WPP_GLOBAL_Control->DeviceExtension,
            5,
            7,
            125,
            (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
        }
        v9 = PointerFrameData;
      }
    }
    else
    {
      v20 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v18) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v14 = 0;
      if ( (_BYTE)v18 || v14 )
      {
        v21 = 123;
        goto LABEL_48;
      }
    }
  }
  else
  {
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v18) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v14 = 0;
    if ( (_BYTE)v18 || v14 )
    {
      v21 = 122;
LABEL_48:
      v30 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
      LOBYTE(v30) = v14;
      WPP_RECORDER_AND_TRACE_SF_(
        v20->AttachedDevice,
        v18,
        (_DWORD)v30,
        v20->DeviceExtension,
        5,
        7,
        v21,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v57);
  return v9;
}
