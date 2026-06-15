/*
 * XREFs of sub_18010EAF0 @ 0x18010EAF0
 * Callers:
 *     sub_18010E874 @ 0x18010E874 (sub_18010E874.c)
 *     sub_18010F85C @ 0x18010F85C (sub_18010F85C.c)
 *     sub_18010FC78 @ 0x18010FC78 (sub_18010FC78.c)
 *     sub_180110050 @ 0x180110050 (sub_180110050.c)
 * Callees:
 *     sub_180112F8C @ 0x180112F8C (sub_180112F8C.c)
 */

__int64 __fastcall sub_18010EAF0(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx

  v1 = a1[17];
  if ( v1 )
  {
    sub_180112F8C(qword_18019E608, v1, a1[19]);
    v3 = a1[18];
    v4 = a1[17];
    v5 = qword_18019E608;
    a1[19] = 0LL;
    sub_180112F8C(v5, v4, v3);
    a1[18] = 0LL;
  }
  return 0LL;
}
