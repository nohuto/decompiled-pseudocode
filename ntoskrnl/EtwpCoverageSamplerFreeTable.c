/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x1409F0328
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1408A4190 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A4B3A (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerQuery @ 0x1408A55B8 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409F0174 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageSamplerFreeTable(_QWORD *P)
{
  void *v2; // rcx

  v2 = (void *)P[3];
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x56777445u);
    P[3] = 0LL;
  }
  ExFreePoolWithTag(P, 0x56777445u);
}
