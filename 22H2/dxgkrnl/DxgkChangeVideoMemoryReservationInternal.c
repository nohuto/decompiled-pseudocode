/*
 * XREFs of DxgkChangeVideoMemoryReservationInternal @ 0x1C02299AC
 * Callers:
 *     DxgkChangeVideoMemoryReservation @ 0x1C0229990 (DxgkChangeVideoMemoryReservation.c)
 *     ?VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023D5E0 (-VmBusChangeVideoMemoryReservation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0002D74 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00ED4E0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00ED5A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMORYRESERVATION@@@Z @ 0x1C0215EF4 (-ChangeVideoMemoryReservation@ADAPTER_RENDER@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_CHANGEVIDEOMMEMOR.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C028452C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkChangeVideoMemoryReservationInternal(
        _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION *a1,
        char a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r14
  __int64 v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  ULONG64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **Current; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  bool v18; // zf
  HANDLE hProcess; // r12
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGPROCESS *Process; // r12
  DXGADAPTER *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int PairingAdapters; // r15d
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct DXGADAPTER *v45; // r14
  __int64 v46; // rdx
  ADAPTER_RENDER *v47; // r9
  UINT *p_PhysicalAdapterIndex; // rdx
  unsigned int v49; // r14d
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  int v55; // [rsp+48h] [rbp-170h] BYREF
  __int64 v56; // [rsp+50h] [rbp-168h]
  char v57; // [rsp+58h] [rbp-160h]
  struct DXGADAPTER *v58; // [rsp+60h] [rbp-158h] BYREF
  struct DXGADAPTER *v59; // [rsp+68h] [rbp-150h] BYREF
  DXGADAPTER *v60; // [rsp+70h] [rbp-148h]
  _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION v61; // [rsp+78h] [rbp-140h] BYREF
  DXGADAPTER *v62; // [rsp+98h] [rbp-120h] BYREF
  unsigned __int64 v63; // [rsp+A8h] [rbp-110h] BYREF
  _BYTE v64[80]; // [rsp+B0h] [rbp-108h] BYREF
  _BYTE v65[144]; // [rsp+100h] [rbp-B8h] BYREF

  v3 = (struct DXGADAPTER *)a3;
  v55 = -1;
  v56 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v57 = 1;
    v55 = 2120;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2120);
  }
  else
  {
    v57 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v55, 2120LL);
  *(_QWORD *)&v61.PhysicalAdapterIndex = 0LL;
  if ( a2 )
  {
    v7 = MmUserProbeAddress;
    v10 = (ULONG64)a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v10 = MmUserProbeAddress;
    *(_OWORD *)&v61.hProcess = *(_OWORD *)v10;
    v61.Reservation = *(_QWORD *)(v10 + 16);
  }
  else
  {
    v61 = *a1;
  }
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  if ( !Current )
  {
    v14 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v15);
    v18 = v57 == 0;
LABEL_25:
    if ( !v18 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v55);
    return 3221225485LL;
  }
  hProcess = v61.hProcess;
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v64, v61.hProcess, 512);
  if ( hProcess )
  {
    v20 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v64, 1);
    v24 = v20;
    if ( v20 < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      *(_QWORD *)(v25 + 24) = hProcess;
      *(_QWORD *)(v25 + 32) = v24;
      WdLogEvent5_WdWarning(v25);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v64);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v26);
      if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v55);
      return (unsigned int)v24;
    }
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v64);
  }
  else
  {
    Process = (struct DXGPROCESS *)Current;
  }
  v58 = v3;
  v31 = 0LL;
  v60 = 0LL;
  if ( !v3 )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v62, v61.hAdapter, Current, &v58, 1);
    if ( !v58 )
    {
      v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
      v35[3] = -1073741811LL;
      v35[4] = Current;
      v35[5] = v61.hAdapter;
      WdLogEvent5_WdWarning(v35);
      if ( v62 )
        DXGADAPTER::ReleaseReference(v62);
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v64);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v36);
      v18 = v57 == 0;
      goto LABEL_25;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v58 + 3);
    v3 = v58;
    v31 = v58;
    v60 = v58;
    if ( v62 )
      DXGADAPTER::ReleaseReference(v62);
  }
  v59 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v3, 0LL, &v59, &v63, 0LL, 0LL, 0);
  if ( PairingAdapters < 0 )
  {
    v41 = WdLogNewEntry5_WdWarning(v38, v37, v39);
    *(_QWORD *)(v41 + 24) = v3;
    WdLogEvent5_WdWarning(v41);
LABEL_33:
    if ( v31 )
      DXGADAPTER::ReleaseReference(v31);
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v64);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v42);
    if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v55);
    return (unsigned int)PairingAdapters;
  }
  v45 = v59;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v65, v59, 0LL);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v65, 0LL);
  DXGADAPTER::ReleaseReference(v45);
  if ( PairingAdapters < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65, v46);
    goto LABEL_33;
  }
  v47 = (ADAPTER_RENDER *)*((_QWORD *)v45 + 338);
  if ( a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v45 + 27) + 64LL) + 40LL) + 28LL) >= 0x5018u )
  {
    p_PhysicalAdapterIndex = &a1->PhysicalAdapterIndex;
    if ( (unsigned __int64)&a1->PhysicalAdapterIndex >= MmUserProbeAddress )
      p_PhysicalAdapterIndex = (UINT *)MmUserProbeAddress;
    v61.PhysicalAdapterIndex = *p_PhysicalAdapterIndex;
  }
  v49 = ADAPTER_RENDER::ChangeVideoMemoryReservation(v47, Process, &v61);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v65, v50);
  if ( v31 )
    DXGADAPTER::ReleaseReference(v31);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v64);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v55, v51);
  if ( v57 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v52, &EventProfilerExit, v53, v55);
  return v49;
}
