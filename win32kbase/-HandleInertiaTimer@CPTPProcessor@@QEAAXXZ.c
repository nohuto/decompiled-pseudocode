/*
 * XREFs of ?HandleInertiaTimer@CPTPProcessor@@QEAAXXZ @ 0x1C020DEB0
 * Callers:
 *     ?OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211410 (-OnPTPInertiaTimerNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C0210784 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 */

void __fastcall CPTPProcessor::HandleInertiaTimer(struct tagPOINT *this, __int64 a2, __int64 a3, __int64 a4)
{
  CInertiaManager *v5; // rcx

  if ( LOBYTE(this[48].x) && (this[47].y & 1) != 0 )
  {
    SGDGetUserSessionState(this, a2, a3, a4);
    CInertiaManager::PostInertiaMessage(v5, 0x23Bu, (const struct INERTIA_INFO_INTERNAL *)&this[21], this[45], this[46]);
  }
  LOBYTE(this[48].x) = 0;
}
