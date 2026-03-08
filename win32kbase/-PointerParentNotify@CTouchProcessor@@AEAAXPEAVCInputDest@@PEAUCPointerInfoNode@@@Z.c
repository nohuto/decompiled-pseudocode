/*
 * XREFs of ?PointerParentNotify@CTouchProcessor@@AEAAXPEAVCInputDest@@PEAUCPointerInfoNode@@@Z @ 0x1C01FCB8C
 * Callers:
 *     ?SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C02038B0 (-SetPointerFrameTargetWindows@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00C9BD0 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00C9C40 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00F1FC6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C00F2F0E (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z @ 0x1C01E3524 (--0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z.c)
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C01E35FC (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     ?IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z @ 0x1C01FBF9C (-IsTargetSetForRetrieval@CPointerInfoNode@@QEBAHPEAUtagTHREADINFO@@@Z.c)
 *     ApiSetEditionPointerParentNotify @ 0x1C0241170 (ApiSetEditionPointerParentNotify.c)
 */

void __fastcall CTouchProcessor::PointerParentNotify(struct _KTHREAD **this, struct CInputDest *a2, void **a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  void *v9; // r8
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _OWORD v22[7]; // [rsp+28h] [rbp-99h] BYREF
  _BYTE v23[40]; // [rsp+98h] [rbp-29h] BYREF
  CInpLockGuard *v24; // [rsp+C0h] [rbp-1h]
  _BYTE v25[64]; // [rsp+C8h] [rbp+7h] BYREF

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12557);
  if ( !(unsigned int)CPointerInfoNode::IsValid((CPointerInfoNode *)a3) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12561);
  if ( (unsigned int)CPointerInfoNode::IsTargetSetForRetrieval((CPointerInfoNode *)a3, gptiCurrent) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 12562);
  CThreadLockInputDest::CThreadLockInputDest((CThreadLockInputDest *)v25, a2, v6, v7);
  CInpUnlockGuardExclusive::CInpUnlockGuardExclusive(
    (CInpUnlockGuardExclusive *)v23,
    (struct CInpLockGuard *)(this + 4),
    a3[2],
    v8);
  v9 = a3[2];
  v10 = *((_OWORD *)a2 + 1);
  v22[0] = *(_OWORD *)a2;
  v11 = *((_OWORD *)a2 + 2);
  v22[1] = v10;
  v12 = *((_OWORD *)a2 + 3);
  v22[2] = v11;
  v13 = *((_OWORD *)a2 + 4);
  v22[3] = v12;
  v14 = *((_OWORD *)a2 + 5);
  v22[4] = v13;
  v15 = *((_OWORD *)a2 + 6);
  v22[5] = v14;
  v22[6] = v15;
  ApiSetEditionPointerParentNotify(v22, a3, v9);
  CInpLockGuard::LockExclusive(v24);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v23, v16, v17, v18);
  CThreadLockInputDest::~CThreadLockInputDest((CThreadLockInputDest *)v25, v19, v20, v21);
}
