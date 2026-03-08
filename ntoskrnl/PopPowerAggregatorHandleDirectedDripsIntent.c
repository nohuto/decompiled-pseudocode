/*
 * XREFs of PopPowerAggregatorHandleDirectedDripsIntent @ 0x140990930
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleDirectedDripsIntent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 16) != 1 )
    return 3221266435LL;
  *(_DWORD *)a2 = 1;
  result = 0LL;
  *(_BYTE *)(a2 + 26) = 1;
  return result;
}
