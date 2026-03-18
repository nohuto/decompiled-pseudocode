/*
 * XREFs of DxgkReportMonitorPowerRapidHpdTrigerEvent @ 0x1C001A4EC
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C01EFB34 (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z @ 0x1C001A770 (-ReportTriggerEvent@RAPID_HPD_MANAGER@@QEAAXW4RAPID_HPD_TRIGGER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkReportMonitorPowerRapidHpdTrigerEvent(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  struct DXGGLOBAL *Global; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  return RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305192, (v2 ^ 1u) + 1, *(_QWORD *)(a1 + 404));
}
