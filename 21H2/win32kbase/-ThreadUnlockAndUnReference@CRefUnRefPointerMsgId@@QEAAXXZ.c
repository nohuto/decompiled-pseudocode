/*
 * XREFs of ?ThreadUnlockAndUnReference@CRefUnRefPointerMsgId@@QEAAXXZ @ 0x1C0092BC0
 * Callers:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ @ 0x1C01BD260 (--1CInpLockGuardExclusiveIfNeeded@@QEAA@XZ.c)
 *     ??1CInpUnlockGuardExclusive@@QEAA@XZ @ 0x1C01BD2AC (--1CInpUnlockGuardExclusive@@QEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01D8B80 (-UnreferenceMsgDataFromGuard@CTouchProcessor@@QEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 */

void __fastcall CRefUnRefPointerMsgId::ThreadUnlockAndUnReference(CRefUnRefPointerMsgId *this)
{
  if ( *((_BYTE *)this + 32) )
  {
    if ( qword_1C029BD20 )
      qword_1C029BD20((char *)this + 8);
    CTouchProcessor::UnreferenceMsgDataFromGuard(this, *(_QWORD *)this);
  }
}
