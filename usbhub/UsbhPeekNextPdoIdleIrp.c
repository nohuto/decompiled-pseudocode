/*
 * XREFs of UsbhPeekNextPdoIdleIrp @ 0x1C0022740
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

_LIST_ENTRY **__fastcall UsbhPeekNextPdoIdleIrp(char *Csq, PIRP Irp, PVOID PeekContext)
{
  _LIST_ENTRY **p_Blink; // r9
  char *v7; // rcx
  _LIST_ENTRY **v8; // r8
  _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  v7 = Csq - 1464;
  if ( !v7 )
    UsbhTrapFatal_Dbg(MEMORY[0x4A0], Csq);
  v8 = (_LIST_ENTRY **)(v7 + 1448);
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = *v8;
  while ( Flink != (_LIST_ENTRY *)v8 )
  {
    if ( !Flink )
      UsbhTrapFatal_Dbg(*((_QWORD *)v7 + 148), Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (_LIST_ENTRY *)168 )
      UsbhTrapFatal_Dbg(*((_QWORD *)v7 + 148), Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
