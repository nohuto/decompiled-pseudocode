/*
 * XREFs of ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0123C6C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     ?DelegateCapturePointersMitOn@@YAHIPEAI0@Z @ 0x1C01F0678 (-DelegateCapturePointersMitOn@@YAHIPEAI0@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(CInpLockGuard **this)
{
  if ( *((struct _KTHREAD **)this[5] + 1) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference((CRefUnRefPointerMsgId *)this);
  CInpLockGuard::UnLock(this[5]);
}
