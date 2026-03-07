bool __fastcall MONITOR_MGR::IsXboxOneDevice(MONITOR_MGR *this)
{
  return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 436LL) & 0x200) != 0;
}
