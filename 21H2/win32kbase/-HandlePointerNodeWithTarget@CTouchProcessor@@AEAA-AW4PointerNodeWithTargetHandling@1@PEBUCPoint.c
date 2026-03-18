/*
 * XREFs of ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C01CDA24
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01D5850 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C003C340 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0042044 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C00422E0 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C00BCA10 (-IsIndependentInputWindow@CInputDest@@QEBA_NXZ.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00E7C96 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNode@@@Z @ 0x1C00E82B6 (-GetQueueForCurrentNode@CTouchProcessor@@AEAAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUCPointerInfoNod.c)
 *     ?RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z @ 0x1C00E868C (-RecheckPointerCapture@CTouchProcessor@@AEAAH_KHPEAPEAVCInputDest@@PEAH@Z.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z @ 0x1C01CBDE4 (-GetPointerOffset@CTouchProcessor@@AEAAHGPEAUtagPOINT@@@Z.c)
 *     ?HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z @ 0x1C01CD840 (-HandleMTNodeTargetWindow@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@@Z.c)
 *     ?IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z @ 0x1C01CE1F4 (-IsMessageDelegated@CPointerInfoNode@@QEBAHI@Z.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01CE784 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z @ 0x1C01D3C18 (-RevalidateFrameProcessing@CTouchProcessor@@AEAAHPEAUtagTHREADINFO@@HPEBUCPointerInfoNode@@H@Z.c)
 *     ?SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z @ 0x1C01D71B0 (-SetPointerOffset@CTouchProcessor@@AEAAHGPEBUtagPOINT@@@Z.c)
 *     ApiSetPerformTargetingWithinPwnd @ 0x1C020E57C (ApiSetPerformTargetingWithinPwnd.c)
 *     ApiSetValidatePointerOffset @ 0x1C02100B4 (ApiSetValidatePointerOffset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::HandlePointerNodeWithTarget(
        struct _KTHREAD **a1,
        CPointerInfoNode *a2,
        unsigned int a3,
        __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // r15d
  __int64 v13; // r8
  int v14; // edx
  int v15; // edx
  int v16; // r8d
  __int64 v17; // r8
  CTouchProcessor *v18; // rcx
  __int64 v20; // rdx
  struct tagPOINT v21; // rax
  struct tagPOINT v22; // [rsp+38h] [rbp-49h] BYREF
  struct CInputDest *v23; // [rsp+40h] [rbp-41h] BYREF
  PERESOURCE *v24[6]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v25[64]; // [rsp+78h] [rbp-9h] BYREF
  struct tagPOINT v26; // [rsp+100h] [rbp+7Fh] BYREF

  v4 = gptiCurrent;
  if ( !(unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a4, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
  v12 = *((_DWORD *)v4 + 314) & 0x2000;
  v26.x = CPointerInfoNode::IsMessageDelegated(a2, a3) != 0;
  CTouchProcessor::HandleMTNodeTargetWindow(a1, (struct CPointerInfoNode *)a4, v13);
  v14 = *(_DWORD *)(a4 + 4);
  if ( (v14 & 0x200) == 0
    || (v14 & 0x800) != 0
    || *(_DWORD *)(a4 + 168) != 2
    || CInputDest::GetThreadInfo((CInputDest *)(a4 + 352)) != v4 )
  {
    return 0LL;
  }
  if ( (*(_DWORD *)(a4 + 180) & 0x10000) == 0 )
  {
    v26 = 0LL;
    CTouchProcessor::GetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 172), &v26);
    v21 = v26;
    goto LABEL_16;
  }
  *(_DWORD *)(a4 + 4) = v16 | v15;
  if ( !CInputDest::IsIndependentInputWindow((CInputDest *)(a4 + 352)) )
  {
    v22 = 0LL;
    CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v25, (struct CInputDest *)(a4 + 352), v17);
    CInpUnlockGuardExclusive::CInpUnlockGuardExclusive((CInpUnlockGuardExclusive *)v24, a1 + 4, 0LL);
    ApiSetPerformTargetingWithinPwnd(a4 + 352, a4 + 160, &v22);
    CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v24);
    CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v25);
    if ( !CTouchProcessor::GetQueueForCurrentNode(a1, v4, v12 != 0, a3, v26.x, a2) )
      return 1LL;
    if ( !CTouchProcessor::RevalidateFrameProcessing(v18, v4, v12 != 0, (const struct CPointerInfoNode *)a4, 1) )
      return 2LL;
    v20 = *(_QWORD *)(a4 + 16);
    v23 = 0LL;
    CTouchProcessor::RecheckPointerCapture(a1, v20, v12 != 0, &v23, (int *)&v26);
    if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ApiSetValidatePointerOffset)(
                         *(_QWORD *)(a4 + 200),
                         a4 + 160,
                         v22,
                         &v22) )
    {
      CTouchProcessor::SetPointerOffset((CTouchProcessor *)a1, *(_WORD *)(a4 + 172), &v22);
      v21 = v22;
LABEL_16:
      *(struct tagPOINT *)(a4 + 148) = v21;
    }
  }
  return 0LL;
}
