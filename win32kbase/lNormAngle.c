/*
 * XREFs of lNormAngle @ 0x1C00ACB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lNormAngle(int a1)
{
  if ( a1 >= 3600 )
  {
    a1 %= 0xE10u;
    return (unsigned int)a1;
  }
  if ( a1 >= 0 )
    return (unsigned int)a1;
  return 3599 - ~a1 % 0xE10u;
}
