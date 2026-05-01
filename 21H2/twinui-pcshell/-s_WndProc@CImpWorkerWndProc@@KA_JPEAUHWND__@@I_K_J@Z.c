/*
 * XREFs of ?s_WndProc@CImpWorkerWndProc@@KA_JPEAUHWND__@@I_K_J@Z @ 0x180406A70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5828 (-AddWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?OnWindowDestroyed@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D5874 (-OnWindowDestroyed@CImpWorkerWndProc@@AEAAXXZ.c)
 *     ?ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ @ 0x1800D58A8 (-ReleaseWndRef@CImpWorkerWndProc@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

LRESULT __fastcall CImpWorkerWndProc::s_WndProc(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  HANDLE *WindowLongPtrW; // rax
  HANDLE *v9; // rbx
  __int64 v10; // rsi

  WindowLongPtrW = (HANDLE *)GetWindowLongPtrW(hWnd, 0);
  v9 = WindowLongPtrW;
  if ( !WindowLongPtrW )
    return DefWindowProcW(hWnd, Msg, wParam, lParam);
  CImpWorkerWndProc::AddWndRef(WindowLongPtrW);
  v10 = (*((__int64 (__fastcall **)(HANDLE *, HWND, _QWORD, WPARAM, LPARAM))*v9 + 1))(v9, hWnd, Msg, wParam, lParam);
  if ( Msg == 130 )
  {
    SetWindowLongPtrW(hWnd, 0, 0LL);
    v9[1] = 0LL;
    CImpWorkerWndProc::OnWindowDestroyed(v9);
  }
  CImpWorkerWndProc::ReleaseWndRef(v9);
  return v10;
}
