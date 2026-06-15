/*
 * XREFs of sub_1800D7AC0 @ 0x1800D7AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int128 *__fastcall sub_1800D7AC0(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rax
  __int128 *v3; // rcx
  __int128 *result; // rax

  v2 = *(__int128 **)(a1 + 152);
  v3 = &xmmword_18015B730;
  if ( v2 )
    v3 = v2;
  result = a2;
  *a2 = *v3;
  return result;
}
