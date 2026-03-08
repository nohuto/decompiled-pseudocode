/*
 * XREFs of DpiPendingIrpCancelQueueInsert @ 0x1C005ECB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPendingIrpCancelQueueInsert(struct _IO_CSQ *Csq, PIRP Irp)
{
  struct _IO_CSQ *v2; // rcx
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // rdx
  struct _LIST_ENTRY *v4; // rax

  v2 = Csq + 1;
  p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&Irp->Tail.Overlay.ListEntry;
  v4 = *(struct _LIST_ENTRY **)&v2->Type;
  if ( *(struct _IO_CSQ **)(*(_QWORD *)&v2->Type + 8LL) != v2 )
    __fastfail(3u);
  p_ListEntry->ListEntry.Flink = v4;
  p_ListEntry->ListEntry.Blink = (struct _LIST_ENTRY *)v2;
  v4->Blink = &p_ListEntry->ListEntry;
  *(_QWORD *)&v2->Type = p_ListEntry;
}
