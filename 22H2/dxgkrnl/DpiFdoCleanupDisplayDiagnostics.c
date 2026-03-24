/*
 * XREFs of DpiFdoCleanupDisplayDiagnostics @ 0x1C0022F1C
 * Callers:
 *     DpiFdoInitializeDisplayDiagnostics @ 0x1C0022EA0 (DpiFdoInitializeDisplayDiagnostics.c)
 *     DpiFdoStartAdapter @ 0x1C0189268 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall DpiFdoCleanupDisplayDiagnostics(__int64 a1))(_QWORD)
{
  __int64 (__fastcall *result)(_QWORD); // rax

  result = *(__int64 (__fastcall **)(_QWORD))(a1 + 5680);
  if ( result )
  {
    result = (__int64 (__fastcall *)(_QWORD))result(*(_QWORD *)(a1 + 5664));
    *(_OWORD *)(a1 + 5656) = 0LL;
    *(_OWORD *)(a1 + 5672) = 0LL;
    *(_OWORD *)(a1 + 5688) = 0LL;
  }
  return result;
}
