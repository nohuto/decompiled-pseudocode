/*
 * XREFs of DxgUnregisterSharedPowerDriverCB @ 0x1C02E1020
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z @ 0x1C0310E7C (-UnregisterSharedPowerDriver@DXGGLOBAL@@QEAAJQEAX0@Z.c)
 */

__int64 __fastcall DxgUnregisterSharedPowerDriverCB(DXGADAPTER *a1, void *a2)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return DXGGLOBAL::UnregisterSharedPowerDriver(Global, a1, a2);
}
