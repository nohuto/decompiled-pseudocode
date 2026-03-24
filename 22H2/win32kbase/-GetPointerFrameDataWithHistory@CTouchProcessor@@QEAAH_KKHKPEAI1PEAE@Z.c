/*
 * XREFs of ?GetPointerFrameDataWithHistory@CTouchProcessor@@QEAAH_KKHKPEAI1PEAE@Z @ 0x1C01931F0
 * Callers:
 *     ?GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z @ 0x1C019363C (-GetPointerFrameInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKHKPEAI1PEAE@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ??0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z @ 0x1C00CCCC0 (--0CInpLockGuardShared@@IEAA@AEAUCInpLockGuard@@_N@Z.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCEEC (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     GetPointerInfoSize @ 0x1C0128CCC (GetPointerInfoSize.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187434 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C01918AC (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIPEAE@Z @ 0x1C0193050 (-GetPointerFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@KIPEAIP.c)
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C019380C (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019584C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsFullyReleased@CPointerInfoNode@@QEBAHXZ @ 0x1C0196864 (-IsFullyReleased@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01970E4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerFrameDataWithHistory(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int *a7,
        struct tagPOINTER_INFO *a8)
{
  unsigned int v9; // ebx
  unsigned int PointerInfoSize; // eax
  int v12; // edx
  unsigned int v13; // r15d
  __int64 v14; // r13
  int v15; // edx
  PDEVICE_OBJECT v16; // rcx
  int v17; // r9d
  _QWORD *FrameById; // r14
  __int64 v19; // rax
  CPointerInfoNode *v20; // rbp
  unsigned int v21; // r12d
  int v22; // edx
  int PointerFrameData; // esi
  unsigned __int64 v24; // rdi
  unsigned int HistoryCount; // eax
  unsigned int v26; // ebp
  unsigned int v27; // r13d
  const struct CPointerInputFrame *PreviousFrameByDevice; // r14
  CPointerInfoNode *v29; // rbp
  unsigned int v30; // eax
  unsigned int v31; // ecx
  unsigned __int8 *v33; // [rsp+48h] [rbp-60h]
  CInpLockGuard *v34[11]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v37; // [rsp+C0h] [rbp+18h]
  int v38; // [rsp+C8h] [rbp+20h]

  v38 = a4;
  v37 = a3;
  v9 = 0;
  v33 = (unsigned __int8 *)a8;
  v36 = 0;
  PointerInfoSize = GetPointerInfoSize(a3);
  v13 = a5;
  v14 = PointerInfoSize;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v12,
      7,
      123,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v34, (CTouchProcessor *)((char *)this + 40), 1);
  if ( a2 )
  {
    FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(a2 + 28));
    if ( FrameById )
    {
      v19 = *(unsigned int *)(a2 + 32);
      if ( (unsigned int)v19 >= *((_DWORD *)FrameById + 12) )
      {
        a5 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4754);
        v19 = *(unsigned int *)(a2 + 32);
      }
      v20 = (CPointerInfoNode *)(FrameById[17] + 480 * v19);
      if ( !(unsigned int)CPointerInfoNode::IsValid(v20) )
      {
        a5 = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4756);
      }
      if ( (unsigned int)CPointerInfoNode::IsFullyReleased(v20) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            v17 = 126;
            goto LABEL_20;
          }
        }
      }
      else
      {
        v21 = 1;
        PointerFrameData = CTouchProcessor::GetPointerFrameData(
                             this,
                             (const struct CPointerInputFrame *)FrameById,
                             v20,
                             v37,
                             v13,
                             &v36,
                             a8);
        if ( PointerFrameData )
        {
          v24 = v36 * v14;
          if ( v24 > 0xFFFFFFFF )
          {
            PointerFrameData = 0;
          }
          else
          {
            PointerFrameData = 1;
            if ( v13 >= (unsigned int)v24 )
            {
              if ( !(_DWORD)v24 )
              {
                a5 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4790);
              }
              v33 = (unsigned __int8 *)a8 + (unsigned int)v24;
              v13 -= v24;
            }
            if ( !v38 )
              goto LABEL_42;
            HistoryCount = CPointerInfoNode::GetHistoryCount(v20);
            v26 = *((_DWORD *)v20 + 86);
            v27 = HistoryCount;
            PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(
                                      this,
                                      (const struct CPointerInputFrame *)FrameById);
            do
            {
              if ( !PreviousFrameByDevice || v27 <= 1 )
                break;
              if ( v26 >= *((_DWORD *)PreviousFrameByDevice + 12) )
              {
                a5 = 0x20000;
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4807);
              }
              v29 = (CPointerInfoNode *)(*((_QWORD *)PreviousFrameByDevice + 17) + 480LL * v26);
              if ( !(unsigned int)CPointerInfoNode::IsValid(v29) )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4809);
              ++v21;
              if ( v13 >= (unsigned int)v24 )
              {
                PointerFrameData = CTouchProcessor::GetPointerHistoryFrameData(
                                     this,
                                     PreviousFrameByDevice,
                                     v37,
                                     v36,
                                     v24,
                                     (unsigned __int8 *)a8,
                                     v33);
                if ( PointerFrameData )
                {
                  v33 += (unsigned int)v24;
                  v13 -= v24;
                }
              }
              if ( (unsigned int)CPointerInfoNode::GetHistoryCount(v29) != v27 - 1 )
                MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4829);
              v30 = CPointerInfoNode::GetHistoryCount(v29);
              v26 = *((_DWORD *)v29 + 86);
              v27 = v30;
              PreviousFrameByDevice = CTouchProcessor::GetPreviousFrameByDevice(this, PreviousFrameByDevice);
            }
            while ( PointerFrameData );
            if ( PointerFrameData )
            {
LABEL_42:
              v31 = v36;
              *a6 = v21;
              *a7 = v31;
            }
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          LOBYTE(v22) = 5;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            v22,
            7,
            127,
            (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
        }
        v9 = PointerFrameData;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        v17 = 125;
        goto LABEL_20;
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v17 = 124;
LABEL_20:
      LOBYTE(v15) = 5;
      WPP_RECORDER_SF_(v16->DeviceExtension, v15, 7, v17, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
    }
  }
  CInpLockGuardShared::~CInpLockGuardShared(v34);
  return v9;
}
