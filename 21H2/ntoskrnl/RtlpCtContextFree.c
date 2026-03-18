/*
 * XREFs of RtlpCtContextFree @ 0x1409BE97C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405EDBA0 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x1409BE9D8 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409BEBB0 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140791480 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtContextFree(PVOID *P)
{
  PVOID v2; // rcx
  PVOID v3; // rcx

  v2 = P[1];
  if ( v2 )
    ExUnsubscribeWnfStateChange(v2);
  v3 = P[2];
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0x67744364u);
    P[2] = 0LL;
  }
  if ( *P )
    ExFreePoolWithTag(*P, 0x67744364u);
  ExFreePoolWithTag(P, 0x67744364u);
}
