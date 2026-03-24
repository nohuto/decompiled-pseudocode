/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C0197AA8
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C019CB20 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C009C24C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C009EBB4 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00CCBA8 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187524 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01970A4 (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01971B4 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C01CCC90 (ApiSetEditionPointerParentNotify.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(struct _KTHREAD **this, struct CInputDest *a2, void **a3)
{
  void *v6; // r8
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  _OWORD v13[7]; // [rsp+28h] [rbp-99h] BYREF
  PERESOURCE *v14[6]; // [rsp+98h] [rbp-29h] BYREF
  _BYTE v15[64]; // [rsp+C8h] [rbp+7h] BYREF

  if ( this[6] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 11825);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 11829);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 11830);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v15, a2);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
    (CInpUnlockGuardExclusive *)v14,
    (struct CInpLockGuard *)(this + 5),
    a3[2]);
  v6 = a3[2];
  v7 = *((_OWORD *)a2 + 1);
  v13[0] = *(_OWORD *)a2;
  v8 = *((_OWORD *)a2 + 2);
  v13[1] = v7;
  v9 = *((_OWORD *)a2 + 3);
  v13[2] = v8;
  v10 = *((_OWORD *)a2 + 4);
  v13[3] = v9;
  v11 = *((_OWORD *)a2 + 5);
  v13[4] = v10;
  v12 = *((_OWORD *)a2 + 6);
  v13[5] = v11;
  v13[6] = v12;
  ApiSetEditionPointerParentNotify(v13, a3, v6);
  CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(v14);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v15);
}
