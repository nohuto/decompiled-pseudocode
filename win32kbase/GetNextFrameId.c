/*
 * XREFs of GetNextFrameId @ 0x1C00F4130
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C01ED628 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 * Callees:
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C00C98C8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ApiSetResetLastSeenFrameId @ 0x1C02460AC (ApiSetResetLastSeenFrameId.c)
 */

__int64 __fastcall GetNextFrameId(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  unsigned int v5; // edi
  CInpLockGuard *v7[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(_DWORD **)(SGDGetUserSessionState(a1, a2, a3, a4) + 16368);
  CInpLockGuardExclusiveIfNeeded::CInpLockGuardExclusiveIfNeeded(
    (CInpLockGuardExclusiveIfNeeded *)v7,
    (struct CInpLockGuard *)(v4 + 2),
    0LL);
  v5 = (*v4)++;
  if ( v5 == -1 )
  {
    *v4 = 1;
    ApiSetResetLastSeenFrameId();
  }
  CInpLockGuardExclusiveIfNeeded::~CInpLockGuardExclusiveIfNeeded(v7);
  return v5;
}
