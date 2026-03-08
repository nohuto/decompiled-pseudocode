/*
 * XREFs of ?DeleteAllTokens@CTokenManager@@UEAAXXZ @ 0x1C0017590
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ @ 0x1C00174D8 (-DeleteAllLegacyTokenBuffers@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ @ 0x1C0018D9C (-DeleteAllCompositionTokens@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllTokens@CTokenQueue@@AEAAXXZ @ 0x1C0018DE0 (-DeleteAllTokens@CTokenQueue@@AEAAXXZ.c)
 *     ?DeleteAllTokenQueues@CTokenManager@@IEAAXXZ @ 0x1C0018E28 (-DeleteAllTokenQueues@CTokenManager@@IEAAXXZ.c)
 *     ?DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ @ 0x1C0018E74 (-DeleteAllFlipManagerTokens@CTokenManager@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::DeleteAllTokens(CTokenManager *this)
{
  unsigned int v2; // edx

  CTokenManager::AcquireTokenManagerLock(this);
  CTokenManager::DeleteAllLegacyTokenBuffers(this, v2);
  CTokenManager::DeleteAllTokenQueues(this);
  CTokenQueue::DeleteAllTokens((CTokenManager *)((char *)this + 344));
  (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 144LL))(this);
  CTokenManager::DeleteAllCompositionTokens(this);
  CTokenManager::DeleteAllFlipManagerTokens(this);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
