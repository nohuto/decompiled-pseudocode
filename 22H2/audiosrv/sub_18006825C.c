/*
 * XREFs of sub_18006825C @ 0x18006825C
 * Callers:
 *     sub_180056A7C @ 0x180056A7C (sub_180056A7C.c)
 *     sub_18013F4D0 @ 0x18013F4D0 (sub_18013F4D0.c)
 * Callees:
 *     sub_1800524BC @ 0x1800524BC (sub_1800524BC.c)
 */

__int64 __fastcall sub_18006825C(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 64) = 0LL;
  v2 = *(_QWORD **)(a1 + 56);
  if ( v2 )
  {
    result = sub_1800524BC(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  return result;
}
