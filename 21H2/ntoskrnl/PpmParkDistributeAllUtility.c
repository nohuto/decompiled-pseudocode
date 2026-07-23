/*
 * XREFs of PpmParkDistributeAllUtility @ 0x1402CF790
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x1402CF3F0 (PpmParkDistributeUtility.c)
 */

char PpmParkDistributeAllUtility()
{
  char v0; // di
  unsigned int i; // ebx

  v0 = BYTE3(PpmCurrentProfile[342 * dword_140C2332C + 20]) != 0;
  for ( i = 0; i < PpmParkNumNodes; ++i )
    PpmParkDistributeUtility(
      *(_QWORD *)(PpmParkNodes + 272LL * i + 8),
      *(_QWORD *)(PpmParkNodes + 272LL * i + 32),
      *(unsigned __int16 *)(PpmParkNodes + 272LL * i + 4),
      *(_BYTE *)(PpmParkNodes + 272LL * i + 142),
      v0,
      0,
      0LL);
  return 1;
}
