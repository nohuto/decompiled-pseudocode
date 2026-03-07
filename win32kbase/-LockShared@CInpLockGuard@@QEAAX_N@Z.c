void __fastcall CInpLockGuard::LockShared(PERESOURCE *this)
{
  if ( (unsigned int)CInpLockGuard::isOwned(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 139);
  ExEnterCriticalRegionAndAcquireResourceShared(*this);
}
