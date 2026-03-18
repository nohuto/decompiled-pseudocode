/*
 * XREFs of ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C01DE418
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C01E1DE0 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C01E11D4 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::HandleInertiaTimer(struct tagPOINT *this)
{
  if ( LOBYTE(this[47].x) && (this[46].y & 1) != 0 )
    CInertiaManager::PostInertiaMessage(
      (CInertiaManager *)this,
      0x23Bu,
      (const struct INERTIA_INFO_INTERNAL *)&this[20],
      this[44],
      this[45]);
  LOBYTE(this[47].x) = 0;
}
