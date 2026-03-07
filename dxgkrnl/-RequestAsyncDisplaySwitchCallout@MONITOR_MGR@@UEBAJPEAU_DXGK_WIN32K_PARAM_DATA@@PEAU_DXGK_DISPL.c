__int64 __fastcall MONITOR_MGR::RequestAsyncDisplaySwitchCallout(
        DXGADAPTER ***this,
        struct _DXGK_WIN32K_PARAM_DATA *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  return ADAPTER_DISPLAY::RequestAsyncDisplaySwitchCallout(this[3], a2, a3);
}
