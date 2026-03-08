/*
 * XREFs of PopPowerAggregatorHandleModernStandbyIntent @ 0x140990960
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     PopPowerAggregatorAllowModernStandbyPromotion @ 0x14099049C (PopPowerAggregatorAllowModernStandbyPromotion.c)
 */

__int64 __fastcall PopPowerAggregatorHandleModernStandbyIntent(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v4; // rdx
  __int64 v5; // r10

  if ( *(_DWORD *)(a1 + 16) <= 2u )
  {
    *(_DWORD *)a2 = 1;
    if ( a3 == 2 )
      *(_BYTE *)(a2 + 24) = 1;
    if ( *(_DWORD *)(a1 + 16) == 1 )
    {
      *(_BYTE *)(a2 + 25) = *(_BYTE *)(a1 + 41);
    }
    else if ( PopPowerAggregatorOneWayEntry )
    {
      *(_BYTE *)(a2 + 25) = 1;
    }
    if ( !PopPowerAggregatorAllowModernStandbyPromotion(a1, a2) )
    {
      *(_OWORD *)v4 = *(_OWORD *)(v5 + 16);
      *(_OWORD *)(v4 + 16) = *(_OWORD *)(v5 + 32);
      *(_QWORD *)(v4 + 32) = *(_QWORD *)(v5 + 48);
    }
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v3;
}
