/*
 * XREFs of sub_180047240 @ 0x180047240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180047240(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *(_OWORD *)(a1 - 16);
  return result;
}
