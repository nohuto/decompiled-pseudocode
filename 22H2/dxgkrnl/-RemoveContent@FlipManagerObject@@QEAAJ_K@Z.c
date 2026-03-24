/*
 * XREFs of ?RemoveContent@FlipManagerObject@@QEAAJ_K@Z @ 0x1C0068AC0
 * Callers:
 *     NtFlipObjectRemoveContent @ 0x1C0069E10 (NtFlipObjectRemoveContent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00118B4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?RemoveContent@CFlipManager@@QEAAJ_K@Z @ 0x1C006BDBC (-RemoveContent@CFlipManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall FlipManagerObject::RemoveContent(FlipManagerObject *this, unsigned __int64 a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    v4 = CFlipManager::RemoveContent((FlipManagerObject *)((char *)this + 32), a2);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
