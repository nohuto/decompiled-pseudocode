bool __fastcall MONITOR_MGR::IsSoftGPU(MONITOR_MGR *this)
{
  return (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 436LL) & 8) != 0;
}
