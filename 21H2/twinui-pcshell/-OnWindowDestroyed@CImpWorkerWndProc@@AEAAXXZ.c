/*
 * XREFs of ?OnWindowDestroyed@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5874
 * Callers:
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180406A70 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D58A8 (-ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 */

void __fastcall CImpWorkerWndProc::OnWindowDestroyed(HANDLE *this)
{
  if ( *((_BYTE *)this + 16) )
  {
    SetEvent(this[4]);
    CImpWorkerWndProc::ReleaseWndRef((CImpWorkerWndProc *)this);
  }
}
