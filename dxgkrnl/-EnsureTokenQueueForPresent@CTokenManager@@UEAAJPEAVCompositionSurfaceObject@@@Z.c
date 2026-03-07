__int64 __fastcall CTokenManager::EnsureTokenQueueForPresent(CTokenManager *this, struct CompositionSurfaceObject *a2)
{
  int v4; // eax

  CTokenManager::AcquireTokenManagerLock(this);
  v4 = CTokenManager::EnsureTokenQueue(this, a2, 0LL);
  *((_QWORD *)this + 13) = 0LL;
  LODWORD(a2) = v4;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  return (unsigned int)a2;
}
