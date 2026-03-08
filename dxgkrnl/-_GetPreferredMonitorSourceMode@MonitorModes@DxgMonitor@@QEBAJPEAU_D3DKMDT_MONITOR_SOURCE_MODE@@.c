/*
 * XREFs of ?_GetPreferredMonitorSourceMode@MonitorModes@DxgMonitor@@QEBAJPEAU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C016AD20
 * Callers:
 *     MonitorGetPreferredMonitorSourceMode @ 0x1C016ACA0 (MonitorGetPreferredMonitorSourceMode.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01B25E0 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetPreferredMonitorSourceMode(
        DxgMonitor::MonitorModes *this,
        struct _D3DKMDT_MONITOR_SOURCE_MODE *a2)
{
  char *v2; // r14
  DxgMonitor::MonitorModes *v3; // rax
  char *v5; // r8
  _OWORD *v6; // rsi
  char *v7; // rbx
  char *v8; // rax
  __int128 v9; // xmm1
  int v11; // ecx
  __int64 v12; // rax

  v2 = (char *)this + 128;
  v3 = (DxgMonitor::MonitorModes *)*((_QWORD *)this + 16);
  v5 = 0LL;
  v6 = 0LL;
  if ( v3 != (DxgMonitor::MonitorModes *)((char *)this + 128) )
  {
    v7 = (char *)v3 - 96;
    if ( !v3 )
      v7 = 0LL;
    if ( v7 )
    {
      do
      {
        if ( *((_DWORD *)v7 + 22) == 1 )
        {
          v11 = *((_DWORD *)v7 + 21);
          if ( (unsigned int)(v11 - 2) <= 1 )
          {
            if ( v5 )
              WdLogSingleEntry0(1LL);
            v5 = v7;
          }
          else if ( v11 == 5 )
          {
            v12 = (__int64)v7;
            if ( v6 )
              v12 = 1LL;
            v6 = (_OWORD *)v12;
          }
        }
        v8 = (char *)*((_QWORD *)v7 + 12);
        if ( v8 == v2 )
          break;
        v7 = v8 - 96;
        if ( !v8 )
          v7 = 0LL;
      }
      while ( v7 );
      if ( (unsigned __int64)v6 > 1 )
      {
        *(_OWORD *)&a2->Id = *v6;
        *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy = v6[1];
        *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator = v6[2];
        *(_OWORD *)&a2->VideoSignalInfo.PixelRate = v6[3];
        *(_OWORD *)&a2->ColorBasis = v6[4];
        v9 = v6[5];
LABEL_12:
        *(_OWORD *)&a2->ColorCoeffDynamicRanges.FourthChannel = v9;
        return 0LL;
      }
      if ( v5 )
      {
        *(_OWORD *)&a2->Id = *(_OWORD *)v5;
        *(_OWORD *)&a2->VideoSignalInfo.TotalSize.cy = *((_OWORD *)v5 + 1);
        *(_OWORD *)&a2->VideoSignalInfo.VSyncFreq.Denominator = *((_OWORD *)v5 + 2);
        *(_OWORD *)&a2->VideoSignalInfo.PixelRate = *((_OWORD *)v5 + 3);
        *(_OWORD *)&a2->ColorBasis = *((_OWORD *)v5 + 4);
        v9 = *((_OWORD *)v5 + 5);
        goto LABEL_12;
      }
    }
  }
  return 3221226021LL;
}
