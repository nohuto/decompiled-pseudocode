/*
 * XREFs of PfTFreeTraceDump @ 0x1402FA264
 * Callers:
 *     PfGetCompletedTrace @ 0x14075EF48 (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x140760950 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x14074B1BC (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
