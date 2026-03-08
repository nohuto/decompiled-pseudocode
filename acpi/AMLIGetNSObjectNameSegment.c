/*
 * XREFs of AMLIGetNSObjectNameSegment @ 0x1C0048384
 * Callers:
 *     AcpiArblibAllocateArbiterInstance @ 0x1C007CB64 (AcpiArblibAllocateArbiterInstance.c)
 *     ACPIGetPnpLocationString @ 0x1C0087670 (ACPIGetPnpLocationString.c)
 *     PnpiUpdateForceActiveBothInterrupts @ 0x1C0091FC4 (PnpiUpdateForceActiveBothInterrupts.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AMLIGetNSObjectNameSegment(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)a1 + 40LL);
}
