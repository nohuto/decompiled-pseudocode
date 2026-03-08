/*
 * XREFs of PopPowerAggregatorHandleSystemTransitionIntent @ 0x140880210
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140880280 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleSystemTransitionIntent(__int64 a1, __int64 a2, int a3, unsigned int *a4)
{
  __int64 v4; // rbx
  int v5; // edi
  bool v6; // si
  __int64 result; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  v4 = a2;
  if ( *(_DWORD *)(a1 + 16) == 3 )
    return 3221266435LL;
  v5 = *a4;
  v6 = a3 == 10;
  LOBYTE(a2) = a3 == 10;
  result = PopPowerAggregatorDetermineTargetSystemPowerState(*a4, a2, &v8);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(v4 + 28) = v8;
    result = 0LL;
    *(_DWORD *)v4 = 4;
    *(_BYTE *)(v4 + 24) = v6;
    *(_DWORD *)(v4 + 32) = v5;
  }
  return result;
}
