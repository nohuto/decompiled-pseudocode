/*
 * XREFs of ?GetPointerDataTimes@CTouchProcessor@@QEAAH_KIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C0192870
 * Callers:
 *     ?GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x1C01937E4 (-GetPointerFrameTimesInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagTELEMETRY_POINTE.c)
 * Callees:
 *     UserSetLastError @ 0x1C00388BC (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     ?FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C00CCD8C (-FindFrameById@CTouchProcessor@@AEAAPEAUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z @ 0x1C01874B4 (--0CInpLockGuardShared@@QEAA@AEAUCInpLockGuard@@@Z.c)
 *     ??1CInpLockGuardShared@@QEAA@XZ @ 0x1C0187504 (--1CInpLockGuardShared@@QEAA@XZ.c)
 *     ?GetHistoryCount@CPointerInfoNode@@QEBAKXZ @ 0x1C019197C (-GetHistoryCount@CPointerInfoNode@@QEBAKXZ.c)
 *     ?GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z @ 0x1C019591C (-GetPreviousFrameByDevice@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@PEBU2@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerDataTimes(
        CTouchProcessor *this,
        __int64 a2,
        unsigned int a3,
        struct tagTELEMETRY_POINTER_FRAME_TIMES *a4)
{
  __int64 v5; // r13
  int v7; // edx
  PDEVICE_OBJECT v8; // rcx
  int v9; // r9d
  _QWORD *FrameById; // r15
  __int64 v11; // rax
  CPointerInfoNode *v12; // r12
  unsigned int HistoryCount; // r12d
  unsigned int v15; // r13d
  const struct CPointerInputFrame *i; // rax
  __int64 v17; // rdx
  CInpLockGuard *v18[9]; // [rsp+50h] [rbp-48h] BYREF

  v5 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      7,
      148,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardShared::CInpLockGuardShared((CInpLockGuardShared *)v18, (CTouchProcessor *)((char *)this + 40));
  if ( !a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5156);
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v9 = 149;
LABEL_24:
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(v8->DeviceExtension, v7, 7, v9, (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
LABEL_25:
    CInpLockGuardShared::~CInpLockGuardShared(v18);
    return 0LL;
  }
  FrameById = CTouchProcessor::FindFrameById(this, *(_DWORD *)(v5 + 28));
  if ( !FrameById )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v9 = 150;
    goto LABEL_24;
  }
  v11 = *(unsigned int *)(v5 + 32);
  if ( (unsigned int)v11 >= *((_DWORD *)FrameById + 12) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5175);
    v11 = *(unsigned int *)(v5 + 32);
  }
  v12 = (CPointerInfoNode *)(FrameById[17] + 480 * v11);
  if ( !(unsigned int)CPointerInfoNode::IsValid(v12) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5177);
  if ( (*(_DWORD *)v12 & 2) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 5178);
  HistoryCount = CPointerInfoNode::GetHistoryCount(v12);
  if ( a3 > HistoryCount )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_25;
    v8 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_25;
    v9 = 151;
    goto LABEL_24;
  }
  *(_OWORD *)a4 = *(_OWORD *)(FrameById + 9);
  *((_OWORD *)a4 + 1) = *(_OWORD *)(FrameById + 11);
  *((_QWORD *)a4 + 4) = FrameById[13];
  v15 = 1;
  if ( a3 > 1 )
  {
    for ( i = CTouchProcessor::GetPreviousFrameByDevice(this, (const struct CPointerInputFrame *)FrameById);
          v15 < a3 && i && HistoryCount > 1;
          i = CTouchProcessor::GetPreviousFrameByDevice(this, i) )
    {
      v17 = 5LL * v15;
      *(_OWORD *)((char *)a4 + 8 * v17) = *(_OWORD *)(FrameById + 9);
      *(_OWORD *)((char *)a4 + 8 * v17 + 16) = *(_OWORD *)(FrameById + 11);
      *((_QWORD *)a4 + v17 + 4) = FrameById[13];
      ++v15;
      --HistoryCount;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      7,
      152,
      (__int64)&WPP_4ea2b35ef3aa38c2c6a59c3c8ae69e8c_Traceguids);
  }
  CInpLockGuardShared::~CInpLockGuardShared(v18);
  return 1LL;
}
