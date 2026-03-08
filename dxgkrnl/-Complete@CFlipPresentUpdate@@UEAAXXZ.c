/*
 * XREFs of ?Complete@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0087CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0083DDC (-ProcessCompletedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipPresentUpdate::Complete(CFlipPresentUpdate *this)
{
  PRKEVENT *v1; // rbx

  v1 = (PRKEVENT *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = 0LL;
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 5)) >= 0 )
  {
    CFlipManager::ProcessCompletedProducerPresentUpdate(v1 + 4, this);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 5));
  }
  ObfDereferenceObject(v1);
}
