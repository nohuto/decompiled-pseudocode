/*
 * XREFs of ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C018BFCC
 * Callers:
 *     ?CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z @ 0x1C01A5850 (-CreateGestureCache@CPTPProcessor@@AEAAXIPEBUPTPEnginePointerNode@@_N@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0028440 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     HMAssignmentLock @ 0x1C0030310 (HMAssignmentLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00454C0 (HMValidateHandleNoSecure.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCAC0 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCB00 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z @ 0x1C018754C (--4CPointerInfoNode@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z @ 0x1C01878EC (--4CPointerQFrame@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z @ 0x1C0188224 (-AllocPointerInfoNodeList@CTouchProcessor@@AEAAPEAUCPointerInfoNode@@K@Z.c)
 *     ?AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z @ 0x1C0188298 (-AllocPointerQFrameList@CTouchProcessor@@AEAAPEAUCPointerQFrame@@K@Z.c)
 *     ?CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z @ 0x1C018C2D4 (-CopyRawDataList@CTouchProcessor@@IEAAPEAUCPointerRawData@@PEBUCPointerInputFrame@@@Z.c)
 *     ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C018F530 (-FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z.c)
 *     ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C018F6E8 (-FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C01D0360 (ApiSetResetLastSeenFrameId.c)
 */

LARGE_INTEGER *__fastcall CTouchProcessor::CopyPTPPointerInputFrame(
        struct _KTHREAD **this,
        struct CPointerInputFrame *a2,
        unsigned __int64 a3)
{
  LARGE_INTEGER *v6; // rax
  LARGE_INTEGER *v7; // rbx
  LARGE_INTEGER *v8; // rdi
  LARGE_INTEGER *v9; // rax
  struct CPointerInfoNode *v10; // rax
  CTouchProcessor *v11; // rcx
  unsigned int v12; // ebp
  unsigned int v13; // edx
  struct CPointerQFrame *v14; // rax
  unsigned int i; // ebp
  struct CPointerRawData *v16; // rax
  __int64 v17; // r14
  struct A0xad387374::CFrameIdGenerator *v18; // r14
  int v19; // ebp
  struct CPointerInfoNode *QuadPart; // rdx
  struct CPointerQFrame *v21; // rdx
  __int64 *v23[2]; // [rsp+20h] [rbp-A8h] BYREF
  CInpLockGuard *v24[6]; // [rsp+30h] [rbp-98h] BYREF
  CInpLockGuard *v25[8]; // [rsp+60h] [rbp-68h] BYREF

  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v24, (struct CInpLockGuard *)(this + 5), 0LL);
  v6 = (LARGE_INTEGER *)Win32AllocPoolZInit(0xA0uLL, 1718645589LL);
  v7 = 0LL;
  v8 = v6;
  if ( v6 )
  {
    *(_OWORD *)&v6->LowPart = *(_OWORD *)a2;
    *(_OWORD *)&v6[2].LowPart = *((_OWORD *)a2 + 1);
    *(_OWORD *)&v6[4].LowPart = *((_OWORD *)a2 + 2);
    *(_OWORD *)&v6[6].LowPart = *((_OWORD *)a2 + 3);
    *(_OWORD *)&v6[8].LowPart = *((_OWORD *)a2 + 4);
    *(_OWORD *)&v6[10].LowPart = *((_OWORD *)a2 + 5);
    *(_OWORD *)&v6[12].LowPart = *((_OWORD *)a2 + 6);
    *(_OWORD *)&v6[14].LowPart = *((_OWORD *)a2 + 7);
    *(_OWORD *)&v6[16].LowPart = *((_OWORD *)a2 + 8);
    *(_OWORD *)&v6[18].LowPart = *((_OWORD *)a2 + 9);
    v9 = v6 + 1;
    v8[19].QuadPart = 0LL;
    v9[1].QuadPart = (LONGLONG)v9;
    v9->QuadPart = (LONGLONG)v9;
    v8[4].QuadPart = (LONGLONG)&v8[3];
    v8[3].QuadPart = (LONGLONG)&v8[3];
    v8[17].QuadPart = 0LL;
    v8[18].QuadPart = 0LL;
    v8[16].QuadPart = 0LL;
    v10 = CTouchProcessor::AllocPointerInfoNodeList(this, *((_DWORD *)a2 + 12));
    v8[17].QuadPart = (LONGLONG)v10;
    if ( !v10 )
      goto LABEL_15;
    v8[9] = KeQueryPerformanceCounter(0LL);
    v12 = 0;
    v13 = *((_DWORD *)a2 + 12);
    if ( v13 )
    {
      do
      {
        CPointerInfoNode::operator=(v8[17].QuadPart + 480LL * v12, 480LL * v12 + *((_QWORD *)a2 + 17));
        v13 = *((_DWORD *)a2 + 12);
        ++v12;
      }
      while ( v12 < v13 );
    }
    v14 = CTouchProcessor::AllocPointerQFrameList(this, v13);
    v8[18].QuadPart = (LONGLONG)v14;
    if ( !v14 )
      goto LABEL_15;
    for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
      CPointerQFrame::operator=(v8[18].QuadPart + 160LL * i, 160LL * i + *((_QWORD *)a2 + 18));
    if ( !*((_QWORD *)a2 + 16)
      || (v16 = CTouchProcessor::CopyRawDataList((CTouchProcessor *)this, a2), (v8[16].QuadPart = (LONGLONG)v16) != 0) )
    {
      v17 = HMValidateHandleNoSecure(a3, 19);
      if ( !v17 )
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2802);
      v23[1] = *(__int64 **)(v17 + 480);
      v23[0] = (__int64 *)&v8[19];
      HMAssignmentLock(v23);
      v18 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
      CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
        (CInpLockGuardExclusiveIfNeeded *)v25,
        (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
        0LL);
      v19 = (*(_DWORD *)v18)++;
      if ( v19 == -1 )
      {
        *(_DWORD *)v18 = 1;
        ApiSetResetLastSeenFrameId();
      }
      CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v25);
      *((_DWORD *)a2 + 10) = v19;
      v7 = v8;
    }
    else
    {
LABEL_15:
      QuadPart = (struct CPointerInfoNode *)v8[17].QuadPart;
      if ( QuadPart )
      {
        if ( QuadPart == *((struct CPointerInfoNode **)a2 + 17) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2821);
          QuadPart = (struct CPointerInfoNode *)v8[17].QuadPart;
        }
        CTouchProcessor::FreePointerInfoList(v11, QuadPart, v8[6].LowPart);
      }
      v21 = (struct CPointerQFrame *)v8[18].QuadPart;
      if ( v21 )
      {
        if ( v21 == *((struct CPointerQFrame **)a2 + 18) )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2826);
          v21 = (struct CPointerQFrame *)v8[18].QuadPart;
        }
        CTouchProcessor::FreePointerQFrameList(v11, v21, v8[6].LowPart);
      }
      Win32FreePool((__int64)v8);
    }
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v24);
  return v7;
}
