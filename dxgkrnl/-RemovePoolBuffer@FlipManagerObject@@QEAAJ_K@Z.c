/*
 * XREFs of ?RemovePoolBuffer@FlipManagerObject@@QEAAJ_K@Z @ 0x1C007F774
 * Callers:
 *     NtFlipObjectRemovePoolBuffer @ 0x1C0080C70 (NtFlipObjectRemovePoolBuffer.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z @ 0x1C00845C8 (-RemovePoolBuffer@CFlipManager@@QEAAJ_K@Z.c)
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
