/*
 * XREFs of PopPowerAggregatorHandleModernStandbyResumeIntent @ 0x1408EE580
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     PopPowerAggregatorGetModernStandbySessionType @ 0x1408EE3B8 (PopPowerAggregatorGetModernStandbySessionType.c)
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyResumeIntent(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // xmm0_8
  int v3; // r9d
  char v4; // dl
  int ModernStandbySessionType; // eax
  __int64 v6; // r10
  int v7; // r9d
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 24) != 2 )
    return 3221266435LL;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = *(_BYTE *)(a1 + 48);
  v8 = *(_QWORD *)(a1 + 8);
  v2 = v8;
  v9 = v3;
  ModernStandbySessionType = PopPowerAggregatorGetModernStandbySessionType(&v8, v4);
  *(_DWORD *)(v6 + 24) = ModernStandbySessionType;
  result = 0LL;
  *(_QWORD *)(v6 + 28) = v2;
  *(_DWORD *)v6 = 1;
  *(_DWORD *)(v6 + 36) = v7;
  return result;
}
