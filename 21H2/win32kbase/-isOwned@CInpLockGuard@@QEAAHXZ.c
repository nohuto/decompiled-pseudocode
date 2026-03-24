/*
 * XREFs of ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C007B5E0
 * Callers:
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C007B590 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00CD830 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAX_N@Z @ 0x1C00CD890 (-LockShared@CInpLockGuard@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInpLockGuard::isOwned(PERESOURCE *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( ExIsResourceAcquiredExclusiveLite(*this) || ExIsResourceAcquiredSharedLite(*this) )
    return 1;
  return v2;
}
