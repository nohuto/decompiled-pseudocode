/*
 * XREFs of PfTFullEventListAdd @ 0x14030F56C
 * Callers:
 *     PfpEventHandleFullBuffer @ 0x14030F520 (PfpEventHandleFullBuffer.c)
 *     PfpFlushEventBuffers @ 0x140631270 (PfpFlushEventBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x14026E808 (PfFbBufferListInsertInFree.c)
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall PfTFullEventListAdd(PSLIST_ENTRY ListEntry)
{
  PSLIST_ENTRY result; // rax

  RtlpInterlockedPushEntrySList(&stru_140C4FDA0, ListEntry);
  while ( 1 )
  {
    result = (PSLIST_ENTRY)LOWORD(stru_140C4FDA0.Alignment);
    if ( LOWORD(stru_140C4FDA0.Alignment) <= (unsigned int)dword_140C4FDB0 )
      break;
    result = RtlpInterlockedPopEntrySList(&stru_140C4FDA0);
    if ( !result )
      break;
    PfFbBufferListInsertInFree(
      (_SLIST_ENTRY *)&stru_140C4FD20,
      result,
      LODWORD(result[2].Next) - (_DWORD)result,
      *((_DWORD *)&result[2].Next + 3),
      1);
  }
  return result;
}
