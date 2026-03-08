/*
 * XREFs of ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0081D60
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0083F1C (-ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ.c)
 *     ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0084068 (-ProcessProducerDisconnect@CFlipManager@@IEAAXXZ.c)
 */

__int64 __fastcall CFlipManager::Close(CFlipManager *this, struct _EPROCESS *a2, void *a3, __int64 a4)
{
  if ( a4 == 1 && (a2 == *((struct _EPROCESS **)this + 6) || a2 == *((struct _EPROCESS **)this + 5)) )
  {
    CPushLock::AcquireLockExclusive((CFlipManager *)((char *)this + 8));
    if ( a2 == *((struct _EPROCESS **)this + 6) )
      CFlipManager::ProcessConsumerDisconnect(this);
    if ( a2 == *((struct _EPROCESS **)this + 5) )
      CFlipManager::ProcessProducerDisconnect(this);
    CPushLock::ReleaseLock((CFlipManager *)((char *)this + 8));
  }
  return 0LL;
}
