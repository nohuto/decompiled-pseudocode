/*
 * XREFs of ExQueueWorkItemFromIo @ 0x14030DB68
 * Callers:
 *     IoQueueWorkItem @ 0x14030DB10 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x14030DB40 (IoQueueWorkItemEx.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14036EDA4 (PnpDeviceCompletionRequestDestroy.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14023E058 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x14023E0A0 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x140240E10 (ExpQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

__int64 __fastcall ExQueueWorkItemFromIo(_QWORD *BugCheckParameter2, int a2)
{
  ULONG_PTR v2; // rbx
  int v4; // eax
  __int64 result; // rax

  v2 = a2;
  ExpValidateWorkItem(BugCheckParameter2, a2);
  v4 = ExpTypeToPriority(v2);
  result = ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), BugCheckParameter2, v4, 0xFFFFFFFF, 1u);
  if ( !(_BYTE)result )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)BugCheckParameter2, v2, 0xFFFFFFFFFFFFFFFFuLL);
  return result;
}
