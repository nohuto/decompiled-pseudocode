/*
 * XREFs of sub_1800F15BC @ 0x1800F15BC
 * Callers:
 *     sub_1800F01D4 @ 0x1800F01D4 (sub_1800F01D4.c)
 *     sub_1801053E0 @ 0x1801053E0 (sub_1801053E0.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 */

__int64 __fastcall sub_1800F15BC(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
    sub_1800472E0(v6, (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL);
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
