/*
 * XREFs of PopPowerAggregatorHandleModernStandbySuspendIntent @ 0x1408EE5E0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbySuspendIntent(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // r8d
  int v4; // r9d
  int v5; // r9d

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( !v2 )
    goto LABEL_10;
  v4 = v2 - 1;
  if ( v4 )
  {
    if ( v4 != 1 )
      return (unsigned int)-1073700861;
LABEL_10:
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 24);
    *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 40);
    *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 56);
    return v3;
  }
  if ( *(_BYTE *)(a1 + 64) )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v5 = *(_DWORD *)(a1 + 48);
    *(_DWORD *)a2 = 2;
    if ( ((v5 - 1) & 0xFFFFFFF9) == 0 && v5 != 7 )
      *(_BYTE *)(a2 + 24) = 1;
  }
  return v3;
}
