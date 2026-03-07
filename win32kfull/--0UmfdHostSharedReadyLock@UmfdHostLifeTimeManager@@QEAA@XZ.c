UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *__fastcall UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock(
        UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *this)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 32) + 23520LL;
  *(_QWORD *)this = v2;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(v2);
  return this;
}
