/*
 * XREFs of PfTFullEventListAdd @ 0x1402F4DDC
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x1402F4D90 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x14074B1EC (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x1402F5694 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x1404287F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C65420, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C65420.Alignment);
    if ( LOWORD(stru_140C65420.Alignment) <= (unsigned int)dword_140C65430 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C65420);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(&stru_140C653A0, result, 1);
  }
  return result;
}
