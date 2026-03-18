/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C0088B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C0088D40 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C0088D80 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01BF98C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(struct _KTHREAD **this, __int64 a2, __int64 a3)
{
  CTouchProcessor *v4; // rdi
  struct CInputPointerNode *v5; // rdx
  _BYTE v6[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( this[5] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v6, (struct CInpLockGuard *)(this + 4), 0LL);
  v4 = this[10];
  while ( v4 != (CTouchProcessor *)(this + 10) )
  {
    v5 = (CTouchProcessor *)((char *)v4 - 16);
    v4 = *(CTouchProcessor **)v4;
    CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v5);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v6);
}
