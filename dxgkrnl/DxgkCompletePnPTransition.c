/*
 * XREFs of DxgkCompletePnPTransition @ 0x1C0214FC4
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C01E1A70 (DpiFdoHandleDevicePower.c)
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0209A10 (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFinishPnPTransitionCallback @ 0x1C0214F40 (DpiFinishPnPTransitionCallback.c)
 *     DpiFdoHandleStopDevice @ 0x1C03973C0 (DpiFdoHandleStopDevice.c)
 *     DpiFdoStopAdapter @ 0x1C0398994 (DpiFdoStopAdapter.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x1C021507C (-CompletePnPTransition@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
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
