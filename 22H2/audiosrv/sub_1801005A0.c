/*
 * XREFs of sub_1801005A0 @ 0x1801005A0
 * Callers:
 *     sub_180102A80 @ 0x180102A80 (sub_180102A80.c)
 *     sub_180103040 @ 0x180103040 (sub_180103040.c)
 * Callees:
 *     sub_1801020C4 @ 0x1801020C4 (sub_1801020C4.c)
 */

__int64 __fastcall sub_1801005A0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v4; // rcx

  result = sub_1801020C4(a1, a2, a1[1], 0LL);
  v4 = (__int64 *)a1[1];
  if ( v4 )
    *v4 = result;
  else
    *a1 = result;
  a1[1] = result;
  return result;
}
