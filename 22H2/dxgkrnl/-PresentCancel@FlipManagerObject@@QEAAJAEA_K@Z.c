/*
 * XREFs of ?PresentCancel@FlipManagerObject@@QEAAJAEA_K@Z @ 0x1C0068908
 * Callers:
 *     NtFlipObjectPresentCancel @ 0x1C0069910 (NtFlipObjectPresentCancel.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00118B4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?PresentCancel@CFlipManager@@QEAAJAEA_K@Z @ 0x1C006B9D0 (-PresentCancel@CFlipManager@@QEAAJAEA_K@Z.c)
 */

__int64 __fastcall FlipManagerObject::PresentCancel(FlipManagerObject *this, unsigned __int64 *a2)
{
  int v4; // ebx

  v4 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v4 >= 0 )
  {
    v4 = CFlipManager::PresentCancel((FlipManagerObject *)((char *)this + 32), a2);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v4;
}
