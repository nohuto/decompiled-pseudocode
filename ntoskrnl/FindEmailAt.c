/*
 * XREFs of FindEmailAt @ 0x1405AD764
 * Callers:
 *     RtlpNameprepAsciiRealWorker @ 0x1405ADAEC (RtlpNameprepAsciiRealWorker.c)
 *     RtlpValidateAsciiStd3AndLength @ 0x1409BC598 (RtlpValidateAsciiStd3AndLength.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindEmailAt(__int64 a1, int a2)
{
  int v2; // r8d
  _WORD *v3; // r9

  v2 = a2 - 1;
  v3 = (_WORD *)(a1 + 2 * (a2 - 1LL));
  if ( a2 <= 0 )
    return (unsigned int)a2;
  while ( *v3 != 64 )
  {
    --v3;
    if ( --v2 < 0 )
      return (unsigned int)a2;
  }
  return (unsigned int)(v2 + 1);
}
