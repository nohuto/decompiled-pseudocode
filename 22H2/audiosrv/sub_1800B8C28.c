/*
 * XREFs of sub_1800B8C28 @ 0x1800B8C28
 * Callers:
 *     sub_1800356E8 @ 0x1800356E8 (sub_1800356E8.c)
 *     sub_1800BA30C @ 0x1800BA30C (sub_1800BA30C.c)
 * Callees:
 *     sub_1800356E8 @ 0x1800356E8 (sub_1800356E8.c)
 */

__int64 __fastcall sub_1800B8C28(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 32);
  *a2 = result;
  v3 = (*(_QWORD *)(a1 + 16))-- == 1LL;
  *(_QWORD *)(a1 + 32) = a2;
  if ( v3 )
    return sub_1800356E8(a1);
  return result;
}
