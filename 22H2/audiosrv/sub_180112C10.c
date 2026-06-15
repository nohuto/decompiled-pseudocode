/*
 * XREFs of sub_180112C10 @ 0x180112C10
 * Callers:
 *     sub_180111980 @ 0x180111980 (sub_180111980.c)
 *     sub_180112C60 @ 0x180112C60 (sub_180112C60.c)
 *     sub_180112CEC @ 0x180112CEC (sub_180112CEC.c)
 *     sub_18013E790 @ 0x18013E790 (sub_18013E790.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

void __fastcall sub_180112C10(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax

  v2 = a1;
  if ( !a2 )
    sub_1800B8610(-2147467259);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == (_QWORD *)v2[1] )
    v2[1] = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  sub_1800D0F78(v2, a2);
}
