/*
 * XREFs of ?NotifyAdapterCleanupTokenDiscard@FlipManagerObject@@QEAAJ_K@Z @ 0x1C00820E8
 * Callers:
 *     ?FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z @ 0x1C0081C78 (-FlipManagerConsumerAdapterCleanupTokenDiscard@@YAJPEAUFlipManagerTokenObject@@@Z.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C008469C (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 */

__int64 __fastcall FlipManagerObject::NotifyAdapterCleanupTokenDiscard(FlipManagerObject *this, __int64 a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    CFlipManager::MarkAsLost((char *)this + 32, 3221225473LL, 23LL, a2);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
