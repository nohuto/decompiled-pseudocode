/*
 * XREFs of PpmPerfSelectProcessorStates @ 0x14020B8E0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfSelectProcessorState @ 0x14020B970 (PpmPerfSelectProcessorState.c)
 */

char PpmPerfSelectProcessorStates()
{
  __int64 i; // rdi
  int v1; // eax
  unsigned int j; // ebx

  for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 760);
    if ( v1 != -1 )
      *(_DWORD *)(i + 760) = v1 + 1;
    for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
    {
      if ( *(_QWORD *)(136LL * j + *(_QWORD *)(i + 216)) )
        PpmPerfSelectProcessorState();
    }
  }
  return 1;
}
