/*
 * XREFs of ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C00148B0
 * Callers:
 *     NtUserUndelegateInput @ 0x1C00EE280 (NtUserUndelegateInput.c)
 *     NtUserHandleDelegatedInput @ 0x1C0147BD0 (NtUserHandleDelegatedInput.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0014940 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0014984 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C0143D9A (-_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0143E38 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 */

__int64 __fastcall _HandleDelegatedInput(struct tagTHREADINFO *a1, unsigned int a2, struct tagMSG *a3)
{
  struct tagQMSG *v3; // rbx
  __int64 v6; // rax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v8; // r8
  struct tagQMSG *i; // rax
  __int64 result; // rax
  _BYTE v11[56]; // [rsp+20h] [rbp-38h] BYREF
  struct tagQMSG *v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  if ( a3 )
  {
    result = _FindQMsgFromMsg(a1, a3, &v12);
    if ( !(_DWORD)result )
      return result;
    v3 = v12;
  }
  v6 = SGDGetUserSessionState(a1);
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(*(CTouchProcessor **)(v6 + 3424));
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v11, TouchProcessorLock, v8);
  for ( i = *(struct tagQMSG **)(*((_QWORD *)a1 + 54) + 24LL); i != v3; i = _HandleDelegatedInputWorker(a1, a2, i) )
    ;
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v11);
  return 1LL;
}
