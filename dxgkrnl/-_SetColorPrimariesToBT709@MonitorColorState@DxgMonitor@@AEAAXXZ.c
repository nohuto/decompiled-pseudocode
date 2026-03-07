void __fastcall DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(DxgMonitor::MonitorColorState *this)
{
  *((_DWORD *)this + 59) = 670720;
  *((_DWORD *)this + 60) = 346112;
  *((_DWORD *)this + 61) = 314368;
  *((_DWORD *)this + 62) = 628736;
  *((_DWORD *)this + 63) = 156672;
  *((_DWORD *)this + 64) = 62464;
  *((_DWORD *)this + 65) = 327680;
  *((_DWORD *)this + 66) = 345088;
  *((_DWORD *)this + 68) = 1;
}
