/*
 * XREFs of PpmParkGetParkNode @ 0x140410C1C
 * Callers:
 *     PpmParkSnapNodeIdleTime @ 0x14059D488 (PpmParkSnapNodeIdleTime.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x14084F5E0 (PpmIdleGetPackageIdleIntervalStats.c)
 *     PpmIdleGetConcurrencyStats @ 0x14085E95C (PpmIdleGetConcurrencyStats.c)
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
