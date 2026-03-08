/*
 * XREFs of ?ResetAdapterCollection@CTokenManager@@MEAAXXZ @ 0x1C00173F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?Release@CPushLockCriticalSection@@QEAAXXZ @ 0x1C0018BE8 (-Release@CPushLockCriticalSection@@QEAAXXZ.c)
 *     ?InternalDiscard@CAdapterCollection@@AEAAXXZ @ 0x1C00192B0 (-InternalDiscard@CAdapterCollection@@AEAAXXZ.c)
 */

void __fastcall CTokenManager::ResetAdapterCollection(CTokenManager *this)
{
  CTokenManager::AcquireTokenManagerLock(this);
  ExAcquirePushLockExclusiveEx((char *)this + 152, 0LL);
  *((_BYTE *)this + 160) = 1;
  CAdapterCollection::InternalDiscard((CTokenManager *)((char *)this + 112));
  CPushLockCriticalSection::Release((CTokenManager *)((char *)this + 152));
  *((_DWORD *)this + 22) = 0;
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
