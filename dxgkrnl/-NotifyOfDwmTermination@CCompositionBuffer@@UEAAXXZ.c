/*
 * XREFs of ?NotifyOfDwmTermination@CCompositionBuffer@@UEAAXXZ @ 0x1C007CD50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionBuffer::NotifyOfDwmTermination(CCompositionBuffer *this)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 32LL))(*((_QWORD *)this + 35));
}
