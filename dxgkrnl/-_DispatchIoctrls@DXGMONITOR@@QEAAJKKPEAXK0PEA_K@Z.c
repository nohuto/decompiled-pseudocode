__int64 __fastcall DXGMONITOR::_DispatchIoctrls(
        DxgMonitor::MonitorGammaState **this,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        _OWORD *a6,
        unsigned __int64 *a7)
{
  __int64 v8; // rbx
  unsigned int v9; // r14d
  unsigned int v11; // edi
  __int64 v12; // rax
  DxgMonitor::MonitorGammaState *v13; // rcx
  int v14; // ebx
  int v15; // ebx
  DxgMonitor::MonitorMipiDsiState *v18; // rcx

  v8 = (unsigned int)a2;
  v9 = a3;
  v11 = -1073741637;
  v12 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v12 + 24) = v8;
  *(_QWORD *)(v12 + 32) = this;
  if ( (_DWORD)v8 == 2297856 || (_DWORD)v8 == 2297860 || (_DWORD)v8 == 2297864 )
  {
    v13 = this[31];
    v14 = v8 - 2297856;
    if ( v14 )
    {
      v15 = v14 - 4;
      if ( v15 )
      {
        if ( v15 == 4 )
        {
          *a7 = 0LL;
          return 0;
        }
        return v11;
      }
      *a7 = 0LL;
      return (unsigned int)DxgMonitor::MonitorGammaState::_SetColorSpaceTransform(v13, v9, a4);
    }
    else
    {
      return (unsigned int)DxgMonitor::MonitorGammaState::_QueryColorSpaceTransformCaps(v13, a5, a6, a7);
    }
  }
  if ( (_DWORD)v8 == 2298880 || (_DWORD)v8 == 2298884 || (_DWORD)v8 == 2298888 )
  {
    v18 = this[32];
    if ( v18 )
      return (unsigned int)DxgMonitor::MonitorMipiDsiState::OnIoctl(v18, v8, v9, a4, a5, a6, a7);
  }
  return v11;
}
