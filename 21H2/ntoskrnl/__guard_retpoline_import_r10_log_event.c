/*
 * XREFs of __guard_retpoline_import_r10_log_event @ 0x140A18500
 * Callers:
 *     __guard_retpoline_import_r10 @ 0x140A18420 (__guard_retpoline_import_r10.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1405A82E0 (EtwTraceRetpolineExit.c)
 */

void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> _guard_retpoline_import_r10_log_event()
{
  __int64 v0; // r10

  _mm_lfence();
  EtwTraceRetpolineExit(v0);
}
