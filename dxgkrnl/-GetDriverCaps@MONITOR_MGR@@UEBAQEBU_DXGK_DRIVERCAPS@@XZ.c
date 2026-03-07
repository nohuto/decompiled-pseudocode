const struct _DXGK_DRIVERCAPS *__fastcall MONITOR_MGR::GetDriverCaps(MONITOR_MGR *this)
{
  return (const struct _DXGK_DRIVERCAPS *)(*(_QWORD *)(*((_QWORD *)this + 3) + 16LL) + 2216LL);
}
