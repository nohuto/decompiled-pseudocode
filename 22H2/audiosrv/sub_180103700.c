/*
 * XREFs of sub_180103700 @ 0x180103700
 * Callers:
 *     sub_180104404 @ 0x180104404 (sub_180104404.c)
 * Callees:
 *     sub_1800FEBC0 @ 0x1800FEBC0 (sub_1800FEBC0.c)
 */

volatile signed __int32 *__fastcall sub_180103700(volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)sub_1800FEBC0(result);
  }
  return result;
}
