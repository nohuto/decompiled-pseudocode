/*
 * XREFs of DxgkNotifySharedPowerGraphicsPowerTransition @ 0x1C0316124
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C021E730 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z @ 0x1C0313880 (-NotifySharedPowerGraphicsPowerTransition@DXGGLOBAL@@QEAAXQEAXW4_DEVICE_POWER_STATE@@E@Z.c)
 */

void __fastcall DxgkNotifySharedPowerGraphicsPowerTransition(__int64 *a1, unsigned int a2, char a3)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::NotifySharedPowerGraphicsPowerTransition(Global, a1, a2, a3);
}
