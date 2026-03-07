char __fastcall DXGMONITOR::_IsMonitorDisabled(DXGMONITOR *this)
{
  char v1; // al
  char v2; // cl
  __int64 v4; // rax

  v1 = *((_BYTE *)this + 176);
  if ( (v1 & 0x20) != 0 )
    return 1;
  if ( (v1 & 6) == 6 )
    return 1;
  v4 = *((_QWORD *)this + 33);
  v2 = 0;
  if ( *(_BYTE *)(v4 + 56) )
    return 1;
  return v2;
}
