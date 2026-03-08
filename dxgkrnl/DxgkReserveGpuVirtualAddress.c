/*
 * XREFs of DxgkReserveGpuVirtualAddress @ 0x1C017DFB0
 * Callers:
 *     ?VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C03802F0 (-VmBusReserveGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C00038F8 (-Open@DXGPAGINGQUEUEBYHANDLE@@QEAAXIPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00097B8 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C0009954 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x1C00256A0 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x1C0388FF8 (-VmBusSendReserveGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAUD3DDDI_RESERVEGPUVIRTU.c)
 */

__int64 __fastcall DxgkReserveGpuVirtualAddress(ULONG64 a1, __int64 a2, __int64 a3)
{
  bool v4; // di
  struct DXGPROCESS *Current; // r12
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v6; // rdi
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v7; // rax
  struct DXGPAGINGQUEUE *v8; // r14
  struct DXGADAPTER *v9; // rsi
  __int64 v10; // r15
  struct DXGPAGINGQUEUE *v11; // r13
  int v12; // esi
  ULONG64 v13; // r8
  _QWORD *v14; // rdx
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // sf
  DXGPAGINGQUEUE *v22; // rcx
  struct DXGADAPTER **v23; // rax
  int PairingAdapters; // r13d
  __int64 v25; // rcx
  __int64 v26; // r8
  DXG_GUEST_VIRTUALGPU_VMBUS *v27; // r15
  unsigned int v28; // esi
  unsigned int HostProcess; // eax
  bool v30; // [rsp+50h] [rbp-198h]
  int v31; // [rsp+58h] [rbp-190h] BYREF
  __int64 v32; // [rsp+60h] [rbp-188h]
  char v33; // [rsp+68h] [rbp-180h]
  DXGPAGINGQUEUE *v34; // [rsp+70h] [rbp-178h] BYREF
  struct DXGADAPTER *v35; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v36; // [rsp+80h] [rbp-168h] BYREF
  struct DXGPAGINGQUEUE *v37; // [rsp+88h] [rbp-160h] BYREF
  struct DXGADAPTER *v38; // [rsp+90h] [rbp-158h] BYREF
  DXGADAPTER *v39; // [rsp+98h] [rbp-150h] BYREF
  D3DDDI_RESERVEGPUVIRTUALADDRESS *v40; // [rsp+A8h] [rbp-140h]
  ULONG64 v41; // [rsp+B0h] [rbp-138h]
  struct DXGPROCESS *v42; // [rsp+B8h] [rbp-130h]
  D3DDDI_RESERVEGPUVIRTUALADDRESS v43; // [rsp+E0h] [rbp-108h] BYREF
  _BYTE v44[144]; // [rsp+130h] [rbp-B8h] BYREF

  v41 = a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2098;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2098);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2098);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  v30 = v4;
  Current = DXGPROCESS::GetCurrent();
  v42 = Current;
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
LABEL_35:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( !v33 )
      return 3221225485LL;
    v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_65:
    if ( v21 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v31);
    return 3221225485LL;
  }
  memset(&v43, 0, sizeof(v43));
  if ( v4 )
  {
    v6 = &v43;
    v40 = &v43;
    v7 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    if ( a1 >= MmUserProbeAddress )
      v7 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)MmUserProbeAddress;
    v43 = *v7;
  }
  else
  {
    v6 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
    v40 = (D3DDDI_RESERVEGPUVIRTUALADDRESS *)a1;
  }
  if ( v6->ReservationType > D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO )
  {
    WdLogSingleEntry2(3LL, -1073741811LL, 13166LL);
    goto LABEL_35;
  }
  v37 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::Open((DXGPAGINGQUEUEBYHANDLE *)&v34, v6->hPagingQueue, Current, &v37, 0);
  v38 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v39,
    v6->hPagingQueue,
    (struct _KTHREAD **)Current,
    &v38,
    0);
  v8 = v37;
  v9 = v38;
  if ( !v37 && !v38 )
  {
    WdLogSingleEntry2(3LL, v6->hPagingQueue, -1073741811LL);
    if ( v39 )
      DXGADAPTER::ReleaseReference(v39);
    v22 = v34;
    if ( !v34 )
      goto LABEL_35;
    goto LABEL_57;
  }
  v10 = 0LL;
  if ( v37 )
  {
    v9 = *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v37 + 2) + 16LL) + 16LL);
    v10 = *((_QWORD *)v37 + 4);
  }
  v35 = 0LL;
  if ( *((_QWORD *)v9 + 366) )
  {
    DXGADAPTER_REFERENCE::Assign(&v35, v9);
    goto LABEL_14;
  }
  v23 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v35);
  PairingAdapters = DxgkpGetPairingAdapters(v9, 0, v23, &v36, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
LABEL_14:
    v11 = (struct DXGPAGINGQUEUE *)*((_QWORD *)v35 + 366);
    v37 = v11;
    if ( *((_BYTE *)v35 + 209) )
    {
      v27 = (struct DXGADAPTER *)((char *)v35 + 4472);
      if ( v8 )
        v28 = *((_DWORD *)v8 + 7);
      else
        v28 = *((_DWORD *)v35 + 1140);
      HostProcess = DXGPROCESS::GetHostProcess(Current);
      v12 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendReserveGpuVirtualAddress(v27, HostProcess, v28, v6);
    }
    else
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v35, 0LL);
      v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v44, 0LL);
      if ( v12 < 0 )
      {
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
LABEL_26:
        DXGADAPTER_REFERENCE::Assign(&v35, 0LL);
        if ( v39 )
          DXGADAPTER::ReleaseReference(v39);
        if ( v34 )
          DXGPAGINGQUEUE::ReleaseReference(v34);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( v33 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v31);
        }
        return (unsigned int)v12;
      }
      if ( v6->Reserved0 > 1 )
      {
        WdLogSingleEntry1(3LL, -1073741811LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
        DXGADAPTER_REFERENCE::Assign(&v35, 0LL);
        if ( v39 )
          DXGADAPTER::ReleaseReference(v39);
        v22 = v34;
        if ( !v34 )
          goto LABEL_35;
LABEL_57:
        DXGPAGINGQUEUE::ReleaseReference(v22);
        goto LABEL_35;
      }
      if ( v6->Reserved0 == 1 && !v10 )
      {
        WdLogSingleEntry2(3LL, -1073741811LL, 13233LL);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
        DXGADAPTER_REFERENCE::Assign(&v35, 0LL);
        if ( v39 )
          DXGADAPTER::ReleaseReference(v39);
        if ( v34 )
          DXGPAGINGQUEUE::ReleaseReference(v34);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
        if ( !v33 )
          return 3221225485LL;
        LOBYTE(v19) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v21 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
        goto LABEL_65;
      }
      v12 = (*(__int64 (__fastcall **)(_QWORD, struct DXGPROCESS *, __int64, D3DDDI_RESERVEGPUVIRTUALADDRESS *))(*(_QWORD *)(*((_QWORD *)v11 + 95) + 8LL) + 784LL))(
              *((_QWORD *)v11 + 96),
              Current,
              v10,
              v6);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    }
    if ( v12 >= 0 && v30 )
    {
      v13 = v41;
      v14 = (_QWORD *)(v41 + 56);
      if ( v41 + 56 >= MmUserProbeAddress )
        v14 = (_QWORD *)MmUserProbeAddress;
      *v14 = v6->VirtualAddress;
      v15 = (_QWORD *)(v13 + 64);
      if ( v13 + 64 >= MmUserProbeAddress )
        v15 = (_QWORD *)MmUserProbeAddress;
      *v15 = v6->PagingFenceValue;
    }
    goto LABEL_26;
  }
  WdLogSingleEntry1(3LL, v9);
  DXGADAPTER_REFERENCE::Assign(&v35, 0LL);
  if ( v39 )
    DXGADAPTER::ReleaseReference(v39);
  if ( v34 )
    DXGPAGINGQUEUE::ReleaseReference(v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v31);
  return (unsigned int)PairingAdapters;
}
