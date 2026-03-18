/*
 * XREFs of ?NotifyOfDwmTermination@CFlipExBuffer@@UEAAXXZ @ 0x1C000E1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ @ 0x1C000E1FC (-ReleasePendingPresentLimits@CFlipExBuffer@@IEAAXXZ.c)
 *     ?DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ @ 0x1C0010740 (-DisableCascadedSignaling@CFlipExBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     DxgkImmediateSignalSynchronizationObjectByReference @ 0x1C0352D3C (DxgkImmediateSignalSynchronizationObjectByReference.c)
 */

void __fastcall CFlipExBuffer::NotifyOfDwmTermination(CFlipExBuffer *this)
{
  if ( *((_QWORD *)this + 44) && *((_QWORD *)this + 43) )
    DxgkImmediateSignalSynchronizationObjectByReference();
  CFlipExBuffer::DisableCascadedSignaling(this);
  CFlipExBuffer::ReleasePendingPresentLimits(this);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 32LL))(*((_QWORD *)this + 35));
}
