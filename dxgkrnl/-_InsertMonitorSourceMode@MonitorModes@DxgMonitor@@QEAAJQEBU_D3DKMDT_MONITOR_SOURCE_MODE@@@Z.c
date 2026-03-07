__int64 __fastcall DxgMonitor::MonitorModes::_InsertMonitorSourceMode(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  int v4; // eax
  char *v5; // rsi
  DxgMonitor::MonitorModes *v6; // rcx
  char *v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int128 v11; // xmm1
  char *v12; // rax
  char **v13; // rcx

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(&a2->VideoSignalInfo);
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, v4);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    WdLogSingleEntry1(2LL, a2);
    return 3223192330LL;
  }
  v5 = (char *)this + 128;
  v6 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 16);
  if ( v6 == (DxgMonitor::MonitorModes *)((char *)this + 128) )
    goto LABEL_14;
  v7 = (char *)v6 - 96;
  if ( !v6 )
    v7 = 0LL;
  if ( !v7 )
  {
LABEL_14:
    v9 = operator new[](0x78uLL, 0x4D677844u, 256LL);
    v10 = v9;
    if ( !v9 )
    {
      WdLogSingleEntry0(2LL);
      return 3221225495LL;
    }
    *(_OWORD *)v9 = *(_OWORD *)&a2->Id;
    *(_OWORD *)(v9 + 16) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *(_OWORD *)(v9 + 32) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *(_OWORD *)(v9 + 48) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *(_OWORD *)(v9 + 64) = *(_OWORD *)&a2->ColorBasis;
    v11 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *(_DWORD *)(v9 + 112) = 6;
    *(_OWORD *)(v9 + 80) = v11;
    *(_DWORD *)(v9 + 84) = 5;
    v12 = (char *)(v9 + 96);
    ++*((_DWORD *)this + 30);
    v13 = (char **)*((_QWORD *)this + 17);
    if ( *v13 != v5 )
      __fastfail(3u);
    *(_QWORD *)v12 = v5;
    *((_QWORD *)v12 + 1) = v13;
    *v13 = v12;
    *((_QWORD *)this + 17) = v12;
    if ( *(_DWORD *)(v10 + 88) == 1 )
    {
      WdLogSingleEntry1(7LL, v10);
      *((_QWORD *)this + 18) = v10;
    }
    return 0LL;
  }
  while ( a2->Id != *(_DWORD *)v7 )
  {
    v8 = (char *)*((_QWORD *)v7 + 12);
    if ( v8 != v5 )
    {
      v7 = v8 - 96;
      if ( !v8 )
        v7 = 0LL;
      if ( v7 )
        continue;
    }
    goto LABEL_14;
  }
  WdLogSingleEntry2(2LL, a2, a2->Id);
  return 3223192340LL;
}
