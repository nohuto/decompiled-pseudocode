/*
 * XREFs of ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0004798
 * Callers:
 *     NtUserUndelegateInput @ 0x1C01174E0 (NtUserUndelegateInput.c)
 *     NtUserHandleDelegatedInput @ 0x1C01F77A0 (NtUserHandleDelegatedInput.c)
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0004870 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C016B120 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 *     ?_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z @ 0x1C01DC90C (-_FindQMsgFromMsg@@YAHQEAUtagTHREADINFO@@QEAUtagMSG@@PEAPEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall _HandleDelegatedInput(__int64 a1, unsigned int a2, struct tagMSG *a3)
{
  struct tagQMSG *v3; // rbx
  __int64 result; // rax
  struct CInpLockGuard *TouchProcessorLock; // rax
  void *v8; // r8
  struct tagQMSG *i; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-38h] BYREF
  struct _KTHREAD **v11; // [rsp+48h] [rbp-10h]
  struct tagQMSG *v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  if ( a3 )
  {
    result = _FindQMsgFromMsg((struct tagTHREADINFO *const)a1, a3, &v12);
    if ( !(_DWORD)result )
      return result;
    v3 = v12;
  }
  TouchProcessorLock = CTouchProcessor::GetTouchProcessorLock(gpTouchProcessor);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v10, TouchProcessorLock, v8);
  for ( i = *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 24LL);
        i != v3;
        i = _HandleDelegatedInputWorker((struct tagTHREADINFO *)a1, a2, i) )
  {
    ;
  }
  if ( v11[1] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)v10);
  CInpLockGuard::UnLock((CInpLockGuard *)v11);
  return 1LL;
}
