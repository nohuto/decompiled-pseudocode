/*
 * XREFs of sub_180093D74 @ 0x180093D74
 * Callers:
 *     sub_1800952E0 @ 0x1800952E0 (sub_1800952E0.c)
 * Callees:
 *     sub_180093E78 @ 0x180093E78 (sub_180093E78.c)
 *     sub_1800944D4 @ 0x1800944D4 (sub_1800944D4.c)
 *     sub_180094740 @ 0x180094740 (sub_180094740.c)
 *     sub_1800980F0 @ 0x1800980F0 (sub_1800980F0.c)
 */

__int64 __fastcall sub_180093D74(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 v10; // rdi
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 i; // rdi

  v5 = (unsigned __int128)((a3 - a2) * (__int128)0x2E8BA2E8BA2E8BA3LL) >> 64;
  v7 = *a1;
  v8 = ((unsigned __int64)v5 >> 63) + (v5 >> 4);
  v9 = (a1[1] - *a1) / 88;
  if ( v8 <= v9 )
  {
    v12 = v7 + 88 * v8;
    result = sub_180093E78(a2, a3);
    v13 = a1[1];
    for ( i = v12; i != v13; i += 88LL )
      result = sub_180094740(i);
  }
  else
  {
    if ( v8 > (a1[2] - v7) / 88 )
    {
      sub_1800980F0(a1, v8);
      v9 = 0LL;
    }
    v10 = a2 + 88 * v9;
    result = sub_180093E78(a2, v10);
    v12 = a1[1];
    while ( v10 != a3 )
    {
      result = sub_1800944D4(v12, v10);
      v12 += 88LL;
      v10 += 88LL;
    }
  }
  a1[1] = v12;
  return result;
}
