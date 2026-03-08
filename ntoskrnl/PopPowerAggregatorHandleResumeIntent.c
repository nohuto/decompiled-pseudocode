/*
 * XREFs of PopPowerAggregatorHandleResumeIntent @ 0x140595E80
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140880280 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 */

__int64 __fastcall PopPowerAggregatorHandleResumeIntent(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  bool v4; // zf
  char v6; // bp
  int v7; // ecx
  unsigned int v8; // ebx
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 16) == 2;
  v10 = 0;
  if ( !v4 )
    return (unsigned int)-1073700861;
  v6 = *(_BYTE *)(a1 + 44);
  v7 = *(_DWORD *)(a1 + 40) - 1;
  if ( !v7 )
  {
    *(_DWORD *)a2 = 1;
    *(_BYTE *)(a2 + 24) = v6;
    return v2;
  }
  if ( v7 == 3 )
  {
    v8 = *(_DWORD *)(a1 + 48);
    LOBYTE(a2) = v6;
    PopPowerAggregatorDetermineTargetSystemPowerState(v8, a2, &v10);
    *(_DWORD *)(v3 + 28) = v10;
    *(_DWORD *)v3 = 4;
    *(_BYTE *)(v3 + 24) = v6;
    *(_DWORD *)(v3 + 32) = v8;
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v2;
}
