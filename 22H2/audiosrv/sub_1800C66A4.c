/*
 * XREFs of sub_1800C66A4 @ 0x1800C66A4
 * Callers:
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_1800C6C50 @ 0x1800C6C50 (sub_1800C6C50.c)
 *     sub_1800C7054 @ 0x1800C7054 (sub_1800C7054.c)
 *     sub_1800C7330 @ 0x1800C7330 (sub_1800C7330.c)
 * Callees:
 *     sub_18002EB3C @ 0x18002EB3C (sub_18002EB3C.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

unsigned __int64 __fastcall sub_1800C66A4(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 result; // rax

  v2 = a1[1];
  if ( v2 >= a1[2] && !sub_18002EB3C((__int64)a1, v2 + 1) )
    sub_1800B8610(-2147024882);
  result = v2;
  *(_QWORD *)(*a1 + 8 * v2) = *a2;
  ++a1[1];
  return result;
}
