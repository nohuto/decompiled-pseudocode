void __fastcall CInpLockGuard::UnLock(CInpLockGuard *this)
{
  struct _ERESOURCE *v2; // rcx

  if ( !(unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 130LL);
  v2 = *(struct _ERESOURCE **)this;
  *((_QWORD *)this + 1) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v2);
}
