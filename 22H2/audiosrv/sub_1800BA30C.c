/*
 * XREFs of sub_1800BA30C @ 0x1800BA30C
 * Callers:
 *     sub_1800B8630 @ 0x1800B8630 (sub_1800B8630.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800B8C28 @ 0x1800B8C28 (sub_1800B8C28.c)
 */

__int64 __fastcall sub_1800BA30C(__int64 *a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = (__int64 *)*a1;
  if ( !*a1 )
    sub_1800B8610(-2147467259);
  v2 = *v1;
  v3 = v1[2];
  *a1 = *v1;
  if ( v2 )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    a1[1] = 0LL;
  sub_1800B8C28((__int64)a1, v1);
  return v3;
}
