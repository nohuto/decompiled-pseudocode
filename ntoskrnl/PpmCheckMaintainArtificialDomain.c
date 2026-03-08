/*
 * XREFs of PpmCheckMaintainArtificialDomain @ 0x1403B0C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char PpmCheckMaintainArtificialDomain()
{
  if ( PpmPerfArtificialDomainEnabled )
  {
    PpmCheckPipelineIndex = 0;
    PpmCheckCurrentPipelineId = 1;
    PpmCheckPipeline = *(_QWORD *)(PpmCheckPipelines + 8);
  }
  return 1;
}
