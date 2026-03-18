/*
 * XREFs of ?EnableSpeedBump@CCursorClip@@QEAAX_N@Z @ 0x1C01DB8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0096098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0096160 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 */

void __fastcall CCursorClip::EnableSpeedBump(CCursorClip *this, char a2)
{
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  *((_BYTE *)this + 277) = a2;
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
