/*
 * XREFs of DpiGetDriverFullPath @ 0x1C01D01CC
 * Callers:
 *     ?DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z @ 0x1C01661E4 (-DxgkpQueryRegistry@@YAJPEAVDXGADAPTER@@PEAXI@Z.c)
 *     ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C01D011C (-GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020B6D8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     DpiFdoValidateKmdAndPnpVersionMatch @ 0x1C020F290 (DpiFdoValidateKmdAndPnpVersionMatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDriverFullPath(__int64 a1, _OWORD *a2)
{
  __int64 result; // rax

  result = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 32LL), a2);
  if ( (int)result < 0 )
    *a2 = 0LL;
  return result;
}
