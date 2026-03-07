__int64 __fastcall DXGMONITOR::_DispatchInternalIOCtrl(
        DxgMonitor::MonitorDescriptorState **this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int a5,
        void *a6,
        unsigned __int64 *a7)
{
  unsigned int v8; // r14d
  __int64 v9; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rax

  v8 = a3;
  v9 = (unsigned int)a2;
  v11 = -1073741637;
  *a7 = 0LL;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v9;
  *(_QWORD *)(v12 + 32) = this;
  if ( (unsigned int)v9 > 0x23241F )
  {
    if ( (_DWORD)v9 == 2303011 || (_DWORD)v9 == 2303015 || (_DWORD)v9 == 2303019 )
      return (unsigned int)DxgMonitor::MonitorDescriptorState::OnInternalIoctl(this[27], v9, v8, a4, a5, a6, a7);
    if ( (_DWORD)v9 == 2303187 )
    {
      if ( v8 >= 0x20 )
      {
        if ( *a4 != 3 )
          WdLogSingleEntry0(1LL);
        DxgMonitor::MonitorColorState::OnBrightnessNitsUpdated(this[28], a4[1]);
        return 0;
      }
      else
      {
        return (unsigned int)-1073741789;
      }
    }
  }
  else if ( (_DWORD)v9 == 2303007
         || (_DWORD)v9 == 2302979
         || (_DWORD)v9 == 2302991
         || (_DWORD)v9 == 2302995
         || (_DWORD)v9 == 2302999
         || (_DWORD)v9 == 2303003 )
  {
    return (unsigned int)DxgMonitor::MonitorDescriptorState::OnInternalIoctl(this[27], v9, v8, a4, a5, a6, a7);
  }
  return v11;
}
