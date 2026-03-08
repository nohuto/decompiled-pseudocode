/*
 * XREFs of EtwpCovSampPushListSList @ 0x140461D1E
 * Callers:
 *     EtwpCovSampCaptureQueueDpc @ 0x140461BD0 (EtwpCovSampCaptureQueueDpc.c)
 *     EtwpCovSampLookasideFlushFreeListToCleanupList @ 0x1406014D8 (EtwpCovSampLookasideFlushFreeListToCleanupList.c)
 * Callees:
 *     InterlockedPushListSList @ 0x140420510 (InterlockedPushListSList.c)
 */

PSLIST_ENTRY __fastcall EtwpCovSampPushListSList(union _SLIST_HEADER *a1, struct _SLIST_ENTRY *a2, ULONG *a3)
{
  struct _SLIST_ENTRY *Next; // r9
  ULONG v5; // ebx
  struct _SLIST_ENTRY *i; // r8
  PSLIST_ENTRY result; // rax

  Next = a2->Next;
  v5 = 1;
  for ( i = a2; Next; Next = Next->Next )
  {
    ++v5;
    i = Next;
  }
  result = InterlockedPushListSList(a1, a2, i, v5);
  *a3 = v5;
  return result;
}
