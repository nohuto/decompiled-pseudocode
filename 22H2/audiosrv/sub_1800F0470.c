/*
 * XREFs of sub_1800F0470 @ 0x1800F0470
 * Callers:
 *     sub_1800F0AF8 @ 0x1800F0AF8 (sub_1800F0AF8.c)
 * Callees:
 *     sub_180048790 @ 0x180048790 (sub_180048790.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 */

_QWORD *__fastcall sub_1800F0470(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rbx
  _QWORD *result; // rax

  v6 = sub_180055F40(0x10uLL);
  v7 = v6;
  if ( v6 )
  {
    v8 = *a3;
    sub_180048790(v6, *a2);
    v7[1] = v8;
  }
  else
  {
    v7 = 0LL;
  }
  result = a1;
  *a1 = v7;
  return result;
}
