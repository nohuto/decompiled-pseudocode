/*
 * XREFs of sub_180109200 @ 0x180109200
 * Callers:
 *     <none>
 * Callees:
 *     sub_180105D5C @ 0x180105D5C (sub_180105D5C.c)
 */

_QWORD *__fastcall sub_180109200(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
    return sub_180105D5C(v1);
  return result;
}
