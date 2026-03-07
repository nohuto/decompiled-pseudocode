void __fastcall CInpLockGuard::LockExclusive(CInpLockGuard *this)
{
  if ( (unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 119LL);
  if ( *((_QWORD *)this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 120LL);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)this);
  *((_QWORD *)this + 1) = KeGetCurrentThread();
}
