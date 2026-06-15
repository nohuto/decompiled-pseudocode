/*
 * XREFs of sub_180141480 @ 0x180141480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180141480(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = 3 * *(_DWORD *)(a1 + 40);
  return result;
}
