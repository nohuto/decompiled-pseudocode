/*
 * XREFs of PfSnLogPageFault @ 0x14028D4BC
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x140221870 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteRestrictedImageFault @ 0x14028D690 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x1402DA87C (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1407F4A00 (MiLogRelocationRva.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     PfSnReferenceProcessTrace @ 0x14028D560 (PfSnReferenceProcessTrace.c)
 *     PfSnCheckLoggingForThread @ 0x1402EA88C (PfSnCheckLoggingForThread.c)
 *     PfSnLogPageFaultCommon @ 0x140306D88 (PfSnLogPageFaultCommon.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, int a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace(CurrentThread->ApcState.Process);
    v8 = (struct _EX_RUNDOWN_REF *)v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((_DWORD)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      ExReleaseRundownProtection_0(v8 + 45);
    }
  }
}
