/*
 * XREFs of ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1C01FF808
 * Callers:
 *     ?OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z @ 0x1C01FD69C (-OnDescriptorUpdated@MonitorModes@DxgMonitor@@QEAAJPEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C001F3F0 (-ConvertFrequencyRange@@YAJPEBU_FrequencyRangeDescriptor@@PEAU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C001F4B8 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 *     ?ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x1C001F4F4 (-ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C001F54C (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     MonitorLogBadEDID @ 0x1C03BFCE4 (MonitorLogBadEDID.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::ParseDescriptorModes(
        DxgMonitor::MonitorModes ***this,
        const struct DxgMonitor::IMonitorDescriptor *a2)
{
  DxgMonitor::MonitorModes *v4; // r13
  __int64 v5; // rax
  int v6; // eax
  __int64 v7; // rbx
  unsigned __int16 *v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int16 v12; // cx
  __int128 v13; // xmm6
  __int64 v14; // rax
  _DWORD *v15; // rdi
  int v16; // ecx
  struct _D3DKMDT_VIDEO_SIGNAL_INFO *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // eax
  int v23; // eax
  _DWORD *v24; // rcx
  DxgMonitor::MonitorModes **v25; // rdi
  DxgMonitor::MonitorModes **v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int16 *v34; // rax
  int v35; // eax
  int v36; // r15d
  struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v37; // rdi
  int v38; // eax
  unsigned int v39; // r13d
  DxgMonitor::MonitorModes *v41; // rdi
  DxgMonitor::MonitorModes **v42; // rcx
  int v43; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v44; // [rsp+34h] [rbp-2Ch]
  __int128 v45; // [rsp+38h] [rbp-28h]
  unsigned __int16 v46; // [rsp+A0h] [rbp+40h] BYREF
  int v47; // [rsp+A8h] [rbp+48h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp+50h]
  int v49; // [rsp+B8h] [rbp+58h]

  LOBYTE(v49) = 0;
  WdLogSingleEntry2(7LL, this, a2);
  v4 = (DxgMonitor::MonitorModes *)(this + 16);
  if ( *(DxgMonitor::MonitorModes **)v4 != v4 )
    WdLogSingleEntry0(1LL);
  v5 = *(_QWORD *)a2;
  v47 = 0;
  v6 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, _QWORD, _QWORD))(v5 + 192))(
         a2,
         &v47,
         0LL,
         0LL);
  v7 = v6;
  if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741789 )
    goto LABEL_39;
  if ( v47 )
  {
    v8 = (unsigned __int16 *)operator new[](56LL * (unsigned int)(v47 - 1) + 60, 0x4D677844u, 256LL);
    if ( !v8 )
    {
      WdLogSingleEntry0(2LL);
LABEL_43:
      LODWORD(v11) = -1073741801;
      goto LABEL_45;
    }
    v9 = *(_QWORD *)a2;
    v43 = 0;
    v10 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, int *, int *, unsigned __int16 *))(v9 + 192))(
            a2,
            &v47,
            &v43,
            v8 + 2);
    v11 = v10;
    if ( v10 < 0 )
    {
LABEL_44:
      WdLogSingleEntry1(2LL, v11);
LABEL_45:
      if ( !v8 )
        return (unsigned int)v11;
      goto LABEL_49;
    }
    v12 = v47;
    *v8 = v47;
    v8[1] = v43;
    *(_QWORD *)&v45 = 0x800000008LL;
    *((_QWORD *)&v45 + 1) = 8LL;
    v48 = 0;
    if ( v12 )
    {
      v13 = v45;
      do
      {
        v14 = operator new[](0x78uLL, 0x4D677844u, 256LL);
        v15 = (_DWORD *)v14;
        if ( !v14 )
          goto LABEL_48;
        v16 = *((_DWORD *)this + 31);
        v17 = (struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v14 + 8);
        *((_DWORD *)this + 31) = v16 + 1;
        v18 = 28LL * v48;
        *v15 = v16;
        *(_QWORD *)&v45 = v18 * 2;
        v19 = ConvertVideoSignalInfo((const struct _VideoModeDescriptor *)&v8[v18 + 2], v17);
        v44 = v19;
        if ( v19 < 0
          || (v20 = v45,
              v15[16] = 2,
              *(_OWORD *)(v15 + 17) = v13,
              v19 = ConvertMonitorCapablitiesOrigin(*((unsigned __int8 *)v8 + v20 + 57), v15 + 21),
              v44 = v19,
              v19 < 0)
          || (v19 = ConvertMonitorModeTimingType(*((unsigned __int8 *)v8 + v45 + 58), v15 + 28), v44 = v19, v19 < 0) )
        {
          WdLogSingleEntry1(3LL, v19);
          MonitorLogBadEDID(v44);
          operator delete(v15);
        }
        else
        {
          v21 = (unsigned __int8)v49;
          v22 = v8[1];
          if ( (unsigned int)(v15[28] - 1) <= 2 )
            v21 = 1;
          v49 = v21;
          if ( v22 == v48 )
          {
            if ( this[18] )
              WdLogSingleEntry0(1LL);
            this[18] = (DxgMonitor::MonitorModes **)v15;
            v23 = 1;
          }
          else
          {
            v23 = 2;
          }
          v24 = v15;
          v25 = (DxgMonitor::MonitorModes **)(v15 + 24);
          v24[22] = v23;
          ++*((_DWORD *)this + 30);
          v26 = this[17];
          if ( *v26 != v4 )
LABEL_30:
            __fastfail(3u);
          *v25 = v4;
          v25[1] = (DxgMonitor::MonitorModes *)v26;
          *v26 = (DxgMonitor::MonitorModes *)v25;
          this[17] = v25;
        }
        v27 = *v8;
      }
      while ( ++v48 < v27 );
    }
    operator delete(v8);
  }
  else
  {
    WdLogSingleEntry0(3LL);
  }
  v28 = *(_QWORD *)a2;
  v46 = 0;
  v29 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, unsigned __int16 *, _QWORD))(v28 + 200))(
          a2,
          &v46,
          0LL);
  v7 = v29;
  if ( v29 == -1073741275 )
  {
    WdLogNewEntry5_WdTrace(v31, v30, v32, v33);
    goto LABEL_36;
  }
  if ( (int)(v29 + 0x80000000) >= 0 && v29 != -1073741789 )
  {
LABEL_39:
    WdLogSingleEntry1(2LL, v7);
    return (unsigned int)v7;
  }
  if ( !v46 )
    goto LABEL_36;
  v34 = (unsigned __int16 *)operator new[](52LL * v46 + 4, 0x4D677844u, 256LL);
  v8 = v34;
  if ( !v34 )
  {
    WdLogSingleEntry0(2LL);
    goto LABEL_43;
  }
  *v34 = v46;
  v35 = (*(__int64 (__fastcall **)(const struct DxgMonitor::IMonitorDescriptor *, unsigned __int16 *, unsigned __int16 *))(*(_QWORD *)a2 + 200LL))(
          a2,
          v34,
          v34 + 2);
  v11 = v35;
  if ( v35 < 0 )
    goto LABEL_44;
  v36 = 0;
  if ( v46 )
  {
    while ( 1 )
    {
      v37 = (struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)operator new[](0x40uLL, 0x4D677844u, 256LL);
      if ( !v37 )
        break;
      v38 = ConvertFrequencyRange((const struct _FrequencyRangeDescriptor *)&v8[26 * v36 + 2], v37);
      v39 = v38;
      if ( v38 < 0 )
      {
        WdLogSingleEntry1(3LL, v38);
        MonitorLogBadEDID(v39);
        operator delete(v37);
      }
      else
      {
        v41 = (DxgMonitor::MonitorModes *)&v37[1];
        v42 = this[23];
        if ( *v42 != (DxgMonitor::MonitorModes *)(this + 22) )
          goto LABEL_30;
        *(_QWORD *)v41 = this + 22;
        *((_QWORD *)v41 + 1) = v42;
        *v42 = v41;
        this[23] = (DxgMonitor::MonitorModes **)v41;
        ++*((_DWORD *)this + 42);
      }
      if ( ++v36 >= (unsigned int)v46 )
        goto LABEL_35;
    }
LABEL_48:
    WdLogSingleEntry0(2LL);
    LODWORD(v11) = -1073741801;
LABEL_49:
    operator delete(v8);
    return (unsigned int)v11;
  }
LABEL_35:
  operator delete(v8);
LABEL_36:
  if ( !(_BYTE)v49 && !*((_DWORD *)this + 42) )
    *((_DWORD *)this + 28) = 2;
  return 0LL;
}
