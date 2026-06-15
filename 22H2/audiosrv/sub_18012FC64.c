/*
 * XREFs of sub_18012FC64 @ 0x18012FC64
 * Callers:
 *     sub_180010670 @ 0x180010670 (sub_180010670.c)
 *     sub_18012E520 @ 0x18012E520 (sub_18012E520.c)
 * Callees:
 *     sub_18012F470 @ 0x18012F470 (sub_18012F470.c)
 *     sub_1801300AC @ 0x1801300AC (sub_1801300AC.c)
 *     sub_180132028 @ 0x180132028 (sub_180132028.c)
 *     sub_180132148 @ 0x180132148 (sub_180132148.c)
 */

__int64 __fastcall sub_18012FC64(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx

  v8 = sub_180132148();
  v10 = sub_180132028(v9, v8);
  if ( v10 )
    v11 = sub_18012F470(v10);
  else
    v11 = 0LL;
  if ( v11 )
    return sub_1801300AC(v11, a1, a2, a3, a4);
  else
    return 2147942414LL;
}
