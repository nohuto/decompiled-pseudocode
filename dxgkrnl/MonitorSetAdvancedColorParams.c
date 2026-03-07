__int64 __fastcall MonitorSetAdvancedColorParams(
        struct HDXGMONITOR__ *a1,
        _DWORD *a2,
        int *a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8)
{
  _DWORD *v8; // r12
  unsigned int v12; // edi
  unsigned int v13; // esi
  int v14; // r8d
  __int64 v15; // rbx
  unsigned int v16; // edi
  DxgMonitor::MonitorColorState *v17; // rcx
  _DWORD v19[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v20; // [rsp+80h] [rbp+8h] BYREF

  v8 = a5;
  if ( !a1 )
    return 3221225485LL;
  v12 = a7;
  if ( !a7 )
    return 3221225485LL;
  v13 = a8;
  if ( !a8 || a8 > a7 || a6 >= a7 || a6 >= a8 || !*a2 && !a2[1] )
    return 3221225485LL;
  v14 = *a3;
  if ( !v14 && !a3[1] )
    return 3221225485LL;
  if ( !*a4 && !a4[1]
    || !*a5 && !a5[1]
    || (float)(*a2 + a2[1]) > 1048576.0
    || (float)(v14 + a3[1]) > 1048576.0
    || (float)(*a4 + a4[1]) > 1048576.0
    || (float)(*a5 + a5[1]) > 1048576.0 )
  {
    return 3221225485LL;
  }
  MONITOR_MGR::AcquireMonitorExclusive(&v20, a1);
  v15 = v20;
  if ( v20 )
  {
    v17 = *(DxgMonitor::MonitorColorState **)(v20 + 224);
    v19[0] = *a2;
    v19[1] = a2[1];
    v19[2] = *a3;
    v19[3] = a3[1];
    v19[4] = *a4;
    v19[5] = a4[1];
    v19[6] = *v8;
    v19[7] = v8[1];
    v16 = DxgMonitor::MonitorColorState::SetColorProfile(v17, (const struct DISPLAY_COLOR_DATA_RAW *)v19, a6, v12, v13);
  }
  else
  {
    v16 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  if ( v15 )
  {
    ExReleaseResourceLite((PERESOURCE)(v15 + 24));
    KeLeaveCriticalRegion();
  }
  return v16;
}
