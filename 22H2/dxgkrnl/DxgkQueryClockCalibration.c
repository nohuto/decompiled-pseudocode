/*
 * XREFs of DxgkQueryClockCalibration @ 0x1C0225A30
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C003C27C (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?IsClockCalibrationSupportedv2@ADAPTER_RENDER@@QEBAEXZ @ 0x1C003EFD8 (-IsClockCalibrationSupportedv2@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C024B6E4 (-VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUE.c)
 */

__int64 __fastcall DxgkQueryClockCalibration(__int64 a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_QUERYCLOCKCALIBRATION *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  bool v13; // r12
  struct _D3DKMT_QUERYCLOCKCALIBRATION *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGADAPTER *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int PairingAdapters; // r14d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGADAPTER *v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 PhysicalAdapterIndex; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // eax
  int v45; // esi
  __int64 v46; // rdx
  ADAPTER_RENDER *v47; // rcx
  __int64 v48; // r8
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // [rsp+40h] [rbp-118h] BYREF
  __int64 v63; // [rsp+48h] [rbp-110h]
  char v64; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v65; // [rsp+58h] [rbp-100h] BYREF
  DXGADAPTER *v66; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 v67; // [rsp+70h] [rbp-E8h] BYREF
  struct _D3DKMT_QUERYCLOCKCALIBRATION v68; // [rsp+78h] [rbp-E0h] BYREF
  _BYTE v69[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)a1;
  v62 = -1;
  v63 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v64 = 1;
    v62 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2125);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v62, 2125LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = 9608LL;
    WdLogEvent5_WdError(v11);
LABEL_31:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v12);
    if ( v64 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v39, &EventProfilerExit, v40, v62);
    }
    return 3221225485LL;
  }
  v13 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  memset(&v68, 0, sizeof(v68));
  if ( v13 )
  {
    v14 = v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v14 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
    v68 = *v14;
  }
  else
  {
    v68 = *v3;
  }
  v65 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v66, v68.hAdapter, Current, &v65, 1);
  v17 = v65;
  if ( !v65 )
  {
    v18 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v18 + 24) = Current;
    *(_QWORD *)(v18 + 32) = v68.hAdapter;
    WdLogEvent5_WdError(v18);
    goto LABEL_29;
  }
  v65 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v17, 0LL, &v65, &v67, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
    *(_QWORD *)(v23 + 24) = v17;
    WdLogEvent5_WdWarning(v23);
LABEL_16:
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v24);
    if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v62);
    return (unsigned int)PairingAdapters;
  }
  v28 = v65;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v69, v65, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v69, 0LL);
  DXGADAPTER::ReleaseReference(v28);
  if ( PairingAdapters < 0 )
  {
    v32 = WdLogNewEntry5_WdWarning(v30, v29, v31);
    *(_QWORD *)(v32 + 24) = v28;
    WdLogEvent5_WdWarning(v32);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v33);
    goto LABEL_16;
  }
  if ( v68.PhysicalAdapterIndex >= *((_DWORD *)v28 + 70) )
  {
    v34 = WdLogNewEntry5_WdWarning(v30, v29, v68.PhysicalAdapterIndex);
    PhysicalAdapterIndex = v68.PhysicalAdapterIndex;
LABEL_28:
    *(_QWORD *)(v34 + 24) = PhysicalAdapterIndex;
    WdLogEvent5_WdWarning(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v38);
LABEL_29:
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
    goto LABEL_31;
  }
  v36 = 360LL * v68.PhysicalAdapterIndex;
  v37 = *(unsigned __int16 *)(v36 + *((_QWORD *)v28 + 323));
  if ( v68.NodeOrdinal >= (unsigned int)v37 )
  {
    v34 = WdLogNewEntry5_WdWarning(v36, v37, v68.PhysicalAdapterIndex);
    PhysicalAdapterIndex = v68.NodeOrdinal;
    goto LABEL_28;
  }
  memset(&v68.ClockData, 0, sizeof(v68.ClockData));
  if ( *((_BYTE *)v28 + 209) )
  {
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v36, v37) + 408) < 0x15u )
    {
      v45 = -1073741822;
      goto LABEL_42;
    }
    v44 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
            (struct DXGADAPTER *)((char *)v28 + 4240),
            (struct DXGPROCESS *)Current,
            &v68);
LABEL_41:
    v45 = v44;
LABEL_42:
    if ( v45 >= 0 )
    {
      if ( v13 && (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (struct _D3DKMT_QUERYCLOCKCALIBRATION *)MmUserProbeAddress;
      *v3 = v68;
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v41);
      if ( v66 )
        DXGADAPTER::ReleaseReference(v66);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v54);
      if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v62);
      return 0LL;
    }
    else
    {
      v49 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
      v49[3] = v45;
      v49[4] = v68.NodeOrdinal;
      v49[5] = v68.PhysicalAdapterIndex;
      WdLogEvent5_WdWarning(v49);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v50);
      if ( v66 )
        DXGADAPTER::ReleaseReference(v66);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v51);
      if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v62);
      return (unsigned int)v45;
    }
  }
  if ( ADAPTER_RENDER::IsClockCalibrationSupportedv2(*((ADAPTER_RENDER **)v28 + 338)) )
  {
    v44 = ADAPTER_RENDER::DdiCalibrateGpuClock(v47, v68.NodeOrdinal, v48, &v68.ClockData);
    goto LABEL_41;
  }
  v57 = WdLogNewEntry5_WdError(v47, v46);
  *(_QWORD *)(v57 + 24) = 9705LL;
  WdLogEvent5_WdError(v57);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v69, v58);
  if ( v66 )
    DXGADAPTER::ReleaseReference(v66);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v59);
  if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v60, &EventProfilerExit, v61, v62);
  return 3221225473LL;
}
