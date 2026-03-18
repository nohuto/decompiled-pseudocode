/*
 * XREFs of PpmPerfApplyDomainStates @ 0x1402255A0
 * Callers:
 *     <none>
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x14020EF50 (KeIsSubsetAffinityEx.c)
 *     PpmPerfApplyDomainState @ 0x14022560C (PpmPerfApplyDomainState.c)
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
      if ( *(_BYTE *)(i + 989) && !(unsigned int)KeIsSubsetAffinityEx(i + 24, (__int64)&PpmPerfNewCoreParkingMask) )
      {
        for ( j = PpmPerfDomainHead; (__int64 *)j != &PpmPerfDomainHead; j = *(_QWORD *)j )
        {
          if ( !(unsigned int)KeIsSubsetAffinityEx(j + 24, (__int64)&PpmPerfNewCoreParkingMask) )
            *(_BYTE *)(j + 989) = 1;
        }
        break;
      }
    }
  }
  for ( k = PpmPerfDomainHead; (__int64 *)k != &PpmPerfDomainHead; k = *(_QWORD *)k )
  {
    if ( *(_BYTE *)(k + 989) )
    {
      if ( (unsigned __int8)PpmPerfApplyDomainState(k) )
        *(_BYTE *)(k + 990) = 1;
      *(_BYTE *)(k + 989) = 0;
    }
  }
  return 1;
}
