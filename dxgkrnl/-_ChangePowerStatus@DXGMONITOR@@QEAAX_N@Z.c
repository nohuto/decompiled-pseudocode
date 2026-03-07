void __fastcall DXGMONITOR::_ChangePowerStatus(DXGMONITOR *this, char a2)
{
  DxgMonitor::MonitorUsb4State *v4; // rcx

  v4 = (DxgMonitor::MonitorUsb4State *)*((_QWORD *)this + 33);
  if ( *((_BYTE *)v4 + 8) && !a2 )
    DxgMonitor::MonitorUsb4State::_OnChangePowerOff(v4);
  *((_BYTE *)this + 176) = *((_BYTE *)this + 176) & 0xDF | (32 * (a2 ^ 1));
}
