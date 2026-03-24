/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C0173F00
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0246820 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C000A318 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0019574 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001E090 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C0026010 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C024BFC8 (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **Current; // r13
  __int64 v12; // rdx
  ULONG64 v13; // rcx
  __int64 v14; // r8
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v15; // rdi
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGPAGINGQUEUE *v20; // r14
  struct DXGADAPTER *v21; // rsi
  __int64 v22; // r15
  struct DXGADAPTER *v23; // rsi
  struct DXGPAGINGQUEUE *v24; // r12
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // esi
  __int64 v28; // r8
  __int64 v29; // rdx
  ULONG64 v30; // r8
  _QWORD *v31; // rdx
  _QWORD *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  DXGPAGINGQUEUE *v41; // rcx
  struct DXGADAPTER **v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int PairingAdapters; // r12d
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  unsigned int v55; // r14d
  unsigned int HostProcess; // eax
  bool v57; // [rsp+40h] [rbp-198h]
  int v58; // [rsp+48h] [rbp-190h] BYREF
  __int64 v59; // [rsp+50h] [rbp-188h]
  char v60; // [rsp+58h] [rbp-180h]
  DXGPAGINGQUEUE *v61; // [rsp+60h] [rbp-178h] BYREF
  struct DXGADAPTER *v62; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v63; // [rsp+70h] [rbp-168h] BYREF
  struct DXGPAGINGQUEUE *v64; // [rsp+78h] [rbp-160h] BYREF
  struct DXGADAPTER *v65; // [rsp+80h] [rbp-158h] BYREF
  DXGADAPTER *v66; // [rsp+88h] [rbp-150h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v67; // [rsp+98h] [rbp-140h]
  ULONG64 v68; // [rsp+A0h] [rbp-138h]
  struct _KTHREAD **v69; // [rsp+A8h] [rbp-130h]
  D3DDDI_RESERVEGPUVIRTUALADDRESS v70; // [rsp+D0h] [rbp-108h] BYREF
  _BYTE v71[144]; // [rsp+120h] [rbp-B8h] BYREF

  v68 = a1;
  v58 = -1;
  v59 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v60 = 1;
    v58 = 2098;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2098);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 2098LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v57 = v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v69 = Current;
  if ( !Current )
  {
    v37 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v37 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v37);
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v38);
    if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v58);
    return 3221225485LL;
  }
  memset(&v70, 0, sizeof(v70));
  if ( v4 )
  {
    v15 = &v70;
    v67 = &v70;
    v13 = MmUserProbeAddress;
    v16 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v16 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v70 = *v16;
  }
  else
  {
    v15 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    v67 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
  }
  if ( v15->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    v39 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    *(_QWORD *)(v39 + 32) = 12711LL;
    WdLogEvent5_WdWarning(v39);
    goto LABEL_60;
  }
  v64 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v61, v15->hPagingQueue, Current, &v64, 0);
  v65 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v66, v15->hPagingQueue, Current, &v65, 0);
  v20 = v64;
  v21 = v65;
  if ( !v64 && !v65 )
  {
    v40 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v40 + 24) = v15->hPagingQueue;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v40);
    if ( v66 )
      DXGADAPTER::ReleaseReference(v66);
    v41 = v61;
    if ( !v61 )
      goto LABEL_60;
    goto LABEL_59;
  }
  v22 = 0LL;
  if ( v64 )
  {
    v21 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v64 + 2) + 16LL) + 16LL);
    v22 = *((_QWORD *)v64 + 4);
  }
  v62 = 0LL;
  if ( *((_QWORD *)v21 + 338) )
  {
    DXGADAPTER_REFERENCE::Assign(&v62, v21);
    goto LABEL_14;
  }
  v42 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v62, v17);
  PairingAdapters = DxgkpGetPairingAdapters(v21, 0LL, v42, &v63, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
LABEL_14:
    v23 = v62;
    v24 = (struct DXGPAGINGQUEUE *)*((_QWORD *)v62 + 338);
    v64 = v24;
    if ( *((_BYTE *)v62 + 209) )
    {
      if ( v20 )
        v55 = *((_DWORD *)v20 + 7);
      else
        v55 = *((_DWORD *)v62 + 1078);
      HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
      v27 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(
              (struct DXGADAPTER *)((char *)v23 + 4240),
              HostProcess,
              v55,
              v15);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v71, v62, 0LL);
      v27 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v71, 0LL);
      if ( v27 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71, v25);
LABEL_26:
        DXGADAPTER_REFERENCE::Assign(&v62, 0LL);
        if ( v66 )
          DXGADAPTER::ReleaseReference(v66);
        if ( v61 )
          DXGPAGINGQUEUE::ReleaseReference(v61, v33);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v33);
        if ( v60 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v58);
        }
        return (unsigned int)v27;
      }
      if ( v15->Reserved0 > 1 )
      {
        v51 = WdLogNewEntry5_WdWarning(v26, v25, v28);
        goto LABEL_56;
      }
      if ( v15->Reserved0 == 1 && !v22 )
      {
        v51 = WdLogNewEntry5_WdWarning(v26, v25, v28);
        *(_QWORD *)(v51 + 32) = 12778LL;
LABEL_56:
        *(_QWORD *)(v51 + 24) = -1073741811LL;
        WdLogEvent5_WdWarning(v51);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71, v52);
        DXGADAPTER_REFERENCE::Assign(&v62, 0LL);
        if ( v66 )
          DXGADAPTER::ReleaseReference(v66);
        v41 = v61;
        if ( !v61 )
          goto LABEL_60;
LABEL_59:
        DXGPAGINGQUEUE::ReleaseReference(v41, v38);
        goto LABEL_60;
      }
      v27 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, __int64, D3DDDI_RESERVEGPUVIRTUALADDRESS *))(*(_QWORD *)(*((_QWORD *)v24 + 80) + 8LL) + 792LL))(
              *((_QWORD *)v24 + 81),
              Current,
              v22,
              v15);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v71, v29);
    }
    if ( v27 >= 0 && v57 )
    {
      v30 = v68;
      v31 = (_QWORD *)(v68 + 56);
      if ( v68 + 56 >= MmUserProbeAddress )
        v31 = (_QWORD *)MmUserProbeAddress;
      *v31 = v15->VirtualAddress;
      v32 = (_QWORD *)(v30 + 64);
      if ( v30 + 64 >= MmUserProbeAddress )
        v32 = (_QWORD *)MmUserProbeAddress;
      *v32 = v15->PagingFenceValue;
    }
    goto LABEL_26;
  }
  v47 = WdLogNewEntry5_WdWarning(v44, v43, v45);
  *(_QWORD *)(v47 + 24) = v21;
  WdLogEvent5_WdWarning(v47);
  DXGADAPTER_REFERENCE::Assign(&v62, 0LL);
  if ( v66 )
    DXGADAPTER::ReleaseReference(v66);
  if ( v61 )
    DXGPAGINGQUEUE::ReleaseReference(v61, v48);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58, v48);
  if ( v60 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v49, &EventProfilerExit, v50, v58);
  return (unsigned int)PairingAdapters;
}
