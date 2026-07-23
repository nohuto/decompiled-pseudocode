/*
 * XREFs of PopPowerAggregatorAreTargetStatesEqual @ 0x1408EE134
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x140776120 (PopPowerAggregatorRecordIntent.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopPowerAggregatorAreTargetStatesEqual(int *a1, __int64 a2)
{
  int v2; // r9d
  char v4; // cl
  int v5; // r9d

  v2 = *a1;
  if ( *a1 != *(_DWORD *)a2 || a1[1] != *(_DWORD *)(a2 + 4) || a1[2] != *(_DWORD *)(a2 + 8) )
    return 0;
  v4 = 0;
  if ( !v2 )
    return 1;
  v5 = v2 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
      return *((_BYTE *)a1 + 24) == *(_BYTE *)(a2 + 24);
    return 1;
  }
  if ( a1[6] == *(_DWORD *)(a2 + 24)
    && a1[7] == *(_DWORD *)(a2 + 28)
    && a1[9] == *(_DWORD *)(a2 + 36)
    && *((_BYTE *)a1 + 40) == *(_BYTE *)(a2 + 40)
    && *((_BYTE *)a1 + 41) == *(_BYTE *)(a2 + 41) )
  {
    return 1;
  }
  return v4;
}
