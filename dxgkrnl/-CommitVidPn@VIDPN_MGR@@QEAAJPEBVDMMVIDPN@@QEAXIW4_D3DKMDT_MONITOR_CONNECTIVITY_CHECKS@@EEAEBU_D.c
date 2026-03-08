/*
 * XREFs of ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x1C03A767C
 * Callers:
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C03ABFB8 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z @ 0x1C0067FD4 (-CacheVidPnToBeComitted@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@IAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C016A9D8 (MonitorGetNumConnectedMonitor.c)
 *     MonitorIsUsingSimulatedMonitor @ 0x1C016AA40 (MonitorIsUsingSimulatedMonitor.c)
 *     ?DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z @ 0x1C02BF910 (-DdiCommitVidPn@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_COMMITVIDPN@@@Z.c)
 *     ?DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z @ 0x1C03A990C (-DmmLogCommitVidPnFailedPacket@@YAXPEAU_DXGKARG_COMMITVIDPN@@JW4DXGK_DIAG_COMMIT_VIDPN_STAGE@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::CommitVidPn(
        VIDPN_MGR *this,
        unsigned __int64 a2,
        void *const a3,
        __int64 a4,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a5,
        char a6,
        int a7,
        const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *a8,
        unsigned __int8 *a9)
{
  __int64 v9; // r12
  const struct _DMM_COMMITVIDPNREQUEST_DIAGINFO *v13; // r13
  char v14; // r14
  char v15; // di
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  int v23; // eax
  int v25; // eax
  unsigned int v26; // ebx
  _DXGKARG_COMMITVIDPN v27; // [rsp+30h] [rbp-20h] BYREF

  v9 = (unsigned int)a4;
  if ( a2 == -96LL )
    WdLogSingleEntry0(1LL);
  v13 = a8;
  v27.hPrimaryAllocation = a3;
  v14 = a7;
  *(_QWORD *)&v27.Flags = 0LL;
  v15 = *((_BYTE *)a8 + 4) & 8;
  v27.AffectedVidPnSourceId = v9;
  LOBYTE(a7) = 0;
  v27.hFunctionalVidPn = (D3DKMDT_HVIDPN)(a2 & -(__int64)(a2 != -88LL));
  *(_QWORD *)&v27.Flags = a6 & 1 | (2 * (v14 & 1u));
  if ( !*((_QWORD *)this + 1) )
    WdLogSingleEntry0(1LL);
  if ( (int)MonitorIsUsingSimulatedMonitor(*(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL), (char *)&a7, (__int64)a3, a4) < 0 )
    WdLogSingleEntry0(1LL);
  if ( (_BYTE)a7 || v14 )
    v27.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
  else
    v27.MonitorConnectivityChecks = a5;
  if ( !v15 )
  {
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    v17 = ADAPTER_DISPLAY::DdiCommitVidPn(*((ADAPTER_DISPLAY **)this + 1), &v27, v16);
    v18 = v17;
    if ( v17 == -1071774920 || v17 == -1071774976 )
    {
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(7LL, a2, v9, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
      if ( v27.MonitorConnectivityChecks == D3DKMDT_MCC_ENFORCE && a9 )
        *a9 = 1;
      a7 = 0;
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      if ( (int)MonitorGetNumConnectedMonitor(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), &a7, v20, v21) < 0 )
        WdLogSingleEntry0(1LL);
      if ( a7 != 1 || v27.MonitorConnectivityChecks != D3DKMDT_MCC_ENFORCE || a6 )
        goto LABEL_20;
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(7LL, a2, v9, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
      v27.MonitorConnectivityChecks = D3DKMDT_MCC_IGNORE;
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      v23 = ADAPTER_DISPLAY::DdiCommitVidPn(*((ADAPTER_DISPLAY **)this + 1), &v27, v22);
      v18 = v23;
      if ( v23 < 0 )
      {
        if ( !*((_QWORD *)this + 1) )
          WdLogSingleEntry0(1LL);
        WdLogSingleEntry4(7LL, a2, v9, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v18);
        v19 = 2LL;
        goto LABEL_41;
      }
      DmmLogCommitVidPnFailedPacket(&v27, (unsigned int)v23, 3LL);
    }
    else if ( v17 < 0 )
    {
      if ( !*((_QWORD *)this + 1) )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry3(2LL, a2, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v18);
LABEL_20:
      v19 = 4LL;
LABEL_41:
      DmmLogCommitVidPnFailedPacket(&v27, (unsigned int)v18, v19);
      return (unsigned int)v18;
    }
  }
  v25 = VIDPN_MGR::CacheVidPnToBeComitted(this, (const struct DMMVIDPN *)a2, v9, v13);
  v26 = v25;
  if ( v25 >= 0 )
    return 0LL;
  WdLogSingleEntry4(2LL, a2, v9, (int)(*(_DWORD *)v13 << 28) >> 28, v25);
  return v26;
}
