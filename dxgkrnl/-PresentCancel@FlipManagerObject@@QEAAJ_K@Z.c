/*
 * XREFs of ?PresentCancel@FlipManagerObject@@QEAAJ_K@Z @ 0x1C007F4C0
 * Callers:
 *     NtFlipObjectPresentCancel @ 0x1C0080550 (NtFlipObjectPresentCancel.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?PresentCancel@CFlipManager@@QEAAJ_K@Z @ 0x1C0083CE0 (-PresentCancel@CFlipManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall FlipManagerObject::PresentCancel(FlipManagerObject *this, unsigned __int64 a2)
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
