__int64 __fastcall DXGMONITOR::_GetMonitorOrientation(DXGMONITOR *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // eax

  if ( a2 )
  {
    v3 = 0;
    if ( *((_DWORD *)this + 84) != *((_DWORD *)this + 82) )
      v3 = *((_DWORD *)this + 84);
    *a2 = v3;
  }
  if ( a3 )
    *a3 = *((_DWORD *)this + 86);
  return 0LL;
}
