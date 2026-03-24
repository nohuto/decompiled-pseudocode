/*
 * XREFs of ?DxgkEnableClockCalibration@@YAXE@Z @ 0x1C02697E8
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00239FC (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z @ 0x1C0269870 (-EnableClockCalibration@DXGGLOBAL@@QEAAXE@Z.c)
 */

void __fastcall DxgkEnableClockCalibration(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  DXGGLOBAL *Global; // rax

  v2 = a1;
  Global = DXGGLOBAL::GetGlobal(a1, a2);
  DXGGLOBAL::EnableClockCalibration(Global, v2);
}
