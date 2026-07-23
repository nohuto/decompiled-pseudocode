/*
 * XREFs of PpmPerfApplyLatencyHints @ 0x140235DC0
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyLatencyHint @ 0x14037C0E4 (PpmPerfApplyLatencyHint.c)
 */

char PpmPerfApplyLatencyHints()
{
  __int64 i; // rbx
  unsigned int j; // edi

  if ( PpmCheckLatencyBoostActive )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      for ( j = 0; j < *(_DWORD *)(i + 200); ++j )
      {
        if ( *(_QWORD *)(136LL * j + *(_QWORD *)(i + 216)) )
          PpmPerfApplyLatencyHint();
      }
    }
  }
  return 1;
}
