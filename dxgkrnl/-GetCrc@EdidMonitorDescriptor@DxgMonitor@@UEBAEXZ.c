unsigned __int8 __fastcall DxgMonitor::EdidMonitorDescriptor::GetCrc(DxgMonitor::EdidMonitorDescriptor *this)
{
  unsigned __int8 *v1; // rax
  int IsEDIDBaseBlock; // eax
  __int64 v3; // r11
  unsigned int v4; // ebx

  if ( *((_DWORD *)this + 4) )
  {
    v1 = (unsigned __int8 *)*((_QWORD *)this + 3);
    if ( v1 )
    {
      while ( 1 )
      {
        v1 = *(unsigned __int8 **)v1;
        if ( !v1 )
          break;
        if ( *((_DWORD *)v1 + 2) == 2 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(v1 + 24);
          v4 = IsEDIDBaseBlock;
          if ( IsEDIDBaseBlock >= 0 )
            return *(_BYTE *)(v3 + 127);
          WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
          MonitorLogBadEDID(v4);
          return 0;
        }
      }
    }
  }
  WdLogSingleEntry1(3LL, this);
  return 0;
}
