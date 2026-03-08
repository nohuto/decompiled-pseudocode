/*
 * XREFs of ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C020AE10
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00AB5F0 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::EnableSpeedBump(CCursorClip *this, char a2)
{
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  *((_BYTE *)this + 277) = a2;
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
