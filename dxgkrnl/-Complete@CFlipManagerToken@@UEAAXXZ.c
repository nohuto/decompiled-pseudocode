/*
 * XREFs of ?Complete@CFlipManagerToken@@UEAAXXZ @ 0x1C00761C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CFlipManagerToken::Complete(CFlipManagerToken *this)
{
  *((_DWORD *)this + 6) = 2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 8LL))(*((_QWORD *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
}
