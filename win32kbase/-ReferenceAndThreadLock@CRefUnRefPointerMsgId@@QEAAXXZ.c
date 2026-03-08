/*
 * XREFs of ?ReferenceAndThreadLock@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00C9B70
 * Callers:
 *     ??0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C99B0 (--0CInpLockGuardExclusiveIfNeeded@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00F1FC6 (--0CInpUnlockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C02014F0 (-ReferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CRefUnRefPointerMsgId::ReferenceAndThreadLock(
        CRefUnRefPointerMsgId *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax

  if ( *(_QWORD *)this && !*((_BYTE *)this + 32) )
  {
    *((_BYTE *)this + 32) = 1;
    v5 = SGDGetUserSessionState(this, a2, a3, a4);
    CTouchProcessor::ReferenceMsgDataFromGuard(*(_QWORD *)(v5 + 3424), *(_QWORD *)this);
    if ( qword_1C02D65C8 )
      qword_1C02D65C8(*(_QWORD *)this, (char *)this + 8, CRefUnRefPointerMsgId::UnReferenceOnThreadTermination);
  }
}
