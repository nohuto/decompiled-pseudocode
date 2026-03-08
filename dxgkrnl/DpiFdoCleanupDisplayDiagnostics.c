/*
 * XREFs of DpiFdoCleanupDisplayDiagnostics @ 0x1C002406C
 * Callers:
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C001D334 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DpiFdoCleanupDisplayDiagnostics(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 5624);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 5608));
    *(_OWORD *)(a1 + 5600) = 0LL;
    *(_OWORD *)(a1 + 5616) = 0LL;
    *(_OWORD *)(a1 + 5632) = 0LL;
  }
  return result;
}
