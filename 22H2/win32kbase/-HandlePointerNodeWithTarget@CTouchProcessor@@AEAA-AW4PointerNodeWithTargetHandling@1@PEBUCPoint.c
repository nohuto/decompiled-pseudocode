/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C0196188
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019CA50 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004597C (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009D00C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009F974 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C00AA6E8 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCD08 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187454 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C0194558 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C0195C18 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C0195F70 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C0196A18 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C0196FD4 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C019AAAC (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C019B398 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C019E550 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C01CFB18 (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C01D13C0 (ApiSetValidatePointerOffset.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        struct _KTHREAD **a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  int v9; // r15d
  int v10; // edx
  int v11; // edx
  int v12; // r8d
  CTouchProcessor *v13; // rcx
  unsigned __int64 v15; // rdx
  struct tagPOINT v16; // rax
  struct tagPOINT v17; // [rsp+38h] [rbp-49h] BYREF
  struct CInputDest *v18; // [rsp+40h] [rbp-41h] BYREF
  PERESOURCE *v19[6]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v20[64]; // [rsp+78h] [rbp-9h] BYREF
  struct tagPOINT v21; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = gptiCurrent;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, gptiCurrent) )
  {
    v21.x = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 11740);
  }
  v9 = *((_DWORD *)v4 + 308) & 0x2000;
  v21.x = CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4);
  v10 = *(_DWORD *)(a4 + 4);
  if ( (v10 & 0x200) == 0
    || (v10 & 0x800) != 0
    || *(_DWORD *)(a4 + 168) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 352)) != v4 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 180) & 0x10000) == 0 )
  {
    v21 = 0LL;
    CTouchProcessor::GetPointerOffset(a1, *(_WORD *)(a4 + 172), &v21);
    v16 = v21;
    goto LABEL_16;
  }
  *(_DWORD *)(a4 + 4) = v12 | v11;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)(a4 + 352)) )
  {
    v17 = 0LL;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v20, (struct CInputDest *)(a4 + 352));
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v19,
      (struct CInpLockGuard *)(a1 + 5),
      0LL);
    ApiSetPerformTargetingWithinPwnd(a4 + 352, a4 + 160, &v17);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v19);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v20);
    if ( !CTouchProcessor::GetQueueForCurrentNode(a1, v4, v9 != 0, a3, v21.x, a2) )
      return 1LL;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v13, v4, v9 != 0, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    v15 = *(_QWORD *)(a4 + 16);
    v18 = 0LL;
    CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)a1, v15, v9 != 0, &v18, (int *)&v21);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                         *(_QWORD *)(a4 + 200),
                         a4 + 160,
                         v17,
                         &v17) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 172), &v17);
      v16 = v17;
LABEL_16:
      *(struct tagPOINT *)(a4 + 148) = v16;
    }
  }
  return 0LL;
}
