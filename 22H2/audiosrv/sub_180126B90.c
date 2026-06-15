/*
 * XREFs of sub_180126B90 @ 0x180126B90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000AC70 @ 0x18000AC70 (sub_18000AC70.c)
 */

__int64 __fastcall sub_180126B90(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rcx

  result = 2147549183LL;
  if ( !byte_18019D9F0 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  if ( v3 )
    return sub_18000AC70(v3, a2, 1, 0LL);
  return result;
}
