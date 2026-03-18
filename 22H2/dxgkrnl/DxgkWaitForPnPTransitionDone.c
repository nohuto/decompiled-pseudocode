/*
 * XREFs of DxgkWaitForPnPTransitionDone @ 0x1C0356CF4
 * Callers:
 *     DpiIndicateConnectorChangeWorkItem @ 0x1C01F54A0 (DpiIndicateConnectorChangeWorkItem.c)
 *     DxgkIddHandleSetDisplayConfig @ 0x1C02F4AB8 (DxgkIddHandleSetDisplayConfig.c)
 *     DxgkIddHandleSetDisplayConfig2 @ 0x1C02F5670 (DxgkIddHandleSetDisplayConfig2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z @ 0x1C017F698 (-WaitForPnPTransitionDone@DXGSESSIONMGR@@QEAAJW4_KWAIT_REASON@@DIW4_PNP_TRANSITION_WAITER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForPnPTransitionDone(KWAIT_REASON a1, KPROCESSOR_MODE a2, unsigned int a3, unsigned int a4)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGSESSIONMGR::WaitForPnPTransitionDone(*((_QWORD *)Global + 118), a1, a2, a3, a4);
}
