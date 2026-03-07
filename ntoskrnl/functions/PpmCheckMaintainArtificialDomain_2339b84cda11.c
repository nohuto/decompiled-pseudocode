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
