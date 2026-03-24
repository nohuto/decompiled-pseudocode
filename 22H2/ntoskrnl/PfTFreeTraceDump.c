/*
 * XREFs of PfTFreeTraceDump @ 0x14026E76C
 * Callers:
 *     PfGetCompletedTrace @ 0x14062FD1C (PfGetCompletedTrace.c)
 *     PfTTraceListFree @ 0x1406303E4 (PfTTraceListFree.c)
 * Callees:
 *     PfpRepurposeNameLoggingTrace @ 0x140634B24 (PfpRepurposeNameLoggingTrace.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PfTFreeTraceDump(_DWORD *a1)
{
  if ( a1[7] == 1 )
    PfpRepurposeNameLoggingTrace(a1);
  else
    ExFreePoolWithTag(a1, 0);
}
