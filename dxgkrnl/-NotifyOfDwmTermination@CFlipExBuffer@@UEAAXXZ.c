/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C000B430
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C000B47C (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C000D9C0 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C034E2AC (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 44) && *((_QWORD *)this + 43) )
    DxgkImmediateSignalSynchronizationObjectByReference();
  CFlipExBuffer::DisableCascadedSignaling(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 32LL))(*((_QWORD *)this + 35));
}
