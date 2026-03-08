/*
 * XREFs of ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0087D50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C000E098 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C000E344 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0083F6C (-ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipPresentUpdate::Discard(CFlipPresentUpdate *this)
{
  __int64 v1; // rdi

  v1 = *((_QWORD *)this + 1);
  if ( v1 && (int)CPushLock::AcquireLockExclusive((CPushLock *)(v1 + 40)) >= 0 )
  {
    CFlipManager::ProcessDiscardedProducerPresentUpdate((CFlipManager *)(v1 + 32), this);
    CPushLock::ReleaseLock((CPushLock *)(v1 + 40));
  }
  (*(void (__fastcall **)(CFlipPresentUpdate *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
}
