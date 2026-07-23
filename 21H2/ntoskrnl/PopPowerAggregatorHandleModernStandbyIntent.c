/*
 * XREFs of PopPowerAggregatorHandleModernStandbyIntent @ 0x1408EE4C0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     PopPowerAggregatorAllowModernStandbyPromotion @ 0x1408EE0DC (PopPowerAggregatorAllowModernStandbyPromotion.c)
 *     PopPowerAggregatorGetModernStandbySessionType @ 0x1408EE3B8 (PopPowerAggregatorGetModernStandbySessionType.c)
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyIntent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // xmm0_8
  int v4; // r10d
  int ModernStandbySessionType; // eax
  __int64 v7; // r9
  int v8; // r10d
  _DWORD *v9; // r11
  unsigned int v10; // r10d
  _OWORD *v11; // r9
  _OWORD *v12; // r11
  __int64 v14; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 16);
  v14 = v3;
  v15 = v4;
  ModernStandbySessionType = PopPowerAggregatorGetModernStandbySessionType(&v14, a3 == 2);
  if ( *v9 <= 2u )
  {
    *(_QWORD *)(v7 + 28) = v3;
    *(_DWORD *)(v7 + 36) = v8;
    *(_DWORD *)v7 = 1;
    *(_DWORD *)(v7 + 24) = ModernStandbySessionType;
    if ( *v9 == 1 )
    {
      *(_BYTE *)(v7 + 40) = *(_BYTE *)(a1 + 64);
    }
    else if ( PopPowerAggregatorOneWayEntry )
    {
      *(_BYTE *)(v7 + 40) = 1;
    }
    if ( !PopPowerAggregatorAllowModernStandbyPromotion(v9, (_DWORD *)v7) )
    {
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
    }
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v10;
}
