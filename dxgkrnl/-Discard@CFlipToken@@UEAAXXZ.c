/*
 * XREFs of ?Discard@CFlipToken@@UEAAXXZ @ 0x1C0078C00
 * Callers:
 *     ??1CFlipToken@@MEAA@XZ @ 0x1C00786EC (--1CFlipToken@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ @ 0x1C007897C (-ConfirmIndependentFlipEntry@CFlipToken@@IEAAXXZ.c)
 *     ?SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z @ 0x1C007952C (-SignalGpuFenceAndPresentLimitSemaphore@CFlipToken@@IEAAX_N@Z.c)
 *     ?TraceStateChanged@CFlipToken@@AEBAXXZ @ 0x1C0079624 (-TraceStateChanged@CFlipToken@@AEBAXXZ.c)
 */

void __fastcall CFlipToken::Discard(CFlipToken *this)
{
  char v2; // al

  *((_DWORD *)this + 6) = 6;
  CFlipToken::TraceStateChanged(this);
  CFlipToken::ConfirmIndependentFlipEntry(this);
  v2 = (*(__int64 (__fastcall **)(CFlipToken *))(*(_QWORD *)this + 144LL))(this);
  CFlipToken::SignalGpuFenceAndPresentLimitSemaphore(this, v2);
}
