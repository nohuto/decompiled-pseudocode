/*
 * XREFs of PopPowerAggregatorAllowModernStandbyPromotion @ 0x1408EE0DC
 * Callers:
 *     PopPowerAggregatorHandleModernStandbyIntent @ 0x1408EE4C0 (PopPowerAggregatorHandleModernStandbyIntent.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPowerAggregatorAllowModernStandbyPromotion(_DWORD *a1, _DWORD *a2)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = 1;
  if ( *a1 == 1 )
  {
    v4 = a1[1];
    if ( v4 == 3 )
    {
      if ( a2[1] == 2 )
        return 0;
    }
    else if ( v4 == 2 && a2[1] == 3 )
    {
      return result;
    }
    v5 = a2[2];
    if ( v5 == 4 )
    {
      if ( !a2[8] )
        return 0;
    }
    else if ( v5 != 43 && v5 != 46 && (v5 != 45 || a1[2] == 45) )
    {
      return 0;
    }
  }
  return result;
}
