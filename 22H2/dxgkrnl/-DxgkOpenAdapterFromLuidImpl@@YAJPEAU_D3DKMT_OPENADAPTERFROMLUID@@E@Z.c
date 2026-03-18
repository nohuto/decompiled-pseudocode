/*
 * XREFs of ?DxgkOpenAdapterFromLuidImpl@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@E@Z @ 0x1C018D188
 * Callers:
 *     DxgkOpenAdapterFromLuid @ 0x1C018C270 (DxgkOpenAdapterFromLuid.c)
 *     DxgkOpenAdapterFromLuidInternal @ 0x1C01EE560 (DxgkOpenAdapterFromLuidInternal.c)
 * Callees:
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C00049B8 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z @ 0x1C018D14C (-IsProcessGpuAccessBlocked@ADAPTER_RENDER@@QEAAEPEAVDXGPROCESS@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1C018F1D8 (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01AC934 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkOpenAdapterFromLuidImpl(struct _D3DKMT_OPENADAPTERFROMLUID *a1, char a2, __int64 a3)
{
  struct _D3DKMT_OPENADAPTERFROMLUID *v5; // rax
  DXGPROCESS *Current; // rax
  struct DXGPROCESS *v7; // rsi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  struct DXGADAPTER *v10; // rbx
  VIDSCH_EXPORT **v11; // rcx
  unsigned int v12; // esi
  _DWORD *p_hAdapter; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // sf
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _LUID AdapterLuid; // [rsp+50h] [rbp-58h]
  unsigned int hAdapter; // [rsp+58h] [rbp-50h] BYREF
  int v26; // [rsp+60h] [rbp-48h] BYREF
  __int64 v27; // [rsp+68h] [rbp-40h]
  char v28; // [rsp+70h] [rbp-38h]
  _BYTE v29[8]; // [rsp+78h] [rbp-30h] BYREF
  struct DXGADAPTER *v30; // [rsp+80h] [rbp-28h]
  char v31; // [rsp+88h] [rbp-20h]
  unsigned __int64 v32; // [rsp+C0h] [rbp+18h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2082;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2082);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2082);
  if ( a2 )
  {
    v5 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v5 = (struct _D3DKMT_OPENADAPTERFROMLUID *)MmUserProbeAddress;
    AdapterLuid = v5->AdapterLuid;
    hAdapter = v5->hAdapter;
  }
  else
  {
    AdapterLuid = a1->AdapterLuid;
    hAdapter = a1->hAdapter;
  }
  hAdapter = 0;
  Current = DXGPROCESS::GetCurrent();
  v7 = Current;
  if ( !Current )
  {
    v18 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_33;
    }
    return v18;
  }
  if ( a2 )
  {
    if ( DXGPROCESS::IsRemoteConnection(Current) )
    {
      v17 = (*(__int64 (__fastcall **)(struct _LUID))(*((_QWORD *)v7 + 11) + 448LL))(AdapterLuid);
      v18 = v17;
      if ( v17 < 0 )
      {
        WdLogSingleEntry1(3LL, v17);
        goto LABEL_31;
      }
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, AdapterLuid, &v32);
  v10 = v9;
  if ( !v9 )
  {
    v18 = -1073741811;
    WdLogSingleEntry3(3LL, AdapterLuid.LowPart, AdapterLuid.HighPart, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
    if ( v28 )
    {
      LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_33:
      if ( v21 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v26);
    }
    return v18;
  }
  if ( (*((_DWORD *)v9 + 698) & 4) != 0 )
  {
    WdLogSingleEntry1(3LL, v9);
    DXGADAPTER::ReleaseReference(v10);
  }
  else
  {
    v30 = v9;
    v31 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    if ( *((_DWORD *)v10 + 50) != 1
      || *((_BYTE *)v10 + 2833)
      || (v11 = (VIDSCH_EXPORT **)*((_QWORD *)v10 + 366)) == 0LL
      || !ADAPTER_RENDER::IsProcessGpuAccessBlocked(v11, v7) )
    {
      v12 = DXGADAPTER::CreateHandle(v10, v7, &hAdapter);
      DXGADAPTER::ReleaseReference(v10);
      if ( a2 )
      {
        p_hAdapter = &a1->hAdapter;
        if ( (unsigned __int64)&a1->hAdapter >= MmUserProbeAddress )
          p_hAdapter = (_DWORD *)MmUserProbeAddress;
        *p_hAdapter = hAdapter;
      }
      else
      {
        a1->hAdapter = hAdapter;
      }
      if ( v31 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v26);
      }
      return v12;
    }
    WdLogSingleEntry2(4LL, v10, v7);
    DXGADAPTER::ReleaseReference(v10);
    if ( v31 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v26);
  return 3221225506LL;
}
