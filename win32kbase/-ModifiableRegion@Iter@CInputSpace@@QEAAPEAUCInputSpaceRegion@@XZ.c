struct CInputSpaceRegion *__fastcall CInputSpace::Iter::ModifiableRegion(CInputSpace::Iter *this)
{
  __int64 v2; // rbx
  __int64 v3; // r8

  v2 = 0LL;
  if ( !ExIsResourceAcquiredExclusiveLite(CInputConfig::slock) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 140LL);
  v3 = *((_QWORD *)this + 2);
  if ( v3 != *((_QWORD *)this + 1) )
    return (struct CInputSpaceRegion *)(v3 + 16);
  return (struct CInputSpaceRegion *)v2;
}
