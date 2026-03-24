/*
 * XREFs of ?GetPointerDataWithHistory@CTouchProcessor@@QEAAH_KKKPEAIPEAE@Z @ 0x1C0192BF0
 * Callers:
 *     ?GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z @ 0x1C0193F30 (-GetPointerInfoHistoryInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAIPEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCB60 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCD8C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetPointerInfoSize @ 0x1C01289FC (GetPointerInfoSize.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187504 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C019197C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019591C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ?PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_INFO@@KIPEAUtagPOINTER_INFO@@@Z @ 0x1C01979E4 (-PointerInfoCopyOutHelper@CTouchProcessor@@AEAAHPEAUCPointerInfoNode@@PEAUtagHID_POINTER_DEVICE_.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        struct tagPOINTER_INFO *a6)
{
  int v9; // edx
  __int64 PointerInfoSize; // rbp
  int v11; // esi
  unsigned int v12; // ebx
  int v13; // edx
  PDEVICE_OBJECT v14; // rcx
  int v15; // r9d
  _QWORD *FrameById; // r13
  __int64 v17; // rax
  CPointerInfoNode *v18; // rdi
  unsigned int v19; // r12d
  unsigned int HistoryCount; // eax
  unsigned int v21; // edi
  int v22; // edx
  const struct CPointerInputFrame *PreviousFrameByDevice; // r15
  CPointerInfoNode *v24; // rdi
  unsigned int v25; // eax
  CInpLockGuard *v27[12]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+20h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a3);
  v11 = 1;
  v12 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      7,
      119,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v27, (CTouchProcessor *)((char *)this + 40), 1);
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
    if ( FrameById )
    {
      v17 = *(unsigned int *)(a2 + 32);
      if ( (unsigned int)v17 >= *((_DWORD *)FrameById + 12) )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4625);
        v17 = *(unsigned int *)(a2 + 32);
      }
      v18 = (CPointerInfoNode *)(FrameById[17] + 480 * v17);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v18) )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4627);
      if ( (*(_DWORD *)v18 & 2) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4628);
      v19 = 1;
      if ( a4 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                v18,
                (struct tagHID_POINTER_DEVICE_INFO *)FrameById[19],
                a3,
                PointerInfoSize,
                a6);
        if ( v11 )
        {
          a4 -= PointerInfoSize;
          a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
        }
      }
      HistoryCount = CPointerInfoNode::GetHistoryCount(v18);
      v21 = *((_DWORD *)v18 + 86);
      v30 = HistoryCount;
      PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                this,
                                (const struct CPointerInputFrame *)FrameById);
      if ( v11 )
      {
        do
        {
          if ( !PreviousFrameByDevice || v30 <= 1 )
            break;
          if ( v21 >= *((_DWORD *)PreviousFrameByDevice + 12) )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4657);
          v24 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v21);
          if ( !(unsigned int)CPointerInfoNode::IsValid(v24) )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4659);
          ++v19;
          if ( a4 >= (unsigned int)PointerInfoSize )
          {
            v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                    this,
                    v24,
                    (struct tagHID_POINTER_DEVICE_INFO *)FrameById[19],
                    a3,
                    PointerInfoSize,
                    a6);
            if ( v11 )
            {
              a6 = (struct tagPOINTER_INFO *)((char *)a6 + PointerInfoSize);
              a4 -= PointerInfoSize;
            }
          }
          if ( (unsigned int)CPointerInfoNode::GetHistoryCount(v24) != v30 - 1 )
            MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4678);
          v25 = CPointerInfoNode::GetHistoryCount(v24);
          v21 = *((_DWORD *)v24 + 86);
          v30 = v25;
          PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
        }
        while ( v11 );
        if ( v11 )
          *a5 = v19;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LOBYTE(v22) = 5;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          7,
          122,
          (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
      }
      v12 = v11;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v15 = 121;
        goto LABEL_12;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v15 = 120;
LABEL_12:
      LOBYTE(v13) = 5;
      WPP_RECORDER_SF_(v14->DeviceExtension, v13, 7, v15, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v27);
  return v12;
}
