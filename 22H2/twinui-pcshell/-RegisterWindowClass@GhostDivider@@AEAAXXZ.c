/*
 * XREFs of ?RegisterWindowClass@GhostDivider@@AEAAXXZ @ 0x18048F9CC
 * Callers:
 *     ?RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4GhostDividerPlacement@@@Z @ 0x18048FA4C (-RuntimeClassInitialize@GhostDivider@@QEAAJPEAUIPriviledgedPositioner@@PEAUIApplicationView@@W4G.c)
 * Callees:
 *     memset_0 @ 0x180090958 (memset_0.c)
 */

void __fastcall GhostDivider::RegisterWindowClass(GhostDivider *this)
{
  HCURSOR CursorW; // rax
  WNDCLASSEXW v2; // [rsp+20h] [rbp-58h] BYREF

  v2.cbSize = 80;
  memset_0(&v2.style, 0, 0x4CuLL);
  v2.lpfnWndProc = (WNDPROC)CWRLImpWndProc<GhostDivider>::s_WndProcBase;
  v2.hInstance = &_ImageBase;
  v2.lpszClassName = L"GhostDivider";
  CursorW = LoadCursorW(0LL, (LPCWSTR)0x7F84);
  v2.cbWndExtra = 8;
  v2.hCursor = CursorW;
  RegisterClassExW(&v2);
}
