/*
 * XREFs of DpiFdoCleanupMipiDsi @ 0x1C0024208
 * Callers:
 *     DpiFdoInitializeMipiDsi @ 0x1C001D3B8 (DpiFdoInitializeMipiDsi.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiFdoResetFdo @ 0x1C0398754 (DpiFdoResetFdo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void (__fastcall *__fastcall DpiFdoCleanupMipiDsi(__int64 a1))(_QWORD)
{
  void (__fastcall *result)(_QWORD); // rax

  result = *(void (__fastcall **)(_QWORD))(a1 + 5496);
  if ( result )
  {
    result(*(_QWORD *)(a1 + 5480));
    result = 0LL;
    *(_OWORD *)(a1 + 5472) = 0LL;
    *(_OWORD *)(a1 + 5488) = 0LL;
    *(_OWORD *)(a1 + 5504) = 0LL;
    *(_QWORD *)(a1 + 5520) = 0LL;
  }
  return result;
}
