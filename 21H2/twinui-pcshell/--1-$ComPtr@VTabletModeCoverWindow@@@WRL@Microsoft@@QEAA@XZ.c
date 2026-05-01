/*
 * XREFs of ??1?$ComPtr@VTabletModeCoverWindow@@@WRL@Microsoft@@QEAA@XZ @ 0x180484744
 * Callers:
 *     ??$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVTabletModeCoverWindow@@AEAPEAUIUnknown@@@Z @ 0x180484544 (--$MakeAndInitialize@VTabletModeCoverWindow@@V1@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAP.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWindow_IUnknown___&__::_1_::dtor$2 @ 0x1804845EC (_Microsoft--WRL--Details--MakeAndInitialize_TabletModeCoverWindow_TabletModeCoverWi_ea_1804845EC.c)
 *     _CoverWindow_CreateInstance_::_1_::dtor$0 @ 0x180484B30 (_CoverWindow_CreateInstance_--_1_--dtor$0.c)
 *     _CWRLImpWndProc_TabletModeCoverWindow_::s_WndProcBase_::_1_::dtor$0 @ 0x180485F8E (_CWRLImpWndProc_TabletModeCoverWindow_--s_WndProcBase_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<TabletModeCoverWindow>::~ComPtr<TabletModeCoverWindow>(volatile int **a1)
{
  return Microsoft::WRL::ComPtr<TabletModeCoverWindow>::InternalRelease(a1);
}
