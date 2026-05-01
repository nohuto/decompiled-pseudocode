/*
 * XREFs of ?_RegisterBufferTagWindowClass@CAppTransitionManager@@AEAAXXZ @ 0x180435DDC
 * Callers:
 *     ?_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ @ 0x1804354AC (-_EnsureWindowForBufferTag@CAppTransitionManager@@AEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x180090958 (memset_0.c)
 */

void __fastcall CAppTransitionManager::_RegisterBufferTagWindowClass(CAppTransitionManager *this)
{
  HBRUSH StockObject; // rax
  WNDCLASSEXW v2; // [rsp+20h] [rbp-58h] BYREF

  v2.cbSize = 80;
  memset_0(&v2.style, 0, 0x4CuLL);
  v2.lpfnWndProc = DefWindowProcW;
  v2.style = 3;
  v2.hInstance = &_ImageBase;
  v2.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  StockObject = (HBRUSH)GetStockObject(4);
  v2.lpszMenuName = 0LL;
  v2.cbWndExtra = 0;
  v2.hbrBackground = StockObject;
  v2.lpszClassName = L"BufferTagWindow";
  RegisterClassExW(&v2);
}
