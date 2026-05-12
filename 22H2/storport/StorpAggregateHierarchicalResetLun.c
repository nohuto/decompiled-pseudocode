/*
 * XREFs of StorpAggregateHierarchicalResetLun @ 0x1C0051A98
 * Callers:
 *     RaidUnitResetUnit @ 0x1C004B6C0 (RaidUnitResetUnit.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall StorpAggregateHierarchicalResetLun(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int8 result; // al
  __int64 v4; // r9

  result = 0;
  if ( a1 )
  {
    while ( 1 )
    {
      v4 = result;
      if ( a3 <= TraceLoggingResetLatencyBuckets[result] )
        break;
      if ( ++result >= 5u )
        return result;
    }
    ++*(_DWORD *)(a1 + 12LL * result + 5220);
    result = a2 & 0x3F;
    if ( (a2 & 0x3F) == 1 )
      ++*(_DWORD *)(a1 + 12 * v4 + 5224);
    else
      *(_BYTE *)(a1 + 12 * v4 + 5228) = a2;
  }
  return result;
}
