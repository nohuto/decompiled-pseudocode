/*
 * XREFs of ?EnsureTokenQueueForPresent@CTokenManager@@UEAAJPEAVCompositionSurfaceObject@@@Z @ 0x1C0076D60
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C0076CB0 (-EnsureTokenQueue@CTokenManager@@IEAAJPEAVCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 */

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
