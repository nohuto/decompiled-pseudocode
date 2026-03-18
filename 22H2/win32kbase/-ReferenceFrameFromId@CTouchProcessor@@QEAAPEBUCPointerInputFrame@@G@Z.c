/*
 * XREFs of ?ReferenceFrameFromId@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@G@Z @ 0x1C01D1E38
 * Callers:
 *     ?xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z @ 0x1C01E1258 (-xxxDownlevelInput@CPTPProcessor@@SAJGAEBUtagPTP_DOWNLEVELED_INPUT@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00B9418 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00B9500 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E4550 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z @ 0x1C01C7440 (-GetNonConstMsgData@CTouchProcessor@@AEAAPEAUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z @ 0x1C01D1DD4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@KW4CPointerInputFramePhase@@@Z.c)
 */

const struct CPointerInputFrame *__fastcall CTouchProcessor::ReferenceFrameFromId(
        CTouchProcessor *this,
        unsigned __int16 a2)
{
  unsigned __int16 v2; // bp
  char v4; // bl
  char v5; // r8
  __int64 v6; // rdi
  __int64 ThreadPointerData; // rax
  __int16 v8; // dx
  CTouchProcessor *v9; // rcx
  struct CPointerMsgData *NonConstMsgData; // rax
  CInpLockGuard *v12[8]; // [rsp+40h] [rbp-58h] BYREF

  v2 = a2;
  v4 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v5 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v5 = 0;
  }
  if ( (_BYTE)a2 || v5 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v5,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      299,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v12,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v6 = 0LL;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)gptiCurrent + 1128),
                        v2,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    NonConstMsgData = CTouchProcessor::GetNonConstMsgData(v9, ThreadPointerData);
    if ( NonConstMsgData )
      v6 = CTouchProcessor::ReferenceFrame((__int64)this, *((_DWORD *)NonConstMsgData + 7));
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) == 0
    || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v8) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v4 = 0;
  if ( (_BYTE)v8 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v8,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      4,
      300,
      (__int64)&WPP_2c5ea56a6e6f31fa38ff36b2483c7d67_Traceguids);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v12);
  return (const struct CPointerInputFrame *)v6;
}
