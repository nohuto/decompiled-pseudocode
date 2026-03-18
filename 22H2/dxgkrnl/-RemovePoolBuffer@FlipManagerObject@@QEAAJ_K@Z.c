/*
 * XREFs of ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C00803A4
 * Callers:
 *     NtFlipObjectRemovePoolBuffer @ 0x1C00818A0 (NtFlipObjectRemovePoolBuffer.c)
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z @ 0x1C0085338 (-RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall FlipManagerObject::RemovePoolBuffer(FlipManagerObject *this, unsigned __int64 a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    v4 = CFlipManager::RemovePoolBuffer((FlipManagerObject *)((char *)this + 32), a2);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
