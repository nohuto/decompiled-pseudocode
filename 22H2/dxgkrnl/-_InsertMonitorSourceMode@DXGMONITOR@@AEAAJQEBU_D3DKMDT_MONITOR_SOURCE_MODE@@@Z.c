/*
 * XREFs of ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0196554
 * Callers:
 *     ?AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C0196440 (-AddMode@DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL@@CAJPEAUD3DKMDT_HMONITORSOURCEMODESET__@@QE.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0007280 (-_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_InsertMonitorSourceMode(
        char ***this,
        const struct _D3DKMDT_MONITOR_SOURCE_MODE *const a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  DXGMONITOR *v8; // rsi
  DXGMONITOR *v9; // rcx
  char *v10; // rax
  __int64 Id; // rdx
  char *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  char **v15; // rdi
  __int128 v16; // xmm1
  char *v17; // rax
  char **v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax

  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v21);
  }
  v4 = DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo((__int64)&a2->VideoSignalInfo);
  v7 = v4;
  if ( v4 < 0 )
  {
    v22 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v22 + 24) = a2;
    *(_QWORD *)(v22 + 32) = v7;
    WdLogEvent5_WdError(v22);
    return 0LL;
  }
  if ( (*(_DWORD *)&a2->VideoSignalInfo.AdditionalSignalInfo & 0x1F8) != 0 )
  {
    v23 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v23 + 24) = a2;
    WdLogEvent5_WdError(v23);
    return 3223192330LL;
  }
  v8 = (DXGMONITOR *)(this + 27);
  v9 = (DXGMONITOR *)this[27];
  if ( v9 == (DXGMONITOR *)(this + 27) )
    goto LABEL_15;
  v10 = (char *)v9 - 96;
  if ( !v9 )
    v10 = 0LL;
  if ( !v10 )
  {
LABEL_15:
    v12 = (char *)operator new[](0x78uLL, 0x4D677844u, PagedPool);
    v15 = (char **)v12;
    if ( !v12 )
    {
      v25 = WdLogNewEntry5_WdError(v14, v13);
      WdLogEvent5_WdError(v25);
      return 3221225495LL;
    }
    *(_OWORD *)v12 = *(_OWORD *)&a2->Id;
    *((_OWORD *)v12 + 1) = *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy;
    *((_OWORD *)v12 + 2) = *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator;
    *((_OWORD *)v12 + 3) = *(_OWORD *)&a2->VideoSignalInfo.PixelRate;
    *((_OWORD *)v12 + 4) = *(_OWORD *)&a2->ColorBasis;
    v16 = *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel;
    *((_DWORD *)v12 + 28) = 6;
    *((_OWORD *)v12 + 5) = v16;
    *((_DWORD *)v12 + 21) = 5;
    v17 = v12 + 96;
    ++*((_DWORD *)this + 52);
    v18 = this[28];
    if ( *v18 != (char *)v8 )
      __fastfail(3u);
    *(_QWORD *)v17 = v8;
    *((_QWORD *)v17 + 1) = v18;
    *v18 = v17;
    this[28] = (char **)v17;
    if ( *((_DWORD *)v15 + 22) == 1 )
    {
      v20 = WdLogNewEntry5_WdDmmEvent(v18);
      *(_QWORD *)(v20 + 24) = v15;
      WdLogEvent5_WdDmmEvent(v20);
      this[29] = v15;
    }
    return 0LL;
  }
  Id = a2->Id;
  while ( (_DWORD)Id != *(_DWORD *)v10 )
  {
    v9 = (DXGMONITOR *)*((_QWORD *)v10 + 12);
    if ( v9 != v8 )
    {
      v10 = (char *)v9 - 96;
      if ( !v9 )
        v10 = 0LL;
      if ( v10 )
        continue;
    }
    goto LABEL_15;
  }
  v24 = WdLogNewEntry5_WdError(v9, Id);
  *(_QWORD *)(v24 + 24) = a2;
  *(_QWORD *)(v24 + 32) = a2->Id;
  WdLogEvent5_WdError(v24);
  return 3223192340LL;
}
