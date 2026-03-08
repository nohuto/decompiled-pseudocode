/*
 * XREFs of ExpTypeToPriority @ 0x140343758
 * Callers:
 *     ExpTryQueueWorkItem @ 0x140308AAC (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1403439E0 (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x140353EB0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14060A7DC (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpTypeToPriority(unsigned int a1)
{
  if ( a1 >= 7 )
    return a1 - 32;
  else
    return (unsigned int)ExpBuiltinPriorities[a1];
}
