void __fastcall DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(DxgMonitor::MonitorColorState *this)
{
  *((_DWORD *)this + 78) = 5000;
  *((_DWORD *)this + 79) = 2700000;
  *((_DWORD *)this + 80) = 2700000;
  *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
  *((_DWORD *)this + 83) = 2700000;
  *((_DWORD *)this + 84) = 1;
  DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
}
