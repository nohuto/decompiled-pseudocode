bool __fastcall MONITOR_MGR::IsAdapterSessionized(MONITOR_MGR *this, struct _LUID *a2)
{
  return DXGADAPTER::IsAdapterSessionized(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL), a2, 0LL, 0LL);
}
