/*
 * XREFs of RtlpCtContextFree @ 0x1409BF13C
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x1405AEB80 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x1409BF198 (RtlpCtContextInit.c)
 *     RtlpRtlpCtWaitForWnfQuiescentWorker @ 0x1409BF360 (RtlpRtlpCtWaitForWnfQuiescentWorker.c)
 * Callees:
 *     ExUnsubscribeWnfStateChange @ 0x140791FA0 (ExUnsubscribeWnfStateChange.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpCtContextFree(PVOID *P)
{
  struct _EX_RUNDOWN_REF *v2; // rcx
  PVOID v3; // rcx

  v2 = (struct _EX_RUNDOWN_REF *)P[1];
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
