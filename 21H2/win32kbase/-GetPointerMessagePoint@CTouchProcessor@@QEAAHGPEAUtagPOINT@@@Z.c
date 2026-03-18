/*
 * XREFs of ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C01CBC10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z @ 0x1C00DC94C (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@W4CPointerInputFramePhase@@@Z.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C00E8380 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z @ 0x1C01C9164 (-GetMsgData@CTouchProcessor@@AEAAPEBUCPointerMsgData@@_K@Z.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C01D30A4 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessagePoint(
        CTouchProcessor *this,
        unsigned __int16 a2,
        struct tagPOINT *a3)
{
  struct tagPOINT *v3; // r14
  unsigned __int16 v4; // di
  char v6; // bl
  struct tagTHREADINPUTPOINTERLIST *v7; // rdx
  unsigned int v8; // ebp
  __int64 ThreadPointerData; // rax
  const struct CPointerInputFrame *v10; // rdx
  CTouchProcessor *v11; // rcx
  __int64 v12; // r8
  const struct CPointerMsgData *MsgData; // rax
  const struct CPointerMsgData *v14; // rdi
  __int64 v15; // rax
  const int *v16; // r8
  CInpLockGuard *v18[6]; // [rsp+40h] [rbp-58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 1;
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
      (_DWORD)a3,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      100,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  CInpLockGuardExclusive::CInpLockGuardExclusive(
    (CInpLockGuardExclusive *)v18,
    (CTouchProcessor *)((char *)this + 32),
    0LL);
  v7 = (struct tagTHREADINFO *)((char *)gptiCurrent + 1112);
  *v3 = 0LL;
  v8 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(this, v7, v4, 0LL, 0LL, 0LL);
  if ( ThreadPointerData )
  {
    MsgData = CTouchProcessor::GetMsgData(v11, ThreadPointerData, v12);
    v14 = MsgData;
    if ( MsgData )
    {
      v10 = CTouchProcessor::ReferenceFrame(this, *((_DWORD *)MsgData + 7));
      if ( v10 )
      {
        v15 = *((_QWORD *)v10 + 30) + 480LL * *((unsigned int *)v14 + 8);
        if ( v15 )
        {
          v8 = 1;
          *v3 = *(struct tagPOINT *)(v15 + 200);
        }
        CTouchProcessor::UnreferenceFrame((__int64)this, (__int64)v10, v12);
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v10) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED || !LOWORD(WPP_GLOBAL_Control->DeviceType) )
    v6 = 0;
  if ( (_BYTE)v10 || v6 )
  {
    v16 = &WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids;
    LOBYTE(v16) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_WORD)v10,
      (_DWORD)v16,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      7,
      101,
      (__int64)&WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive(v18, (__int64)v10, v12);
  return v8;
}
