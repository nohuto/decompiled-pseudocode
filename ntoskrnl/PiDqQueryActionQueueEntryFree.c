/*
 * XREFs of PiDqQueryActionQueueEntryFree @ 0x140746890
 * Callers:
 *     PiDqQuerySerializeActionQueue @ 0x140746290 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryFreeActiveData @ 0x1407910F8 (PiDqQueryFreeActiveData.c)
 * Callees:
 *     PiPnpRtlObjectEventRelease @ 0x1406CCCF8 (PiPnpRtlObjectEventRelease.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiDqQueryActionQueueEntryFree(_QWORD *P)
{
  unsigned int *v2; // rcx
  char *v3; // rcx

  v2 = (unsigned int *)P[2];
  if ( v2 )
    PiDmObjectRelease(v2);
  v3 = (char *)P[3];
  if ( v3 )
    PiPnpRtlObjectEventRelease(v3);
  ExFreePoolWithTag(P, 0x58706E50u);
}
