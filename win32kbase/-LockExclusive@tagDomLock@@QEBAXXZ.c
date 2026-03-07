void __fastcall tagDomLock::LockExclusive(PERESOURCE *this)
{
  if ( ExIsResourceAcquiredExclusiveLite(*this) == 1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1411LL);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*this);
}
