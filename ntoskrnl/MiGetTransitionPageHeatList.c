/*
 * XREFs of MiGetTransitionPageHeatList @ 0x1406518EC
 * Callers:
 *     MiMakeTransitionHeatBatch @ 0x140651CD4 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 */

PSLIST_ENTRY MiGetTransitionPageHeatList()
{
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v1; // rdx
  signed __int32 v2; // eax
  signed __int32 v3; // ett

  result = RtlpInterlockedPopEntrySList(&stru_140C67F60);
  v1 = result;
  if ( result )
  {
    HIDWORD(result->Next) = 0;
    LODWORD(result->Next) = 1;
  }
  else
  {
    v2 = dword_140C67F70;
    while ( v2 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange(&dword_140C67F70, v2 - 1, v2);
      if ( v3 == v2 )
        return v1;
    }
    return (PSLIST_ENTRY)-1LL;
  }
  return result;
}
