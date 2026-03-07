char PpmCheckAcquireProcessorPerformance()
{
  __int64 v0; // rdx
  char v1; // al
  char v2; // cl
  bool v3; // zf

  v0 = PpmPerfDomainHead;
  v1 = 0;
  v2 = 1;
  if ( (__int64 *)PpmPerfDomainHead == &PpmPerfDomainHead )
    goto LABEL_6;
  do
  {
    v3 = *(_BYTE *)(v0 + 1062) == 0;
    v0 = *(_QWORD *)v0;
    if ( !v3 )
      v1 = 1;
  }
  while ( (__int64 *)v0 != &PpmPerfDomainHead );
  if ( v1 )
    return PpmPerfControlExecuteAction(PpmPerfControlAcquirePerformance);
LABEL_6:
  PpmCheckPipelineIndex += 2;
  return v2;
}
