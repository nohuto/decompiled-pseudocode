/*
 * XREFs of sub_18001B750 @ 0x18001B750
 * Callers:
 *     sub_1800184B0 @ 0x1800184B0 (sub_1800184B0.c)
 *     sub_1800188D0 @ 0x1800188D0 (sub_1800188D0.c)
 *     sub_180018FA0 @ 0x180018FA0 (sub_180018FA0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001B750(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a1 + 2 * result) );
  return result;
}
