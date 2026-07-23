/*
 * XREFs of PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x14077A7E0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleSystemTransitionEndIntent(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) != 3 )
    return 3221266435LL;
  result = 0LL;
  *a2 = 0;
  return result;
}
