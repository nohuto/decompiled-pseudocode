/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01FB1D4
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C007D3C0 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00C9BD0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00C9C40 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00F1FC6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00F295E (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00F2FF2 (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01E3524 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01E35FC (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C01E3988 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01F9284 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01FAFB8 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01FBA30 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01FBF9C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C02018D0 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C0205830 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C0245698 (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C0246D68 (ApiSetValidatePointerOffset.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        struct _KTHREAD **a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rdi
  unsigned int v9; // r14d
  int v10; // edx
  int v11; // edx
  int v12; // r8d
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  CTouchProcessor *v22; // rcx
  unsigned __int64 v24; // rdx
  struct tagPOINT v25; // rax
  unsigned __int16 v26; // dx
  struct tagPOINT v27; // [rsp+30h] [rbp-59h] BYREF
  struct CInputDest *v28; // [rsp+38h] [rbp-51h] BYREF
  _BYTE v29[40]; // [rsp+40h] [rbp-49h] BYREF
  CInpLockGuard *v30; // [rsp+68h] [rbp-21h]
  _BYTE v31[112]; // [rsp+70h] [rbp-19h] BYREF
  struct tagPOINT v33; // [rsp+108h] [rbp+7Fh] BYREF

  v4 = gptiCurrent;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, gptiCurrent) )
  {
    v33.x = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12471);
  }
  if ( (*((_DWORD *)v4 + 318) & 0x2000) != 0 || (v9 = 0, (*((_DWORD *)v4 + 319) & 0x40) != 0) )
    v9 = 1;
  v33.x = CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
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
    v26 = *(_WORD *)(a4 + 172);
    v33 = 0LL;
    CTouchProcessor::GetPointerOffset(a1, v26, &v33);
    v25 = v33;
    goto LABEL_19;
  }
  *(_DWORD *)(a4 + 4) = v12 | v11;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)(a4 + 352)) )
  {
    v27 = 0LL;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v31, (struct CInputDest *)(a4 + 352), v13, v14);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
      (CInpUnlockGuardExclusive *)v29,
      (struct CInpLockGuard *)(a1 + 4),
      0LL,
      v15);
    ApiSetPerformTargetingWithinPwnd(a4 + 352, a4 + 160, &v27);
    CInpLockGuard::LockExclusive(v30);
    CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v29, v16, v17, v18);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v31, v19, v20, v21);
    if ( !CTouchProcessor::GetQueueForCurrentNode(a1, v4, v9, a3, v33.x, a2) )
      return 1LL;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v22, v4, v9, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    v24 = *(_QWORD *)(a4 + 16);
    v28 = 0LL;
    CTouchProcessor::RecheckPointerCapture((CTouchProcessor *)a1, v24, v9, &v28, (int *)&v33);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                         *(_QWORD *)(a4 + 200),
                         a4 + 160,
                         v27,
                         &v27) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 172), &v27);
      v25 = v27;
LABEL_19:
      *(struct tagPOINT *)(a4 + 148) = v25;
    }
  }
  return 0LL;
}
