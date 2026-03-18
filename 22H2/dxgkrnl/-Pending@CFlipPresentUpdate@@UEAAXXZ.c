/*
 * XREFs of ?Pending@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0088B80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C0013814 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0013858 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0084D44 (-ProcessPendingProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipPresentUpdate::Pending(CFlipPresentUpdate *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 1);
  if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40)) >= 0 )
  {
    CFlipManager::ProcessPendingProducerPresentUpdate((CFlipManager *)(v1 + 32), this);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
}
