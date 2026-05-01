/*
 * XREFs of ?EndUpdates@CMultitaskingViewFrame@@UEAAXXZ @ 0x1804098B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrame::EndUpdates(CMultitaskingViewFrame *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 315) + 64LL))(*((_QWORD *)this + 315));
  (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 307) + 32LL))(*((_QWORD *)this + 307), 0LL);
}
