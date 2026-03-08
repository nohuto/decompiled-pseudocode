/*
 * XREFs of PpmParkGetParkNode @ 0x14040B904
 * Callers:
 *     PpmParkSnapNodeIdleTime @ 0x14059AF68 (PpmParkSnapNodeIdleTime.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084C230 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x14085AA64 (PpmIdleGetConcurrencyStats.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall PpmParkGetParkNode(__int16 a1)
{
  __int64 v1; // rdx
  int v2; // r8d
  _WORD *i; // rax

  v1 = 0LL;
  v2 = 0;
  if ( PpmParkNumNodes )
  {
    for ( i = (_WORD *)(PpmParkNodes + 8); *(i - 1) != a1 || *i; i += 96 )
    {
      if ( ++v2 >= (unsigned int)PpmParkNumNodes )
        return (_WORD *)v1;
    }
    return i - 4;
  }
  return (_WORD *)v1;
}
