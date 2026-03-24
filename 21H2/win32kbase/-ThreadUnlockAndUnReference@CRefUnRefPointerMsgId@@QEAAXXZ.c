/*
 * XREFs of ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C00CD920
 * Callers:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C007B3E0 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01874D8 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C0187524 (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 * Callees:
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C00CD28C (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     PopW32ThreadLock @ 0x1C01FC6B0 (PopW32ThreadLock.c)
 */

void __fastcall CRefUnRefPointerMsgId::ThreadUnlockAndUnReference(CRefUnRefPointerMsgId *this)
{
  __int64 v2; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    PopW32ThreadLock((char *)this + 8);
    CTouchProcessor::UnreferenceMsgDataFromGuard(v2, *(_QWORD *)this);
  }
}
