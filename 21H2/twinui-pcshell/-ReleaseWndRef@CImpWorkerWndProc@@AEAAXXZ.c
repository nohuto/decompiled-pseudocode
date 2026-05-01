/*
 * XREFs of ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D58A8
 * Callers:
 *     ?OnWindowDestroyed@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5874 (-OnWindowDestroyed@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180406A70 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImpWorkerWndProc::ReleaseWndRef(HANDLE *this)
{
  if ( *((_BYTE *)this + 16) )
  {
    if ( (*((_DWORD *)this + 5))-- == 1 )
      SetEvent(this[3]);
  }
}
