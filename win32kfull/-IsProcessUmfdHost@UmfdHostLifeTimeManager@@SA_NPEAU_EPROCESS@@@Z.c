bool __fastcall UmfdHostLifeTimeManager::IsProcessUmfdHost(struct _EPROCESS *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  bool v4; // bl

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 32) + 23520LL;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v3) + 32) + 23496LL) == (_QWORD)a1;
  if ( v2 )
  {
    GreReleasePushLockShared(v2);
    KeLeaveCriticalRegion();
  }
  return v4;
}
