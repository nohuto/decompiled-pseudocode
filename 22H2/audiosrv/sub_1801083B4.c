/*
 * XREFs of sub_1801083B4 @ 0x1801083B4
 * Callers:
 *     sub_1801060DC @ 0x1801060DC (sub_1801060DC.c)
 *     sub_180108504 @ 0x180108504 (sub_180108504.c)
 *     sub_180108A7F @ 0x180108A7F (sub_180108A7F.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1801083B4(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v3 = 0LL;
  if ( !a2 )
    sub_1800B8610(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 112) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v3 + 104); i != a2; i = *(_QWORD *)(i + 104) )
      v3 = i;
  }
  return sub_18010845C(a1, a2, v3);
}
