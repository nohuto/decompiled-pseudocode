/*
 * XREFs of sub_1800F1624 @ 0x1800F1624
 * Callers:
 *     sub_1800EFC8C @ 0x1800EFC8C (sub_1800EFC8C.c)
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     sub_1800583E4 @ 0x1800583E4 (sub_1800583E4.c)
 *     sub_1800D2EA8 @ 0x1800D2EA8 (sub_1800D2EA8.c)
 */

__int64 **__fastcall sub_1800F1624(__int64 a1, __int64 **a2, __int64 *a3, __int64 *a4)
{
  __int64 *v4; // rbp
  __int64 *v5; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rdx
  __int64 **result; // rax

  v4 = *(__int64 **)(a1 + 8);
  v5 = a4;
  v9 = a3;
  if ( a4 != v4 )
  {
    do
    {
      v10 = *v5;
      *v5 = 0LL;
      sub_1800D2EA8(v9++, v10);
      ++v5;
    }
    while ( v5 != v4 );
    v4 = *(__int64 **)(a1 + 8);
  }
  sub_1800583E4(v9, v4);
  result = a2;
  *a2 = a3;
  *(_QWORD *)(a1 + 8) = v9;
  return result;
}
