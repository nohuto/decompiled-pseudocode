/*
 * XREFs of ExpValidateWorkItem @ 0x14033F620
 * Callers:
 *     ExpTryQueueWorkItem @ 0x140308AAC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemFromIo @ 0x14033EDC0 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x140353EB0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x1404631EE (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14060A7DC (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpValidateWorkItem(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // r9
  __int64 result; // rax

  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, a2, 0LL);
  v2 = BugCheckParameter2[2];
  result = 0xFFFF800000000000uLL;
  if ( v2 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
