/*
 * XREFs of ExpValidateWorkItem @ 0x14023E058
 * Callers:
 *     ExpTryQueueWorkItem @ 0x14023B73C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140277F2C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x14030DB68 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x140343218 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x14038AE38 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B6EA8 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
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
  result = 0x7FFFFFFF0000LL;
  if ( v2 <= 0x7FFFFFFF0000LL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  return result;
}
