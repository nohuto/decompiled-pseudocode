/*
 * XREFs of RaAllocateConcurrentChannelToken @ 0x1C002AF18
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005010 (RaidAdapterPostScatterGatherExecute.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaAllocateConcurrentChannelToken(__int64 a1)
{
  USHORT CurrentNodeNumber; // ax
  unsigned int v3; // ebx
  PSLIST_ENTRY result; // rax
  unsigned int v5; // edi

  CurrentNodeNumber = KeGetCurrentNodeNumber();
  v3 = CurrentNodeNumber;
  result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4816)
                                                     + ((unsigned __int64)CurrentNodeNumber << 6)));
  if ( !result )
  {
    v5 = KeQueryHighestNodeNumber() + 1;
    do
LABEL_3:
      v3 = 0;
    while ( !v5 );
    while ( 1 )
    {
      result = ExpInterlockedPopEntrySList((PSLIST_HEADER)(*(_QWORD *)(a1 + 4816) + ((unsigned __int64)v3 << 6)));
      if ( result )
        break;
      _mm_pause();
      if ( ++v3 >= v5 )
        goto LABEL_3;
    }
  }
  LODWORD(result[1].Next) = v3;
  return result;
}
