/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C0174630
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241E90 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
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
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C0248E78 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C02857F4 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **Current; // r15
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rbx
  __int64 v17; // rdx
  int v18; // ebx
  struct DXGADAPTER *v19; // r14
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  struct DXGADAPTER **v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  int PairingAdapters; // r14d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned int v39; // ebx
  unsigned int HostProcess; // eax
  int v41; // [rsp+40h] [rbp-118h] BYREF
  __int64 v42; // [rsp+48h] [rbp-110h]
  char v43; // [rsp+50h] [rbp-108h]
  struct DXGADAPTER *v44; // [rsp+58h] [rbp-100h] BYREF
  unsigned __int64 v45; // [rsp+60h] [rbp-F8h] BYREF
  struct DXGADAPTER *v46; // [rsp+68h] [rbp-F0h] BYREF
  DXGADAPTER *v47; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v48; // [rsp+80h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+90h] [rbp-C8h]
  _BYTE v50[144]; // [rsp+A0h] [rbp-B8h] BYREF

  v3 = a1;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2099;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2099);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2099LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
    v25 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v25 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v25);
LABEL_25:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v26);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v41);
    return 3221225485LL;
  }
  v48 = 0LL;
  v49 = 0LL;
  if ( v4 )
  {
    v12 = (unsigned int *)&v48;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v48 = *(_OWORD *)v3;
    v49 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v12 = (unsigned int *)v3;
  }
  v46 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v47, *v12, Current, &v46, 1);
  v16 = v46;
  if ( !v46 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v14, v13, v15);
    v27[3] = -1073741811LL;
    v27[4] = Current;
    v27[5] = *v12;
    WdLogEvent5_WdWarning(v27);
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    goto LABEL_25;
  }
  v44 = 0LL;
  if ( *((_QWORD *)v46 + 338) )
  {
    DXGADAPTER_REFERENCE::Assign(&v44, v46);
LABEL_11:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v50, v44, 0LL);
    v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50, 0LL);
    if ( v18 >= 0 )
    {
      v19 = v44;
      if ( *((_BYTE *)v44 + 209) )
      {
        v39 = *((_DWORD *)v44 + 1078);
        HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
        v20 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(
                (struct DXGADAPTER *)((char *)v19 + 4240),
                HostProcess,
                v39,
                *((_QWORD *)v12 + 1),
                *((_QWORD *)v12 + 2));
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 338) + 640LL)
                                                                                                + 8LL)
                                                                                    + 808LL))(
                *(_QWORD *)(*((_QWORD *)v44 + 338) + 648LL),
                Current,
                v12);
      }
      v18 = v20;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50, v17);
    DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
    if ( v47 )
      DXGADAPTER::ReleaseReference(v47);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v21);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v41);
    }
    return (unsigned int)v18;
  }
  v30 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v44, v13);
  PairingAdapters = DxgkpGetPairingAdapters(v16, 0LL, v30, &v45, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
    goto LABEL_11;
  v35 = WdLogNewEntry5_WdWarning(v32, v31, v33);
  *(_QWORD *)(v35 + 24) = v16;
  WdLogEvent5_WdWarning(v35);
  DXGADAPTER_REFERENCE::Assign(&v44, 0LL);
  if ( v47 )
    DXGADAPTER::ReleaseReference(v47);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v36);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v41);
  return (unsigned int)PairingAdapters;
}
