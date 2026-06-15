/*
 * XREFs of sub_180046740 @ 0x180046740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180046740(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *(_DWORD *)(a1 - 24);
  return result;
}
