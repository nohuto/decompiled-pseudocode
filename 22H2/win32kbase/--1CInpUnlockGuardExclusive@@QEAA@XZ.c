/*
 * XREFs of ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C00D41B0
 * Callers:
 *     ?DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPointerInputFrame@@PEAXHHH@Z @ 0x1C01C1DC8 (-DoContactVisualizationAndGenerateMessages@CTouchProcessor@@AEAAHPEBURIMCOMPLETEFRAME@@PEBUCPoin.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4F38 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00B9720 (-ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00B9790 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 */

void __fastcall CInpUnlockGuardExclusive::~CInpUnlockGuardExclusive(CInpLockGuard **this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  CInpLockGuard::LockExclusive(this[5]);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)this, v2, v3, v4);
}
