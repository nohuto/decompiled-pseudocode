/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x1402EDDB0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyLatencyHint @ 0x1402EDE2C (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 i; // rbx
  __int64 j; // rdi

  if ( PpmCheckLatencyBoostActive )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      for ( j = 0LL; (unsigned int)j < *(_DWORD *)(i + 296); j = (unsigned int)(j + 1) )
      {
        if ( *(_QWORD *)(*(_QWORD *)(i + 312) + 144 * j) )
          PpmPerfApplyLatencyHint();
      }
    }
  }
  return 1;
}
