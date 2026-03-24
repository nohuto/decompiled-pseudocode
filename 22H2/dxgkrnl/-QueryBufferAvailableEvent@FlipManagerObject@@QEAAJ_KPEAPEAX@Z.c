/*
 * XREFs of ?QueryBufferAvailableEvent@FlipManagerObject@@QEAAJ_KPEAPEAX@Z @ 0x1C0068968
 * Callers:
 *     NtFlipObjectQueryBufferAvailableEvent @ 0x1C00699E0 (NtFlipObjectQueryBufferAvailableEvent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000FAAC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00118B4 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z @ 0x1C006BCA8 (-QueryBufferAvailableEvent@CFlipManager@@QEAAJ_KPEAPEAX@Z.c)
 */

__int64 __fastcall FlipManagerObject::QueryBufferAvailableEvent(
        FlipManagerObject *this,
        unsigned __int64 a2,
        void **a3)
{
  int BufferAvailableEvent; // ebx

  BufferAvailableEvent = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( BufferAvailableEvent >= 0 )
  {
    BufferAvailableEvent = CFlipManager::QueryBufferAvailableEvent((FlipManagerObject *)((char *)this + 32), a2, a3);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)BufferAvailableEvent;
}
