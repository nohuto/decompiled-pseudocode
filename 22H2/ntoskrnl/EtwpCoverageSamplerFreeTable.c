/*
 * XREFs of EtwpCoverageSamplerFreeTable @ 0x1409F31B8
 * Callers:
 *     EtwpCovSampContextAddSamples @ 0x1408A9050 (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampHashMakeRoomAndAcquireLock @ 0x1408A99FA (EtwpCovSampHashMakeRoomAndAcquireLock.c)
 *     EtwpCoverageSamplerQuery @ 0x1408AA478 (EtwpCoverageSamplerQuery.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409F3004 (EtwpCoverageSamplerCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
