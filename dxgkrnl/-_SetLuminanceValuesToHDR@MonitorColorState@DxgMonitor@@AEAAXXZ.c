void __fastcall DxgMonitor::MonitorColorState::_SetLuminanceValuesToHDR(DxgMonitor::MonitorColorState *this)
{
  int v1; // eax

  *((_DWORD *)this + 78) = 100;
  *((_DWORD *)this + 79) = 14990000;
  *((_DWORD *)this + 80) = 7990000;
  v1 = *((_DWORD *)this + 80);
  *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
  *((_DWORD *)this + 83) = v1;
  *((_DWORD *)this + 84) = 3;
  DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
}
