/*
 * XREFs of DxgkStartPnPTransition @ 0x1C020ACBC
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0209A10 (DpiFdoStartAdapterThreadImpl.c)
 *     ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C020A930 (-CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAXPEAU_DXGK_ADAPTER_CAPS.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z @ 0x1C020ACF8 (-StartPnPTransition@DXGSESSIONMGR@@QEAAPEAXPEAX_K@Z.c)
 */

void *__fastcall DxgkStartPnPTransition(void *a1, unsigned __int64 a2)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::StartPnPTransition(*((DXGSESSIONMGR **)Global + 118), a1, a2);
}
