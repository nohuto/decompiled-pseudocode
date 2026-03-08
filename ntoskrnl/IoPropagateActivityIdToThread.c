/*
 * XREFs of IoPropagateActivityIdToThread @ 0x1402B1D20
 * Callers:
 *     <none>
 * Callees:
 *     IopIrpHasExtensionType @ 0x1402B1D58 (IopIrpHasExtensionType.c)
 *     IoGetActivityIdIrp @ 0x1402C1630 (IoGetActivityIdIrp.c)
 */

__int64 __fastcall IoPropagateActivityIdToThread(__int64 a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY **a3)
{
  __int64 v5; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  struct _LIST_ENTRY *Flink; // rax

  if ( !(unsigned __int8)IopIrpHasExtensionType(a1, 0LL) )
    return 3221226021LL;
  IoGetActivityIdIrp(v5, a2);
  CurrentThread = KeGetCurrentThread();
  Flink = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = a2;
  *a3 = Flink;
  return 0LL;
}
