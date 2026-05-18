/*
 * XREFs of sub_18012A383 @ 0x18012A383
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B8204 @ 0x1800B8204 (sub_1800B8204.c)
 */

void __fastcall sub_18012A383(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    sub_1800B8204(*(void **)(a2 + 256));
  }
}
