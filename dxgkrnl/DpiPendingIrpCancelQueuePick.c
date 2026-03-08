/*
 * XREFs of DpiPendingIrpCancelQueuePick @ 0x1C00241E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY **__fastcall DpiPendingIrpCancelQueuePick(PIO_CSQ Csq, PIRP Irp, struct _LIST_ENTRY **PeekContext)
{
  struct _LIST_ENTRY **v3; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v3 = (struct _LIST_ENTRY **)&Csq[1];
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = *v3;
  while ( 1 )
  {
    if ( Flink == (struct _LIST_ENTRY *)v3 )
      return 0LL;
    if ( PeekContext == &Flink[-11].Blink || !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return &Flink[-11].Blink;
}
