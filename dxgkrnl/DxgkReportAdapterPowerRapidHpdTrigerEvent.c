/*
 * XREFs of DxgkReportAdapterPowerRapidHpdTrigerEvent @ 0x1C001A3FC
 * Callers:
 *     DpiFdoSetAdapterPowerState @ 0x1C01E1E80 (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C001A510 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkReportAdapterPowerRapidHpdTrigerEvent(_QWORD *a1)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305192, 3LL, *a1);
}
