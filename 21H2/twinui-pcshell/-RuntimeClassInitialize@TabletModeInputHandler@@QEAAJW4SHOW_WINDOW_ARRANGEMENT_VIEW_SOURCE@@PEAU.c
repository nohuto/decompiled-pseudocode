/*
 * XREFs of ?RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@@Z @ 0x1804840D8
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeInputHandler@@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPEAUITabletModeInputCallback@@@Z @ 0x180483D9C (--$MakeAndInitialize@VTabletModeInputHandler@@V1@AEAW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@AEAPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180090978 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801ABF38 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollection@@@Z @ 0x1801E9CA8 (--4-$ComPtr@UIVirtualDesktopCollection@@@WRL@Microsoft@@QEAAAEAV012@PEAUIVirtualDesktopCollectio.c)
 *     ?Shutdown@TabletModeInputHandler@@UEAAXXZ @ 0x180484240 (-Shutdown@TabletModeInputHandler@@UEAAXXZ.c)
 *     ?TakeForeground@TabletModeInputHandler@@UEAAJXZ @ 0x180484390 (-TakeForeground@TabletModeInputHandler@@UEAAJXZ.c)
 */

__int64 __fastcall TabletModeInputHandler::RuntimeClassInitialize(__int64 a1, int a2, __int64 a3)
{
  const char *v5; // r9
  WNDCLASSEXW v7; // [rsp+60h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *(_DWORD *)(a1 + 40) = a2;
  Microsoft::WRL::ComPtr<IVirtualDesktopCollection>::operator=((__int64 *)(a1 + 32), a3);
  v7.cbSize = 80;
  memset_0(&v7.style, 0, 0x4CuLL);
  v7.cbWndExtra = 8;
  v7.lpfnWndProc = (WNDPROC)CWRLImpWndProc<TabletModeInputHandler>::s_WndProcBase;
  v7.hInstance = &_ImageBase;
  v7.lpszClassName = L"TabletModeInputHandler";
  RegisterClassExW(&v7);
  CreateWindowExW(
    0x8200000u,
    L"TabletModeInputHandler",
    0LL,
    0x80000000,
    0,
    0,
    0,
    0,
    HWND_MESSAGE,
    0LL,
    &_ImageBase,
    (LPVOID)a1);
  if ( !*(_QWORD *)(a1 + 24) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x59,
             (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeinputhandler.cpp",
             v5);
  if ( a2 == 2 )
    return 0LL;
  if ( (int)TabletModeInputHandler::TakeForeground((TabletModeInputHandler *)a1) >= 0 )
  {
    if ( *(_DWORD *)(a1 + 40) )
      SetCapture(*(HWND *)(a1 + 24));
    return 0LL;
  }
  TabletModeInputHandler::Shutdown((TabletModeInputHandler *)a1);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6C,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeinputhandler.cpp",
    (const char *)0x8000FFFFLL);
  return 2147549183LL;
}
