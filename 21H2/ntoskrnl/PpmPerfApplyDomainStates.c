/*
 * XREFs of PpmPerfApplyDomainStates @ 0x14021DB00
 * Callers:
 *     <none>
 * Callees:
 *     PpmPerfApplyDomainState @ 0x14021DB70 (PpmPerfApplyDomainState.c)
 *     KeIsSubsetAffinityEx @ 0x140513880 (KeIsSubsetAffinityEx.c)
 */

char PpmPerfApplyDomainStates()
{
  __int64 k; // rbx
  __int64 i; // rbx
  __int64 j; // rbx

  if ( PpmPerfArtificialDomainEnabled )
  {
    for ( i = PpmPerfDomainHead; (__int64 *)i != &PpmPerfDomainHead; i = *(_QWORD *)i )
    {
      if ( *(_BYTE *)(i + 765) && !(unsigned int)KeIsSubsetAffinityEx(i + 24, &PpmPerfNewCoreParkingMask) )
      {
        for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
        {
          if ( !(unsigned int)KeIsSubsetAffinityEx(j + 24, &PpmPerfNewCoreParkingMask) )
            *(_BYTE *)(j + 765) = 1;
        }
        break;
      }
    }
  }
  for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
  {
    if ( *(_BYTE *)(k + 765) )
    {
      if ( (unsigned __int8)PpmPerfApplyDomainState(k) )
        *(_BYTE *)(k + 766) = 1;
      *(_BYTE *)(k + 765) = 0;
    }
  }
  return 1;
}
