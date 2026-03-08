/*
 * XREFs of DpiPendingIrpCancelQueueRemove @ 0x1C005ECF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPendingIrpCancelQueueRemove(PIO_CSQ Csq, PIRP Irp)
{
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *Blink; // rax

  if ( Irp == (PIRP)Csq[1].CsqAcquireLock )
  {
    Csq[1].CsqAcquireLock = 0LL;
  }
  else if ( Irp == *(PIRP *)&Csq[2].Type )
  {
    *(_QWORD *)&Csq[2].Type = 0LL;
  }
  else if ( Irp == (PIRP)Csq[1].CsqPeekNextIrp )
  {
    Csq[1].CsqPeekNextIrp = 0LL;
  }
  else if ( Irp == Csq[1].ReservePointer )
  {
    Csq[1].ReservePointer = 0LL;
  }
  else if ( Irp == (PIRP)Csq[1].CsqReleaseLock )
  {
    Csq[1].CsqReleaseLock = 0LL;
  }
  else if ( Irp == (PIRP)Csq[2].CsqInsertIrp )
  {
    Csq[2].CsqInsertIrp = 0LL;
  }
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
  Flink = p_ListEntry->ListEntry.Flink;
  if ( (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)p_ListEntry->ListEntry.Flink->Blink != p_ListEntry
    || (Blink = p_ListEntry->ListEntry.Blink,
        (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)Blink->Flink != p_ListEntry) )
  {
    __fastfail(3u);
  }
  Blink->Flink = Flink;
  Flink->Blink = Blink;
}
