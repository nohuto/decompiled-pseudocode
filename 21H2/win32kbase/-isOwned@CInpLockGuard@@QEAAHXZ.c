/*
 * XREFs of ?isOwned@CInpLockGuard@@QEAAHXZ @ 0x1C008B8A0
 * Callers:
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C00DCD70 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockShared@CInpLockGuard@@QEAAX_N@Z @ 0x1C00DCDC0 (-LockShared@CInpLockGuard@@QEAAX_N@Z.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C00DCE00 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
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
