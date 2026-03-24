/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x1C015E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C015E6A4 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r12d
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _OWORD *v8; // rax
  struct _KTHREAD **Current; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  int PairingAdapters; // esi
  ADAPTER_DISPLAY **v19; // rbx
  struct DXGADAPTER *v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r15
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347 Value; // r9d
  UINT v27; // r10d
  unsigned int v28; // r11d
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v29; // r8
  _DWORD *v30; // rdx
  _DWORD *p_Value; // rdx
  _DWORD *v32; // rdx
  _DWORD *v33; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v34; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  int v56; // [rsp+40h] [rbp-128h] BYREF
  __int64 v57; // [rsp+48h] [rbp-120h]
  char v58; // [rsp+50h] [rbp-118h]
  struct DXGADAPTER *v59; // [rsp+58h] [rbp-110h] BYREF
  unsigned int v60[4]; // [rsp+60h] [rbp-108h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v61[4]; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v62; // [rsp+80h] [rbp-E8h] BYREF
  DXGADAPTER *v63; // [rsp+88h] [rbp-E0h] BYREF
  unsigned __int64 v64; // [rsp+98h] [rbp-D0h] BYREF
  ULONG64 v65; // [rsp+A0h] [rbp-C8h]
  unsigned __int64 v66; // [rsp+A8h] [rbp-C0h] BYREF
  _BYTE v67[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v65 = a1;
  v56 = -1;
  v57 = 0LL;
  v4 = 1;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v58 = 1;
    v56 = 2145;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2145);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2145LL);
  v8 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v60 = *v8;
  *(_OWORD *)&v61[0].0 = v8[1];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, v5, v6, v7);
  if ( Current )
  {
    v59 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v63, v60[0], Current, &v59, 1);
    v15 = v59;
    if ( v59 )
    {
      v59 = 0LL;
      v62 = 0LL;
      PairingAdapters = DxgkpGetPairingAdapters(v15, v60[1], &v59, &v64, &v62, &v66, 0);
      if ( PairingAdapters < 0 )
      {
        v19 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v15, v60[1], &v59, &v64, 0LL, 0LL, 0);
      }
      else
      {
        v19 = (ADAPTER_DISPLAY **)v62;
      }
      if ( PairingAdapters < 0 )
      {
        v45 = WdLogNewEntry5_WdError(v17, v16);
        *(_QWORD *)(v45 + 24) = v15;
        *(_QWORD *)(v45 + 32) = v60[1];
        WdLogEvent5_WdError(v45);
        if ( v63 )
          DXGADAPTER::ReleaseReference(v63);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v46);
        if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v56);
        return (unsigned int)PairingAdapters;
      }
      else
      {
        if ( v19 && !v19[337] )
        {
          v49 = WdLogNewEntry5_WdAssertion(v17, v16);
          *(_QWORD *)(v49 + 24) = 11134LL;
          WdLogEvent5_WdAssertion(v49);
        }
        v20 = v59;
        if ( !v59 || !*((_QWORD *)v59 + 338) )
        {
          v50 = WdLogNewEntry5_WdAssertion(v17, v16);
          *(_QWORD *)(v50 + 24) = 11136LL;
          WdLogEvent5_WdAssertion(v50);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v67, v20, (struct DXGADAPTER *const)v19);
        DXGADAPTER::ReleaseReference(v20);
        if ( v19 )
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v19);
        v21 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v67, 0LL);
        v25 = v21;
        if ( v21 < 0 )
        {
          v51 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
          v51[3] = v25;
          v51[4] = v15;
          v51[5] = v20;
          v51[6] = v19;
          WdLogEvent5_WdWarning(v51);
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67, v52);
          if ( v63 )
            DXGADAPTER::ReleaseReference(v63);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v53);
          if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v54, &EventProfilerExit, v55, v56);
          return 0LL;
        }
        else
        {
          if ( v19 )
          {
            LODWORD(v25) = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                             v19[337],
                             v60[1],
                             &v60[2],
                             &v60[3],
                             (unsigned int *)v61,
                             &v61[1],
                             (float *)&v61[2],
                             (float *)&v61[3]);
            Value = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v61[1].Value;
            v27 = v61[0].Value;
            v28 = v60[3];
            v4 = v60[2];
          }
          else
          {
            v28 = 0;
            v27 = 0;
            Value = 0;
            v61[2].Value = 1065353216;
            v61[3].Value = 1065353216;
          }
          v29 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)v65;
          v30 = (_DWORD *)(v65 + 8);
          if ( v65 + 8 >= MmUserProbeAddress )
            v30 = (_DWORD *)MmUserProbeAddress;
          *v30 = v4;
          p_Value = &v29[3].Value;
          if ( (unsigned __int64)&v29[3] >= MmUserProbeAddress )
            p_Value = (_DWORD *)MmUserProbeAddress;
          *p_Value = v28;
          v32 = &v29[4].Value;
          if ( (unsigned __int64)&v29[4] >= MmUserProbeAddress )
            v32 = (_DWORD *)MmUserProbeAddress;
          *v32 = v27;
          v33 = &v29[5].Value;
          if ( (unsigned __int64)&v29[5] >= MmUserProbeAddress )
            v33 = (_DWORD *)MmUserProbeAddress;
          *v33 = Value;
          v34 = v29 + 6;
          if ( (unsigned __int64)&v29[6] >= MmUserProbeAddress )
            v34 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
          v34->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v61[2];
          v35 = v29 + 7;
          if ( (unsigned __int64)&v29[7] >= MmUserProbeAddress )
            v35 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
          v35->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v61[3];
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67, (__int64)v35);
          if ( v63 )
            DXGADAPTER::ReleaseReference(v63);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v36);
          if ( v58 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v56);
          }
          return (unsigned int)v25;
        }
      }
    }
    v42 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v42 + 24) = v60[0];
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v42);
    if ( v63 )
      DXGADAPTER::ReleaseReference(v63);
  }
  else
  {
    v40 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v40);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56, v41);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v56);
  return 3221225485LL;
}
