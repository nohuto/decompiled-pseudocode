/*
 * XREFs of ExpTypeToPriority @ 0x1402B951C
 * Callers:
 *     ExQueueWorkItemToPartition @ 0x1402B956C (ExQueueWorkItemToPartition.c)
 *     ExpTryQueueWorkItem @ 0x1402B990C (ExpTryQueueWorkItem.c)
 *     ExQueueWorkItemEx @ 0x14030B180 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemExFromIo @ 0x14060CC1C (ExQueueWorkItemExFromIo.c)
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
