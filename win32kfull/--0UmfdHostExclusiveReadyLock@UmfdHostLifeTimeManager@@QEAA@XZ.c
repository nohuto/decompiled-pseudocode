UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *__fastcall UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock::UmfdHostExclusiveReadyLock(
        UmfdHostLifeTimeManager::UmfdHostExclusiveReadyLock *this)
{
  __int64 v2; // rax

  v2 = SGDGetSessionState(this);
  PUSHLOCKEX::PUSHLOCKEX(this, (struct _EX_PUSH_LOCK *)(*(_QWORD *)(v2 + 32) + 23520LL));
  return this;
}
