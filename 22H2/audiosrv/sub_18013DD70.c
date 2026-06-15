/*
 * XREFs of sub_18013DD70 @ 0x18013DD70
 * Callers:
 *     sub_18013D0A4 @ 0x18013D0A4 (sub_18013D0A4.c)
 *     sub_18013D0B0 @ 0x18013D0B0 (sub_18013D0B0.c)
 *     sub_18013D4B8 @ 0x18013D4B8 (sub_18013D4B8.c)
 *     sub_18013DE30 @ 0x18013DE30 (sub_18013DE30.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_18013D4B8 @ 0x18013D4B8 (sub_18013D4B8.c)
 */

__int64 __fastcall sub_18013DD70(__int64 *a1)
{
  __int64 *v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // rcx

  for ( ; a1[2]; result = sub_18013D4B8((__int64)a1, v2) )
  {
    v2 = (__int64 *)*a1;
    if ( !*a1 )
      sub_1800B8610(-2147467259);
    *a1 = *v2;
  }
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[4] = 0LL;
  v4 = (_QWORD *)a1[3];
  if ( v4 )
  {
    result = sub_1800524BC(v4);
    a1[3] = 0LL;
  }
  return result;
}
