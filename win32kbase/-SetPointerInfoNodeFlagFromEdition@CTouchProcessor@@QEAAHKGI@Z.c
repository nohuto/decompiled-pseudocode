/*
 * XREFs of ?SetPointerInfoNodeFlagFromEdition@CTouchProcessor@@QEAAHKGI@Z @ 0x1C0204EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z @ 0x1C0204E10 (-SetPointerInfoNodeFlag@CTouchProcessor@@AEAAHKGI@Z.c)
 */

__int64 __fastcall CTouchProcessor::SetPointerInfoNodeFlagFromEdition(
        struct _KTHREAD **this,
        unsigned int a2,
        __int16 a3,
        int a4)
{
  unsigned int v8; // ebx
  CInpLockGuard *v10[8]; // [rsp+20h] [rbp-48h] BYREF

  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v10,
    (struct CInpLockGuard *)(this + 4),
    0LL);
  v8 = (unsigned int)CTouchProcessor::SetPointerInfoNodeFlag(this, a2, a3, a4);
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v10);
  return v8;
}
