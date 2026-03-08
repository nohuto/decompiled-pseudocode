/*
 * XREFs of PfTFullEventListAdd @ 0x1402EE12C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1402EE0E0 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x1407E5B18 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14035B6E4 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C64FA0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C64FA0.Alignment);
    if ( LOWORD(stru_140C64FA0.Alignment) <= (unsigned int)dword_140C64FB0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C64FA0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(&stru_140C64F20, result, 1);
  }
  return result;
}
