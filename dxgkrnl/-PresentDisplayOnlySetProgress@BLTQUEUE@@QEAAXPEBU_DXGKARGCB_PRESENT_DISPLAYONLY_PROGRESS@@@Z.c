/*
 * XREFs of ?PresentDisplayOnlySetProgress@BLTQUEUE@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C006D494
 * Callers:
 *     ?PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@@Z @ 0x1C006D50C (-PresentDisplayOnlySetProgress@DXGDODPRESENT@@QEAAXPEBU_DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS@@.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTQUEUE::PresentDisplayOnlySetProgress(
        BLTQUEUE *this,
        const struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS *a2)
{
  if ( *((_DWORD *)this + 180) )
  {
    if ( a2->ProgressId == DXGK_PRESENT_DISPLAYONLY_PROGRESS_ID_FAILED )
      _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)this + 140LL), 0x40000000u);
    if ( KeGetCurrentIrql() > 2u )
      KeInsertQueueDpc((PRKDPC)((char *)this + 656), 0LL, 0LL);
    else
      KeSetEvent((PRKEVENT)((char *)this + 632), 0, 0);
  }
}
