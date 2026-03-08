/*
 * XREFs of ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C030D9BC
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0020F18 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C030DA44 (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 */

void __fastcall DxgkEnableClockCalibration(unsigned __int8 a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::EnableClockCalibration(Global, a1);
}
