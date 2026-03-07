__int64 __fastcall MONITOR_MGR::GetDriverDdiVersion(MONITOR_MGR *this)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 216LL) + 64LL)
                                     + 40LL)
                         + 28LL);
}
