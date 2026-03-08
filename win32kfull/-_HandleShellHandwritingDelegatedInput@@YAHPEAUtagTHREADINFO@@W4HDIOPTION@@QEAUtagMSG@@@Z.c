/*
 * XREFs of ?_HandleShellHandwritingDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C01B7454
 * Callers:
 *     NtUserShellHandwritingHandleDelegatedInput @ 0x1C01DEBA0 (NtUserShellHandwritingHandleDelegatedInput.c)
 *     NtUserShellHandwritingUndelegateInput @ 0x1C01DEC90 (NtUserShellHandwritingUndelegateInput.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0014940 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0014984 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01B734C (-_FindShellHandwritingDelegationQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@.c)
 *     ?_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01B7500 (-_HandleShellHandwritingDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 */

__int64 __fastcall _HandleShellHandwritingDelegatedInput(struct tagTHREADINFO *a1, unsigned int a2, struct tagMSG *a3)
{
  struct tagQMSG *v3; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v9; // r8
  struct tagQMSG *i; // rax
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF
  struct tagQMSG *v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  if ( a3 )
  {
    result = _FindShellHandwritingDelegationQMsgFromMsg(a1, a3, &v12);
    if ( !(_DWORD)result )
      return result;
    v3 = v12;
  }
  v7 = SGDGetUserSessionState(a1);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v7 + 3424));
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v11, TouchProcessorLock, v9);
  for ( i = *(struct tagQMSG **)(*((_QWORD *)a1 + 54) + 24LL);
        i != v3;
        i = _HandleShellHandwritingDelegatedInputWorker(a1, a2, i) )
  {
    ;
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v11);
  return 1LL;
}
