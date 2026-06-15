/*
 * XREFs of sub_18013C7F0 @ 0x18013C7F0
 * Callers:
 *     sub_18013C398 @ 0x18013C398 (sub_18013C398.c)
 *     sub_18013C3EC @ 0x18013C3EC (sub_18013C3EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18013C7F0(__int64 a1)
{
  __int64 result; // rax

  if ( *(int *)(a1 + 136) <= 0 )
    return 0LL;
  result = 1LL;
  if ( *(_DWORD *)(a1 + 4LL * *(int *)(a1 + 136) + 4) != 1 )
    return 0LL;
  return result;
}
