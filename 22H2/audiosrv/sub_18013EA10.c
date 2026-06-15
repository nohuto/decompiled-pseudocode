/*
 * XREFs of sub_18013EA10 @ 0x18013EA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18013EA10(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *(_DWORD *)(a1 + 112);
  return result;
}
