/*
 * XREFs of PopPowerAggregatorHandleActiveIntent @ 0x1408EE3F0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleActiveIntent(__int64 a1, _DWORD *a2)
{
  int v2; // r8d
  int v3; // r8d
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      result = *(_BYTE *)(a1 + 64) != 0 ? 0xC0000001 : 0;
      goto LABEL_7;
    }
    if ( v3 != 1 )
      return 3221266435LL;
  }
  result = 0LL;
LABEL_7:
  if ( (int)result >= 0 )
    *a2 = 0;
  return result;
}
