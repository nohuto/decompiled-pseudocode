/*
 * XREFs of ?LockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C0017470
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::LockIfNotTokenThread(CTokenManager *this)
{
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 4) )
    CTokenManager::AcquireTokenManagerLock(this);
}
