/*
 * XREFs of ?GetPointerDataQPCTimeList@CTouchProcessor@@QEAAH_KIPEA_KPEAH@Z @ 0x1C01923F0
 * Callers:
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0195338 (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCCC0 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCEEC (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187434 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01918AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019584C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataQPCTimeList(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 *a4,
        int *a5)
{
  __int64 v7; // rdi
  unsigned int v9; // ebx
  int v10; // edx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r9d
  _QWORD *FrameById; // rsi
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned int HistoryCount; // ebp
  unsigned int v17; // r14d
  unsigned int v18; // edi
  const struct CPointerInputFrame *PreviousFrameByDevice; // rsi
  __int64 v20; // rdi
  __int64 v21; // rcx
  unsigned int v22; // eax
  CInpLockGuard *v24[9]; // [rsp+30h] [rbp-48h] BYREF

  v7 = a2;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      142,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v24, (CTouchProcessor *)((char *)this + 40), 1);
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5046);
  if ( v7 )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v7 + 28));
    if ( FrameById )
    {
      v14 = *(unsigned int *)(v7 + 32);
      if ( (unsigned int)v14 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5065);
        v14 = *(unsigned int *)(v7 + 32);
      }
      v15 = FrameById[17] + 480 * v14;
      if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v15) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5067);
      if ( a5 && *a5 && (*(_DWORD *)(v15 + 180) & 0x400000) == 0 )
      {
        *a5 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v12 = 145;
            goto LABEL_28;
          }
        }
      }
      else
      {
        HistoryCount = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v15);
        if ( a3 <= HistoryCount )
        {
          v17 = 1;
          *a4 = *(_QWORD *)(v15 + 248);
          if ( a3 > 1 )
          {
            v18 = *(_DWORD *)(v15 + 344);
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                      this,
                                      (const struct CPointerInputFrame *)FrameById);
            do
            {
              if ( !PreviousFrameByDevice || HistoryCount <= 1 )
                break;
              if ( v18 >= *((_DWORD *)PreviousFrameByDevice + 12) )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5112);
              v20 = *((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v18;
              if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)v20) )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5114);
              v21 = v17++;
              a4[v21] = *(_QWORD *)(v20 + 248);
              if ( (unsigned int)CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v20) != HistoryCount - 1 )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5124);
              v22 = CPointerInfoNode::GetHistoryCount((CPointerInfoNode *)v20);
              v18 = *(_DWORD *)(v20 + 344);
              HistoryCount = v22;
              PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
            }
            while ( v17 < a3 );
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LOBYTE(v10) = 5;
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              v10,
              7,
              147,
              (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
          }
          v9 = 1;
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v11 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v12 = 146;
            goto LABEL_28;
          }
        }
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v12 = 144;
        goto LABEL_28;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v12 = 143;
LABEL_28:
      LOBYTE(v10) = 5;
      WPP_RECORDER_SF_(v11->DeviceExtension, v10, 7, v12, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v24);
  return v9;
}
