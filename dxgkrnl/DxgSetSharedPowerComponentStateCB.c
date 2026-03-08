/*
 * XREFs of DxgSetSharedPowerComponentStateCB @ 0x1C02E0FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z @ 0x1C03107FC (-SetSharedPowerComponentState@DXGGLOBAL@@QEAAJQEAX0KE@Z.c)
 */

__int64 __fastcall DxgSetSharedPowerComponentStateCB(DXGADAPTER *a1, void *a2, unsigned int a3, unsigned __int8 a4)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::SetSharedPowerComponentState(Global, a1, a2, a3, a4);
}
