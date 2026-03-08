/*
 * XREFs of ?ConsumerAcquirePresent@FlipManagerObject@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C007F0E8
 * Callers:
 *     NtFlipObjectConsumerAcquirePresent @ 0x1C007FB30 (NtFlipObjectConsumerAcquirePresent.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConsumerAcquirePresent@CFlipManager@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z @ 0x1C0081DD0 (-ConsumerAcquirePresent@CFlipManager@@QEAAJIIPEAPEAXPEAPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall FlipManagerObject::ConsumerAcquirePresent(
        FlipManagerObject *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        struct CFlipPropertySet **a5)
{
  int v9; // ebx

  v9 = CPushLock::AcquireLockExclusive((FlipManagerObject *)((char *)this + 40));
  if ( v9 >= 0 )
  {
    v9 = CFlipManager::ConsumerAcquirePresent((FlipManagerObject *)((char *)this + 32), a2, a3, a4, a5);
    CPushLock::ReleaseLock((FlipManagerObject *)((char *)this + 40));
  }
  return (unsigned int)v9;
}
