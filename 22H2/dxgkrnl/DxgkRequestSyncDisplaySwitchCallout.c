/*
 * XREFs of DxgkRequestSyncDisplaySwitchCallout @ 0x1C0316238
 * Callers:
 *     ?DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z @ 0x1C02C1080 (-DisconnectFromDisplayAdaptersWorkItem@@YAXPEAX0PEAU_IO_WORKITEM@@@Z.c)
 *     DpiFdoExcludeAdapterAccess @ 0x1C039B2A0 (DpiFdoExcludeAdapterAccess.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0311BC8 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@PEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 *     ?RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C0315224 (-RequestSyncCallout@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall DxgkRequestSyncDisplaySwitchCallout(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2,
        __int64 a3)
{
  DISPLAY_CALLOUT_ENTRY *v6; // rax
  char *v7; // rbx
  struct DXGGLOBAL *Global; // rax

  v6 = (DISPLAY_CALLOUT_ENTRY *)operator new[](0x88uLL, 0x4B677844u, 256LL);
  if ( v6 && (v7 = (char *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(v6, a1, a2)) != 0LL )
  {
    Global = DXGGLOBAL::GetGlobal();
    return DXGDISPLAYCALLOUTQUEUE::RequestSyncCallout((struct DXGGLOBAL *)((char *)Global + 1840), v7, a3);
  }
  else
  {
    WdLogSingleEntry1(6LL, 839LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for display switch callout.",
      839LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
