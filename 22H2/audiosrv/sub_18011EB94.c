/*
 * XREFs of sub_18011EB94 @ 0x18011EB94
 * Callers:
 *     sub_18000E9C0 @ 0x18000E9C0 (sub_18000E9C0.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_18011EB94(__int64 a1, __int64 a2, __int64 a3)
{
  if ( !a2 )
    sub_1800B8610(-2147467259);
  if ( a3 )
    *(_QWORD *)(a3 + 16) = *(_QWORD *)(a2 + 16);
  else
    *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16))) = *(_QWORD *)(a2 + 16);
  return sub_18011B7C0(a1, (_QWORD *)a2);
}
