/*
 * XREFs of PpmParkDistributeAllUtility @ 0x1402E12B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmParkDistributeUtility @ 0x140234820 (PpmParkDistributeUtility.c)
 */

char PpmParkDistributeAllUtility()
{
  char v0; // di
  __int64 i; // rbx

  v0 = BYTE3(PpmCurrentProfile[55 * dword_140C3D48C + 20]) != 0;
  for ( i = 0LL; (unsigned int)i < PpmParkNumNodes; i = (unsigned int)(i + 1) )
    PpmParkDistributeUtility(
      *(_QWORD *)(PpmParkNodes + 192 * i + 16),
      *(_QWORD *)(PpmParkNodes + 192 * i + 24),
      *(_WORD *)(PpmParkNodes + 192 * i + 4),
      *(_BYTE *)(PpmParkNodes + 192 * i + 118),
      v0,
      0,
      0LL);
  return 1;
}
