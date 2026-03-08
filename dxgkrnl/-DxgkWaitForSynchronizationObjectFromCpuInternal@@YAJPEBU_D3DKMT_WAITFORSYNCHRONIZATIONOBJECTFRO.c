/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x1C01CCC20
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C01CCBE0 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C01CCC00 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     DxgkWslWaitForSynchronizationObjectFromCpu @ 0x1C034FD00 (DxgkWslWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0390790 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C01CD490 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x1C038C34C (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        struct DXGDEVICE *a3,
        void *a4)
{
  struct DXGDEVICE *v5; // rdi
  void **v7; // rsi
  __int64 v8; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct _KTHREAD **v11; // r14
  __int64 v12; // rcx
  struct _KTHREAD **v13; // r12
  unsigned int v14; // edi
  _BYTE *Pool2; // rcx
  size_t v16; // r8
  const void *v17; // rdx
  _BYTE *v18; // r9
  unsigned int v19; // edi
  _BYTE *v20; // rcx
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rcx
  unsigned int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  struct DXGPROCESS *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // [rsp+50h] [rbp-108h] BYREF
  __int64 v46; // [rsp+58h] [rbp-100h]
  char v47; // [rsp+60h] [rbp-F8h]
  struct DXGDEVICE *v48; // [rsp+68h] [rbp-F0h] BYREF
  struct DXGPROCESS *v49; // [rsp+70h] [rbp-E8h]
  _BYTE *v50; // [rsp+78h] [rbp-E0h]
  struct DXGDEVICE *v51; // [rsp+80h] [rbp-D8h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-D0h] BYREF
  void *v53[2]; // [rsp+98h] [rbp-C0h]
  void *v54; // [rsp+A8h] [rbp-B0h]
  void **v55; // [rsp+B0h] [rbp-A8h]
  size_t v56; // [rsp+B8h] [rbp-A0h]
  _BYTE *v57; // [rsp+C0h] [rbp-98h]
  size_t v58; // [rsp+C8h] [rbp-90h]
  PVOID v59; // [rsp+D0h] [rbp-88h]
  _BYTE v60[16]; // [rsp+D8h] [rbp-80h] BYREF
  unsigned int v61; // [rsp+E8h] [rbp-70h]
  PVOID P; // [rsp+F0h] [rbp-68h]
  _BYTE v63[32]; // [rsp+F8h] [rbp-60h] BYREF
  unsigned int v64; // [rsp+118h] [rbp-40h]

  v5 = a3;
  v48 = a3;
  v7 = (void **)a1;
  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)a3, 2043);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2043);
  CurrentProcess = PsGetCurrentProcess(v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v12 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
      goto LABEL_5;
  }
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v13 = (struct _KTHREAD **)*((_QWORD *)Current + 3);
    if ( v13 )
    {
      v49 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
      goto LABEL_6;
    }
LABEL_5:
    v13 = v11;
    v49 = (struct DXGPROCESS *)v11;
    goto LABEL_6;
  }
  CurrentThread = KeGetCurrentThread();
  Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
  v39 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
  v13 = (struct _KTHREAD **)v39;
  if ( !v39 )
  {
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
    v5 = v48;
    goto LABEL_5;
  }
  v49 = v39;
  v5 = v48;
LABEL_6:
  if ( !v13 )
  {
    v40 = PsGetCurrentProcess(v12);
    WdLogSingleEntry2(2LL, v40, -1073741811LL);
    v42 = PsGetCurrentProcess(v41);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v42,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_104;
  }
  v59 = 0LL;
  v61 = 0;
  P = 0LL;
  v64 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v53 = 0LL;
  v54 = 0LL;
  if ( !a2 )
  {
    v55 = v7;
    if ( !*((_DWORD *)v7 + 1) || *((_DWORD *)v7 + 8) >= 2u )
    {
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
      if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
        return 3221225485LL;
      goto LABEL_104;
    }
    goto LABEL_61;
  }
  if ( (unsigned __int64)v7 >= MmUserProbeAddress )
    v7 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v7;
  *(_OWORD *)v53 = *((_OWORD *)v7 + 1);
  v54 = v7[4];
  if ( !HIDWORD(Src[0]) )
  {
    P = 0LL;
    v64 = 0;
    v59 = 0LL;
    v61 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v45);
    return 3221225485LL;
  }
  if ( ((unsigned int)v54 & 0xFFFFFFFE) != 0 )
  {
    P = 0LL;
    v64 = 0;
    v59 = 0LL;
    v61 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v45);
    return 3221225485LL;
  }
  v14 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) <= 4 )
  {
    v59 = v60;
    memset(v60, 0, 4LL * HIDWORD(Src[0]));
    Pool2 = v59;
LABEL_14:
    v61 = v14;
    goto LABEL_15;
  }
  if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) >= 4 )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL);
    v59 = Pool2;
    goto LABEL_14;
  }
  v14 = v61;
  Pool2 = v59;
