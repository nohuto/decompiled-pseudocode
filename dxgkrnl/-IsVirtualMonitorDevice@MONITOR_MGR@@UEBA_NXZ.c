bool __fastcall MONITOR_MGR::IsVirtualMonitorDevice(MONITOR_MGR *this)
{
  return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 436LL) & 0x40000) != 0;
}
