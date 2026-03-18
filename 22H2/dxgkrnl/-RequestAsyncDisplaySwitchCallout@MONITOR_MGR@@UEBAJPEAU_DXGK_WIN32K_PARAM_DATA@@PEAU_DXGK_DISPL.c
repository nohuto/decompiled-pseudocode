/*
 * XREFs of ?RequestAsyncDisplaySwitchCallout@MONITOR_MGR@@UEBAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03C7440
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02BF624 (-RequestAsyncDisplaySwitchCallout@ADAPTER_DISPLAY@@QEAAJPEAU_DXGK_WIN32K_PARAM_DATA@@PEAU_DXGK_D.c)
 */

__int64 __fastcall MONITOR_MGR::RequestAsyncDisplaySwitchCallout(
        DXGADAPTER ***this,
        struct _DXGK_WIN32K_PARAM_DATA *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  return ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[3], a2, a3);
}
