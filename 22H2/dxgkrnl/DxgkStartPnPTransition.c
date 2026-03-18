/*
 * XREFs of DxgkStartPnPTransition @ 0x1C021989C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F0390 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C02185F0 (DpiFdoStartAdapterThreadImpl.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0219510 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     DpiFdoHandleStopDevice @ 0x1C039BCA0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C039D274 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C02198D8 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 */

void *__fastcall DxgkStartPnPTransition(void *a1, unsigned __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 118), a1, a2);
}
