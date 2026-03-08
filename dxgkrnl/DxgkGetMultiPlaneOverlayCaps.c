/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x1C017CB60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C017D84C (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  _OWORD *v5; // rax
  struct _KTHREAD **Current; // rax
  struct DXGADAPTER *v7; // r14
  int PairingAdapters; // r15d
  ADAPTER_DISPLAY **v9; // rbx
  struct DXGADAPTER *v10; // r15
  int v11; // eax
  unsigned int MultiPlaneOverlayCaps; // r12d
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347 Value; // r9d
  UINT v14; // r10d
  unsigned int v15; // r11d
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v16; // r8
  _DWORD *v17; // rdx
  _DWORD *p_Value; // rdx
  _DWORD *v19; // rdx
  _DWORD *v20; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v21; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  bool v28; // sf
  __int64 v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // [rsp+50h] [rbp-128h] BYREF
  __int64 v35; // [rsp+58h] [rbp-120h]
  char v36; // [rsp+60h] [rbp-118h]
  struct DXGADAPTER *v37; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v38[4]; // [rsp+70h] [rbp-108h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v39[4]; // [rsp+80h] [rbp-F8h] BYREF
  struct DXGADAPTER *v40; // [rsp+90h] [rbp-E8h] BYREF
  DXGADAPTER *v41; // [rsp+98h] [rbp-E0h] BYREF
  unsigned __int64 v42; // [rsp+A8h] [rbp-D0h] BYREF
  ULONG64 v43; // [rsp+B0h] [rbp-C8h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-C0h] BYREF
  _BYTE v45[144]; // [rsp+C0h] [rbp-B8h] BYREF

  v43 = a1;
  v34 = -1;
  v35 = 0LL;
  v4 = 1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v36 = 1;
    v34 = 2145;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2145);
  }
  else
  {
    v36 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v34, 2145);
  v5 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v38 = *v5;
  *(_OWORD *)&v39[0].0 = v5[1];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 )
      return 3221225485LL;
    v28 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_44:
    if ( v28 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v34);
    return 3221225485LL;
  }
  v37 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v41, v38[0], Current, &v37, 1);
  v7 = v37;
  if ( !v37 )
  {
    WdLogSingleEntry2(3LL, v38[0], -1073741811LL);
    if ( v41 )
      DXGADAPTER::ReleaseReference(v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( !v36 )
      return 3221225485LL;
    LOBYTE(v26) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v28 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_44;
  }
  v37 = 0LL;
  v40 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v7, v38[1], &v37, &v42, &v40, &v44, 0);
  if ( PairingAdapters < 0 )
  {
    v9 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(v7, v38[1], &v37, &v42, 0LL, 0LL, 0);
  }
  else
  {
    v9 = (ADAPTER_DISPLAY **)v40;
  }
  if ( PairingAdapters < 0 )
  {
    v29 = v38[1];
    WdLogSingleEntry2(2LL, v7, v38[1]);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get pairing adapters from adapter 0x%I64x VidPn source 0x%I64x!",
      (__int64)v7,
      v29,
      0LL,
      0LL,
      0LL);
    if ( v41 )
      DXGADAPTER::ReleaseReference(v41);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
    if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v34);
    return (unsigned int)PairingAdapters;
  }
  else
  {
    if ( v9 && !v9[365] )
    {
      WdLogSingleEntry1(1LL, 11485LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pDisplayAdapter == NULL) || (pDisplayAdapter->IsDisplayAdapter())",
        11485LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v10 = v37;
    if ( !v37 || !*((_QWORD *)v37 + 366) )
    {
      WdLogSingleEntry1(1LL, 11487LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(pRenderAdapter != NULL) && (pRenderAdapter->IsRenderAdapter())",
        11487LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v45, v10, (struct DXGADAPTER *const)v9);
    DXGADAPTER::ReleaseReference(v10);
    if ( v9 )
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v9);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v45, 0LL);
    MultiPlaneOverlayCaps = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry4(3LL, v11, v7, v10, v9);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      if ( v41 )
        DXGADAPTER::ReleaseReference(v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v34);
      return 0LL;
    }
    else
    {
      if ( v9 )
      {
        MultiPlaneOverlayCaps = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                                  v9[365],
                                  v38[1],
                                  &v38[2],
                                  &v38[3],
                                  (unsigned int *)v39,
                                  &v39[1],
                                  (float *)&v39[2],
                                  (float *)&v39[3]);
        Value = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v39[1].Value;
        v14 = v39[0].Value;
        v15 = v38[3];
        v4 = v38[2];
      }
      else
      {
        v15 = 0;
        v14 = 0;
        Value = 0;
        v39[2].Value = 1065353216;
        v39[3].Value = 1065353216;
      }
      v16 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)v43;
      v17 = (_DWORD *)(v43 + 8);
      if ( v43 + 8 >= MmUserProbeAddress )
        v17 = (_DWORD *)MmUserProbeAddress;
      *v17 = v4;
      p_Value = &v16[3].Value;
      if ( (unsigned __int64)&v16[3] >= MmUserProbeAddress )
        p_Value = (_DWORD *)MmUserProbeAddress;
      *p_Value = v15;
      v19 = &v16[4].Value;
      if ( (unsigned __int64)&v16[4] >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = v14;
      v20 = &v16[5].Value;
      if ( (unsigned __int64)&v16[5] >= MmUserProbeAddress )
        v20 = (_DWORD *)MmUserProbeAddress;
      *v20 = Value;
      v21 = v16 + 6;
      if ( (unsigned __int64)&v16[6] >= MmUserProbeAddress )
        v21 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
      v21->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v39[2];
      v22 = v16 + 7;
      if ( (unsigned __int64)&v16[7] >= MmUserProbeAddress )
        v22 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
      v22->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v39[3];
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v45);
      if ( v41 )
        DXGADAPTER::ReleaseReference(v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v34);
      if ( v36 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v34);
      }
      return MultiPlaneOverlayCaps;
    }
  }
}
