/*
 * XREFs of ?GetQueue@CPointerInfoNode@@QEAAPEAVCInputDest@@PEAH@Z @ 0x1C0195A58
 * Callers:
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C0188B24 (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0195CE8 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019CB20 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0042894 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0042A50 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     ??4CInputDest@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00435A0 (--4CInputDest@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004450C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C00C5070 (__security_check_cookie.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCBA8 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0182DF0 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187524 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C0191F04 (-GetPointerCapture@CTouchProcessor@@AEAAX_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerSpeedHitTest @ 0x1C01CCDBC (ApiSetEditionPointerSpeedHitTest.c)
 */

struct CInputDest *__fastcall CPointerInfoNode::GetQueue(CPointerInfoNode *this, int *a2)
{
  __int64 v5; // rdx
  CInputDest *v6; // rsi
  _OWORD *v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  CInputDest *v14; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v15[7]; // [rsp+40h] [rbp-C0h] BYREF
  PERESOURCE *v16[6]; // [rsp+B0h] [rbp-50h] BYREF
  char v17; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v18[16]; // [rsp+150h] [rbp+50h] BYREF

  if ( !(unsigned int)CPointerInfoNode::IsValid(this) )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 532);
  }
  *a2 = 0;
  if ( *((_DWORD *)this + 111) )
  {
    if ( CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 1) )
    {
      if ( !CInputDest::IsEqualByWindowHandle((__int64)this + 352, *((_QWORD *)this + 24), 2) )
      {
        *a2 = 1;
        return 0LL;
      }
      if ( !CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) )
      {
        LODWORD(v14) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 554);
      }
      if ( !*((_QWORD *)CInputDest::GetThreadInfo((CPointerInfoNode *)((char *)this + 352)) + 54) )
      {
        LODWORD(v14) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 555);
      }
      return (CPointerInfoNode *)((char *)this + 352);
    }
    if ( (*(_DWORD *)this & 0x400) != 0 )
      return 0LL;
  }
  v5 = *((_QWORD *)this + 2);
  v14 = 0LL;
  CTouchProcessor::GetPointerCapture((struct _KTHREAD **)gpTouchProcessor, v5, 0, &v14, 0LL);
  v6 = v14;
  if ( !v14 )
  {
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v16,
      (CTouchProcessor *)((char *)gpTouchProcessor + 40),
      0LL);
    v7 = (_OWORD *)ApiSetEditionPointerSpeedHitTest((unsigned int)&v17, (int)this + 160, 0, 0, 0LL, 0LL);
    v8 = v7[1];
    v15[0] = *v7;
    v9 = v7[2];
    v15[1] = v8;
    v10 = v7[3];
    v15[2] = v9;
    v11 = v7[4];
    v15[3] = v10;
    v12 = v7[5];
    v15[4] = v11;
    v13 = v7[6];
    v15[5] = v12;
    v15[6] = v13;
    CInputDest::CInputDest((CInputDest *)v18, (const struct tagINPUTDEST *)v15);
    CInputDest::operator=((__int64)this + 352, v18);
    CInputDest::SetEmpty((CInputDest *)v18);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v16);
    if ( !*((_DWORD *)this + 88) )
      return 0LL;
    return (CPointerInfoNode *)((char *)this + 352);
  }
  if ( !CInputDest::GetThreadInfo(v14) )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 577);
  }
  if ( !*((_QWORD *)CInputDest::GetThreadInfo(v6) + 54) )
  {
    LODWORD(v14) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 578);
  }
  return v6;
}
