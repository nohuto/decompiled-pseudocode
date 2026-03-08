/*
 * XREFs of PopPowerAggregatorAreTargetStatesEqual @ 0x1409904F0
 * Callers:
 *     PopPowerAggregatorRecordIntent @ 0x140757470 (PopPowerAggregatorRecordIntent.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPowerAggregatorAreTargetStatesEqual(int *a1, __int64 a2)
{
  int v2; // r8d
  char v4; // cl
  int v5; // r8d
  int v6; // r8d
  bool v7; // zf

  v2 = *a1;
  if ( *a1 != *(_DWORD *)a2 || a1[1] != *(_DWORD *)(a2 + 4) || a1[2] != *(_DWORD *)(a2 + 8) )
    return 0;
  v4 = 0;
  if ( !v2 )
    return 1;
  v5 = v2 - 1;
  if ( !v5 )
  {
    if ( *((_BYTE *)a1 + 25) != *(_BYTE *)(a2 + 25) || *((_BYTE *)a1 + 26) != *(_BYTE *)(a2 + 26) )
      return v4;
    v7 = *((_BYTE *)a1 + 24) == *(_BYTE *)(a2 + 24);
    goto LABEL_15;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( *((_BYTE *)a1 + 28) != *(_BYTE *)(a2 + 28) )
      return v4;
    v7 = a1[6] == *(_DWORD *)(a2 + 24);
    goto LABEL_15;
  }
  if ( v6 != 2 )
    return 1;
  if ( *((_BYTE *)a1 + 24) == *(_BYTE *)(a2 + 24) )
  {
    v7 = a1[7] == *(_DWORD *)(a2 + 28);
LABEL_15:
    if ( v7 )
      return 1;
  }
  return v4;
}
