bool __fastcall DXGMONITOR::IsRemoteMonitor(DXGMONITOR *this)
{
  return (*((_BYTE *)this + 177) & 0x40) != 0;
}
