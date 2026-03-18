/*
 * XREFs of ?DxgkEnableStablePowerState@@YAXXZ @ 0x1C0312834
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0020A28 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C0312A64 (-EnableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 */

void DxgkEnableStablePowerState(void)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::EnableStablePowerState(Global);
}
