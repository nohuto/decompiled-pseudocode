/*
 * XREFs of ?OnWindowCreated@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5858
 * Callers:
 *     ?RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z @ 0x18040692C (-RuntimeClassInitialize@AltEscHotkeyHandler@@QEAAJPEAUIWeakReference@WeakReference@@@Z.c)
 * Callees:
 *     ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5828 (-AddWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 */

void __fastcall CImpWorkerWndProc::OnWindowCreated(HANDLE *this)
{
  if ( *((_BYTE *)this + 16) )
    CImpWorkerWndProc::AddWndRef(this);
}
