/*
 * XREFs of ?CancelActivePointers@CTouchProcessor@@QEAAXXZ @ 0x1C00C9A10
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z @ 0x1C00C9B24 (--0CInpLockGuardExclusive@@QEAA@AEAUCInpLockGuard@@PEAX@Z.c)
 *     ??1CInpLockGuardExclusive@@QEAA@XZ @ 0x1C00C9B90 (--1CInpLockGuardExclusive@@QEAA@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z @ 0x1C01EB07C (-CancelActivePointer@CTouchProcessor@@AEAAXPEAUCInputPointerNode@@@Z.c)
 */

void __fastcall CTouchProcessor::CancelActivePointers(struct _KTHREAD **this)
{
  CTouchProcessor *v2; // rdi
  struct CInputPointerNode *v3; // rdx
  _BYTE v4[56]; // [rsp+20h] [rbp-38h] BYREF

  if ( this[5] == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 15896LL);
  CInpLockGuardExclusive::CInpLockGuardExclusive((CInpLockGuardExclusive *)v4, (struct CInpLockGuard *)(this + 4), 0LL);
  v2 = this[11];
  while ( v2 != (CTouchProcessor *)(this + 11) )
  {
    v3 = (CTouchProcessor *)((char *)v2 - 16);
    v2 = *(CTouchProcessor **)v2;
    CTouchProcessor::CancelActivePointer((CTouchProcessor *)this, v3);
  }
  CInpLockGuardExclusive::~CInpLockGuardExclusive((CInpLockGuardExclusive *)v4);
}
