/*
 * XREFs of PfSnLogPageFault @ 0x1402F38B4
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MiLogRelocationRva @ 0x1406632A4 (MiLogRelocationRva.c)
 * Callees:
 *     PfSnLogPageFaultCommon @ 0x14029B6DC (PfSnLogPageFaultCommon.c)
 *     PfSnReferenceProcessTrace @ 0x14029E950 (PfSnReferenceProcessTrace.c)
 *     PfSnCheckLoggingForThread @ 0x1402F3958 (PfSnCheckLoggingForThread.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 */

void __fastcall PfSnLogPageFault(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KTHREAD *CurrentThread; // rbp
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rbx

  if ( (a3 & 4) == 0 || !*(_QWORD *)(a1 + 32) )
  {
    CurrentThread = KeGetCurrentThread();
    v7 = PfSnReferenceProcessTrace((__int64)CurrentThread->ApcState.Process);
    v8 = v7;
    if ( v7 )
    {
      if ( (unsigned int)PfSnCheckLoggingForThread(CurrentThread, v7, a3) )
        PfSnLogPageFaultCommon((__int64)v8, a1, *(_QWORD *)(a1 + 24), a2, a3);
      ExReleaseRundownProtection(v8 + 45);
    }
  }
}
