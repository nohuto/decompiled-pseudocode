void __fastcall __spoils<rdx,rcx,r8,r9,r10,r11,xmm4,xmm5> _guard_retpoline_import_r10_log_event()
{
  __int64 v0; // r10

  _mm_lfence();
  EtwTraceRetpolineExit(v0);
}
