/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C01C97E0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C01CCE84 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00DC614 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00DC680 (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C01BD28C (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01C9028 (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C01CD608 (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  unsigned int v6; // r12d
  __int64 v7; // rsi
  unsigned int v9; // ebx
  char v10; // di
  __int64 v11; // rdx
  CTouchProcessor *v12; // rcx
  __int64 v13; // r8
  const struct CPointerMsgData *MsgData; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  const struct CPointerMsgData *v17; // rsi
  PDEVICE_OBJECT v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rcx
  _QWORD *FrameById; // rbp
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned int HistoryCount; // r14d
  unsigned int v26; // r15d
  unsigned int v27; // esi
  __int64 v28; // rcx
  const struct CPointerInputFrame *PreviousFrameByDevice; // rbp
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // eax
  __int16 v40; // [rsp+30h] [rbp-48h]
  PERESOURCE *v41[2]; // [rsp+40h] [rbp-38h] BYREF

  v6 = a3;
  v7 = a2;
  v9 = 0;
  v10 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(a3) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(a3) = 0;
  }
  if ( (_BYTE)a2 || (_BYTE)a3 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      140,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v41, (CTouchProcessor *)((char *)this + 32), 1);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13);
  MsgData = CTouchProcessor::GetMsgData(v12, v7, v13);
  v17 = MsgData;
  if ( MsgData )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *((_DWORD *)MsgData + 7));
    if ( FrameById )
    {
      v22 = *((unsigned int *)v17 + 8);
      if ( (unsigned int)v22 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v20, v15, v16);
        v22 = *((unsigned int *)v17 + 8);
      }
      v23 = FrameById[30] + 480 * v22;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v23) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v15, v16);
      if ( a5 && *a5 && (*(_DWORD *)(v23 + 180) & 0x400000) == 0 )
      {
        *a5 = 0;
        v18 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
          || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v15) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          v10 = 0;
        }
        if ( (_BYTE)v15 || v10 )
        {
          v19 = 143;
          goto LABEL_52;
        }
      }
      else
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v23);
        if ( v6 <= HistoryCount )
        {
          *a4 = *(_QWORD *)(v23 + 248);
          v26 = 1;
          if ( v6 > 1 )
          {
            v27 = *(_DWORD *)(v23 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                      this,
                                      (const struct CPointerInputFrame *)FrameById);
            do
            {
              if ( !PreviousFrameByDevice || HistoryCount <= 1 )
                break;
              if ( v27 >= *((_DWORD *)PreviousFrameByDevice + 12) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v15, v16);
              v30 = *((_QWORD *)PreviousFrameByDevice + 30) + 480LL * v27;
              if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v30) )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v32, v31, v33);
              v34 = v26++;
              a4[v34] = *(_QWORD *)(v30 + 248);
              v35 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v30);
              if ( v35 != HistoryCount - 1 )
                MicrosoftTelemetryAssertTriggeredNoArgsKM(v35, v36, v37);
              v38 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v30);
              v27 = *(_DWORD *)(v30 + 344);
              HistoryCount = v38;
              PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
            }
            while ( v26 < v6 );
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v15) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v16) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v16) = 0;
          }
          if ( (_BYTE)v15 || (_BYTE)v16 )
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v15,
              v16,
              WPP_GLOBAL_Control->DeviceExtension,
              5,
              7,
              145,
              (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
          v9 = 1;
        }
        else
        {
          v18 = WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
            || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v15) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v10 = 0;
          }
          if ( (_BYTE)v15 || v10 )
          {
            v40 = 144;
            goto LABEL_64;
          }
        }
      }
    }
    else
    {
      v18 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        v10 = 0;
      if ( (_BYTE)v15 || v10 )
      {
        v19 = 142;
        goto LABEL_52;
      }
    }
  }
  else
  {
    v18 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      v10 = 0;
    if ( (_BYTE)v15 || v10 )
    {
      v19 = 141;
LABEL_52:
      v40 = v19;
LABEL_64:
      LOBYTE(v16) = v10;
      WPP_RECORDER_AND_TRACE_SF_(
        v18->AttachedDevice,
        v15,
        v16,
        v18->DeviceExtension,
        5,
        7,
        v40,
        (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v41);
  return v9;
}
