__int64 __fastcall DxgkReportAdapterPowerRapidHpdTrigerEvent(_QWORD *a1)
{
  struct DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  return RAPID_HPD_MANAGER::ReportTriggerEvent((char *)Global + 305192, 3LL, *a1);
}
