/*
 * XREFs of ExpTypeToPriority @ 0x14023E0A0
 * Callers:
 *     ExpTryQueueWorkItem @ 0x14023B73C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140277F2C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemFromIo @ 0x14030DB68 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItemEx @ 0x140343218 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x1405B6EA8 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return *((unsigned int *)ExpBuiltinPriorities + (int)a1);
}
