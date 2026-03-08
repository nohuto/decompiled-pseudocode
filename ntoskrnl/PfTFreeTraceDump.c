/*
 * XREFs of PfTFreeTraceDump @ 0x14035BBA8
 * Callers:
 *     PfGetCompletedTrace @ 0x1407E76DC (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1407E7AC8 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x1407E6908 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
