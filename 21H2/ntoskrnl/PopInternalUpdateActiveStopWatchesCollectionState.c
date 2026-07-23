/*
 * XREFs of PopInternalUpdateActiveStopWatchesCollectionState @ 0x140272530
 * Callers:
 *     PoStartStopWatch @ 0x14027137C (PoStartStopWatch.c)
 *     PoPauseStopWatch @ 0x14027149C (PoPauseStopWatch.c)
 *     PoArmStopWatchCollection @ 0x140272598 (PoArmStopWatchCollection.c)
 *     PoUnarmStopWatchCollection @ 0x1402725E8 (PoUnarmStopWatchCollection.c)
 * Callees:
 *     <none>
 */

char __fastcall PopInternalUpdateActiveStopWatchesCollectionState(__int64 a1)
{
  bool v2; // cl
  __int64 v3; // rdx
  char result; // al
  unsigned __int64 v5; // rdx

  v2 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 48), 0) > 0 && *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(a1 + 32);
  result = v3 != 0;
  if ( v2 != (v3 != 0) )
  {
    result = MEMORY[0xFFFFF78000000008];
    if ( v2 )
    {
      *(_QWORD *)(a1 + 32) = MEMORY[0xFFFFF78000000008];
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 40) - v3 + MEMORY[0xFFFFF78000000008];
      result = -1;
      if ( v5 < *(_QWORD *)(a1 + 40) )
        v5 = -1LL;
      *(_QWORD *)(a1 + 32) = 0LL;
      *(_QWORD *)(a1 + 40) = v5;
    }
  }
  return result;
}
