AutoExclusiveUmfdLookupLock *__fastcall AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock(
        AutoExclusiveUmfdLookupLock *this)
{
  __int64 v2; // rdx

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 32);
  *(_QWORD *)this = v2 + 23464;
  if ( v2 != -23464 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(*(_QWORD *)this, 0LL);
  }
  return this;
}