LABEL_15:
  if ( !Pool2 )
  {
    if ( P != v63 && P )
    {
      ExFreePoolWithTag(P, 0);
      Pool2 = v59;
    }
    P = 0LL;
    v64 = 0;
    if ( Pool2 != v60 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v59 = 0LL;
    v61 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v45);
    return 3221225495LL;
  }
  v16 = 4LL * v14;
  v56 = v16;
  v57 = Pool2;
  v17 = Src[1];
  if ( (char *)Src[1] + v16 < Src[1] || (char *)Src[1] + v16 > (void *)MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(Pool2, v17, v16);
  v18 = v59;
  Src[1] = v59;
  v19 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 8 )
    {
      v19 = v64;
      v20 = P;
      goto LABEL_23;
    }
    v20 = (_BYTE *)ExAllocatePool2(64LL, 8LL * HIDWORD(Src[0]), 1265072196LL);
    P = v20;
    goto LABEL_21;
  }
  v20 = v63;
  P = v63;
  if ( HIDWORD(Src[0]) )
  {
    memset(v63, 0, 8LL * HIDWORD(Src[0]));
    v20 = P;
LABEL_21:
    v18 = v59;
  }
  v64 = v19;
LABEL_23:
  if ( v20 )
  {
    v21 = 8LL * v19;
    v58 = v21;
    v50 = v20;
    v22 = v53[0];
    if ( (char *)v53[0] + v21 < v53[0] || (char *)v53[0] + v21 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, v22, v21);
    v53[0] = P;
    v7 = Src;
    v55 = Src;
    v5 = v48;
LABEL_61:
    if ( a4 )
      v7[3] = a4;
    v51 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v48, *(_DWORD *)v7, v13, &v51);
    if ( v51 )
    {
      v32 = *(_QWORD *)(*((_QWORD *)v51 + 2) + 16LL);
      if ( *(_BYTE *)(v32 + 209) )
      {
        v33 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v32 + 4472),
                (struct DXGPROCESS *)v13,
                *((_DWORD *)v51 + 118),
                (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v7,
                0);
        if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
        if ( P != v63 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v64 = 0;
        if ( v59 != v60 && v59 )
          ExFreePoolWithTag(v59, 0);
        v59 = 0LL;
        v61 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
        if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return v33;
      }
      else
      {
        v33 = WaitForSynchronizationObjectFromCpu(
                (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v7,
                (struct DXGPROCESS *)v13,
                v51,
                v5);
        if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
        if ( P != v63 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v64 = 0;
        if ( v59 != v60 && v59 )
          ExFreePoolWithTag(v59, 0);
        v59 = 0LL;
        v61 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
        if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return v33;
      }
      McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v45);
      return v33;
    }
    WdLogSingleEntry2(2LL, *(unsigned int *)v7, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      *(unsigned int *)v7,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( v48 && _InterlockedExchangeAdd64((volatile signed __int64 *)v48 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v48 + 2), v48);
    if ( P != v63 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v64 = 0;
    if ( v59 != v60 && v59 )
      ExFreePoolWithTag(v59, 0);
    v59 = 0LL;
    v61 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
    if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_104:
    McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v45);
    return 3221225485LL;
  }
  P = 0LL;
  v64 = 0;
  if ( v18 != v60 && v18 )
    ExFreePoolWithTag(v18, 0);
  v59 = 0LL;
  v61 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v45);
  return 3221225495LL;
}
