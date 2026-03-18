/*
 * XREFs of DxgkCompletePnPTransition @ 0x1C02235A4
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01F0390 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C02185F0 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C0223520 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoHandleStopDevice @ 0x1C039BCA0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C039D274 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C022365C (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 */

void __fastcall DxgkCompletePnPTransition(void *a1)
{
  struct DXGGLOBAL *Global; // rax

  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::CompletePnPTransition(*((DXGSESSIONMGR **)Global + 118), a1);
  }
}
