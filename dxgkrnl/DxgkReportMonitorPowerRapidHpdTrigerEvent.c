__int64 __fastcall DxgkReportMonitorPowerRapidHpdTrigerEvent(__int64 a1, unsigned __int8 a2)
{
  int v2; // edi
  struct DXGGLOBAL *Global; // rax

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  return RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305192, (v2 ^ 1u) + 1, *(_QWORD *)(a1 + 404));
}
