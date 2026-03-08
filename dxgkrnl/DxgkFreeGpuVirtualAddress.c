/*
 * XREFs of DxgkFreeGpuVirtualAddress @ 0x1C02D4C70
 * Callers:
 *     ?VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037A3F0 (-VmBusFreeGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
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
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0340210 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z @ 0x1C0384660 (-VmBusSendFreeGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJII_K0@Z.c)
 */

__int64 __fastcall DxgkFreeGpuVirtualAddress(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  bool v4; // di
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r12
  unsigned int v7; // ebx
  unsigned int *v8; // rdi
  struct DXGADAPTER *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  bool v12; // sf
  struct DXGADAPTER **v13; // rax
  int PairingAdapters; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v18; // eax
  DXG_GUEST_VIRTUALGPU_VMBUS *v19; // r14
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rdi
  unsigned int v22; // esi
  unsigned int HostProcess; // eax
  int v24; // [rsp+50h] [rbp-118h] BYREF
  __int64 v25; // [rsp+58h] [rbp-110h]
  char v26; // [rsp+60h] [rbp-108h]
  struct DXGADAPTER *v27; // [rsp+68h] [rbp-100h] BYREF
  unsigned __int64 v28; // [rsp+70h] [rbp-F8h] BYREF
  struct DXGADAPTER *v29; // [rsp+78h] [rbp-F0h] BYREF
  DXGADAPTER *v30; // [rsp+80h] [rbp-E8h] BYREF
  __int128 v31; // [rsp+90h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-C8h]
  _BYTE v33[144]; // [rsp+B0h] [rbp-B8h] BYREF

  v3 = a1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2099;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2099);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2099);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    v7 = -1073741811;
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
LABEL_33:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( !v26 )
      return v7;
    v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_35:
    if ( v12 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v24);
    return v7;
  }
  v31 = 0LL;
  v32 = 0LL;
  if ( v4 )
  {
    v8 = (unsigned int *)&v31;
    if ( v3 >= MmUserProbeAddress )
      v3 = MmUserProbeAddress;
    v31 = *(_OWORD *)v3;
    v32 = *(_QWORD *)(v3 + 16);
  }
  else
  {
    v8 = (unsigned int *)v3;
  }
  v29 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v30, *v8, Current, &v29, 1);
  v9 = v29;
  if ( !v29 )
  {
    v7 = -1073741811;
    WdLogSingleEntry3(3LL, -1073741811LL, Current, *v8);
    if ( v30 )
      DXGADAPTER::ReleaseReference(v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( !v26 )
      return v7;
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v12 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_35;
  }
  v27 = 0LL;
  if ( *((_QWORD *)v29 + 366) )
  {
    DXGADAPTER_REFERENCE::Assign(&v27, v29);
    goto LABEL_26;
  }
  v13 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v27);
  PairingAdapters = DxgkpGetPairingAdapters(v9, 0, v13, &v28, 0LL, 0LL, 0);
  if ( PairingAdapters >= 0 )
  {
LABEL_26:
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, v27, 0LL);
    v7 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
    if ( (v7 & 0x80000000) == 0 )
    {
      if ( *((_BYTE *)v27 + 209) )
      {
        v19 = (struct DXGADAPTER *)((char *)v27 + 4472);
        v20 = *((_QWORD *)v8 + 2);
        v21 = *((_QWORD *)v8 + 1);
        v22 = *((_DWORD *)v27 + 1140);
        HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)Current);
        v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendFreeGpuVirtualAddress(v19, HostProcess, v22, v21, v20);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(_QWORD, struct _KTHREAD **, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v27 + 366) + 760LL)
                                                                                                + 8LL)
                                                                                    + 800LL))(
                *(_QWORD *)(*((_QWORD *)v27 + 366) + 768LL),
                Current,
                v8);
      }
      v7 = v18;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33);
    DXGADAPTER_REFERENCE::Assign(&v27, 0LL);
    if ( v30 )
      DXGADAPTER::ReleaseReference(v30);
    goto LABEL_33;
  }
  WdLogSingleEntry1(3LL, v9);
  DXGADAPTER_REFERENCE::Assign(&v27, 0LL);
  if ( v30 )
    DXGADAPTER::ReleaseReference(v30);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v24);
  return (unsigned int)PairingAdapters;
}
