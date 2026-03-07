char __fastcall DxgMonitor::MonitorColorState::EdidSupportsHDR(DxgMonitor::MonitorColorState *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_BYTE *)this + 268)
    && (*((_BYTE *)this + 235) || *((_BYTE *)this + 234))
    && ((*((_DWORD *)this + 52) & 0x3C) != 0
     || (*((_DWORD *)this + 53) & 0x3C) != 0
     || (*((_DWORD *)this + 54) & 0x3C) != 0
     || (*((_DWORD *)this + 55) & 0x3C) != 0) )
  {
    return 1;
  }
  return v1;
}
