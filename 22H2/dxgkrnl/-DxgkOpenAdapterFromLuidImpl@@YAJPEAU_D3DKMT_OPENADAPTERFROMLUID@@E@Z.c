/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C0145578
 * Callers:
 *     DxgkOpenAdapterFromLuid @ 0x1C0145560 (DxgkOpenAdapterFromLuid.c)
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C0157040 (DxgkOpenAdapterFromLuidInternal.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000B9F0 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C012C424 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C012C6B8 (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, __int64 a3)
{
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _D3DKMT_OPENADAPTERFROMLUID *v9; // rax
  DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // rbx
  VIDSCH_EXPORT **v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int v23; // esi
  ULONG64 v24; // rdx
  _DWORD *p_hAdapter; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  int v29; // eax
  __int64 v30; // r8
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  LUID AdapterLuid; // [rsp+20h] [rbp-58h]
  unsigned int hAdapter; // [rsp+28h] [rbp-50h] BYREF
  int v48; // [rsp+30h] [rbp-48h] BYREF
  __int64 v49; // [rsp+38h] [rbp-40h]
  char v50; // [rsp+40h] [rbp-38h]
  _BYTE v51[8]; // [rsp+48h] [rbp-30h] BYREF
  struct DXGADAPTER *v52; // [rsp+50h] [rbp-28h]
  char v53; // [rsp+58h] [rbp-20h]
  unsigned __int64 v54; // [rsp+90h] [rbp+18h] BYREF

  v48 = -1;
  v49 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v50 = 1;
    v48 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2082);
  }
  else
  {
    v50 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v48, 2082LL);
  if ( a2 )
  {
    v6 = MmUserProbeAddress;
    v9 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v9 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v9->AdapterLuid;
    hAdapter = v9->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v13 = Current;
  if ( !Current )
  {
    v32 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    goto LABEL_36;
  }
  if ( a2 )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v29 = (*(__int64 (__fastcall **)(LUID))(*((_QWORD *)v13 + 11) + 448LL))(AdapterLuid);
      v31 = v29;
      if ( v29 < 0 )
      {
        v34 = WdLogNewEntry5_WdWarning(v12, v11, v30);
        *(_QWORD *)(v34 + 24) = v31;
        WdLogEvent5_WdWarning(v34);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v35);
        if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v48);
        return (unsigned int)v31;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal(v12, v11);
  v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v54);
  v19 = v15;
  if ( !v15 )
  {
    v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v38[3] = AdapterLuid.LowPart;
    v38[4] = AdapterLuid.HighPart;
    v38[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v38);
LABEL_36:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v33);
    if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v48);
    return 3221225485LL;
  }
  if ( (*((_DWORD *)v15 + 642) & 4) != 0 )
  {
    v41 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v41 + 24) = v19;
    WdLogEvent5_WdWarning(v41);
    DXGADAPTER::ReleaseReference(v19);
  }
  else
  {
    v52 = v15;
    v53 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    if ( *((_DWORD *)v19 + 50) != 1
      || *((_BYTE *)v19 + 2609)
      || (v20 = (VIDSCH_EXPORT **)*((_QWORD *)v19 + 338)) == 0LL
      || !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v20, v13) )
    {
      v23 = DXGADAPTER::CreateHandle(v19, v13, &hAdapter);
      DXGADAPTER::ReleaseReference(v19);
      if ( a2 )
      {
        p_hAdapter = &a1->hAdapter;
        v24 = MmUserProbeAddress;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = hAdapter;
      }
      else
      {
        a1->hAdapter = hAdapter;
      }
      if ( v53 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v24);
      if ( v50 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v48);
      }
      return v23;
    }
    v43 = WdLogNewEntry5_WdEvent(v22, v21);
    *(_QWORD *)(v43 + 24) = v19;
    *(_QWORD *)(v43 + 32) = v13;
    WdLogEvent5_WdEvent(v43);
    DXGADAPTER::ReleaseReference(v19);
    if ( v53 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48, v42);
  if ( v50 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v48);
  return 3221225506LL;
}
