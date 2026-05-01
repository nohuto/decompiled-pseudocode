/*
 * XREFs of ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5828
 * Callers:
 *     ?OnWindowCreated@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5858 (-OnWindowCreated@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180406A70 (-s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CImpWorkerWndProc::AddWndRef(HANDLE *this)
{
  if ( *((_BYTE *)this + 16) )
  {
    if ( ++*((_DWORD *)this + 5) == 1 )
      ResetEvent(this[3]);
  }
}
