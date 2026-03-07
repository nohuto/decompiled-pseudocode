char __fastcall DXGMONITOR::_IsVirtualModeSupportDisabled(DXGMONITOR *this)
{
  char v1; // dl

  v1 = 0;
  if ( *(_DWORD *)(*((_QWORD *)this + 30) + 16LL) || *((char *)this + 176) < 0 )
    return 1;
  return v1;
}
