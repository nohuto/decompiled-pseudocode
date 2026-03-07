void __fastcall CInpLockGuardExclusive::~CInpLockGuardExclusive(CInpLockGuardExclusive *this)
{
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 5) + 8LL) != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 324LL);
  CRefUnRefPointerMsgId::ThreadUnlockAndUnReference(this);
  CInpLockGuard::UnLock(*((CInpLockGuard **)this + 5));
}
