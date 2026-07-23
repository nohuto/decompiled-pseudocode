/*
 * XREFs of PopPowerAggregatorHandleDirectedDripsIntent @ 0x1408EE430
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleDirectedDripsIntent(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 24) != 1 )
    return 3221266435LL;
  *(_DWORD *)a2 = 1;
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a2 + 28) = *(_QWORD *)(a1 + 52);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a1 + 60);
  result = 0LL;
  *(_BYTE *)(a2 + 41) = 1;
  return result;
}
