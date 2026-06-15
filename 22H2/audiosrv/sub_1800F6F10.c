/*
 * XREFs of sub_1800F6F10 @ 0x1800F6F10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F694C @ 0x1800F694C (sub_1800F694C.c)
 */

__int64 __fastcall sub_1800F6F10(_QWORD **a1)
{
  _QWORD *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  if ( v2 )
    sub_1800F694C(v2);
  return 0LL;
}
