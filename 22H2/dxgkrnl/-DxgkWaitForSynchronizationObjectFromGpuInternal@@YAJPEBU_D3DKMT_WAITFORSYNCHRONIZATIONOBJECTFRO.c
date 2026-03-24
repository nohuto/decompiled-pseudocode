/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C00F6020
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DBBE0 (-VmBusWaitForSyncObjectFromGpuCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C00F38FC (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C00F5FF0 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0251530 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00F64C0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        __int64 a3,
        const unsigned __int64 *a4,
        bool a5)
{
  bool v6; // r13
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGPROCESS *v17; // rbx
  struct DXGPROCESS *v18; // rsi
  __int128 v19; // xmm2
  void *v20; // r15
  __int64 v21; // rdi
  unsigned int *PoolWithTag; // rbx
  size_t v23; // r8
  const void *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // ebx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+58h] [rbp-D0h]
  char v49; // [rsp+60h] [rbp-C8h]
  struct DXGPROCESS *v50; // [rsp+68h] [rbp-C0h]
  void *Src[2]; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v52[2]; // [rsp+80h] [rbp-A8h]
  __int128 v53; // [rsp+90h] [rbp-98h]
  __int128 v54; // [rsp+A0h] [rbp-88h]
  __int128 v55; // [rsp+B0h] [rbp-78h]
  PVOID P; // [rsp+C0h] [rbp-68h]
  _BYTE v57[16]; // [rsp+C8h] [rbp-60h] BYREF
  unsigned int v58; // [rsp+D8h] [rbp-50h]

  v6 = a3;
  v8 = a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2043LL);
  CurrentProcess = PsGetCurrentProcess(v10, v9, v11, v12);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v17 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v18 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL )
  {
    v18 = v17;
  }
  v50 = v18;
  if ( v18 )
  {
    P = 0LL;
    v58 = 0;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
      *(_OWORD *)v52 = *(_OWORD *)&v8->MonitoredFenceValueArray;
      PoolWithTag = (unsigned int *)Src[1];
      v20 = Src[0];
LABEL_37:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v52[0];
      v33 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(v20),
              PoolWithTag,
              a4,
              v52[0],
              (unsigned int)v20,
              v18,
              a2,
              0,
              v6,
              a5);
      if ( v33 < 0 )
      {
        if ( P != v57 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v58 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v32);
        if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v47);
        return (unsigned int)v33;
      }
      else
      {
        if ( P != v57 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v58 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v32);
        if ( v49 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v47);
        }
        return 0LL;
      }
    }
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    v19 = *(_OWORD *)&v8->hContext;
    *(_OWORD *)Src = v19;
    *(_OWORD *)v52 = *(_OWORD *)&v8->MonitoredFenceValueArray;
    v53 = *(_OWORD *)&v8->Reserved[2];
    v54 = *(_OWORD *)&v8->Reserved[4];
    v55 = *(_OWORD *)&v8->Reserved[6];
    v20 = (void *)v19;
    if ( DWORD1(v19) )
    {
      v21 = HIDWORD(Src[0]);
      if ( HIDWORD(Src[0]) > 4 )
      {
        v15 = 0xFFFFFFFFFFFFFFFFuLL % HIDWORD(Src[0]);
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
        {
          PoolWithTag = (unsigned int *)P;
LABEL_28:
          if ( PoolWithTag != (unsigned int *)v57 && PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          P = 0LL;
          v58 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v15);
          if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v47);
          return 3221225495LL;
        }
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * HIDWORD(Src[0]), 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = (unsigned int *)v57;
        P = v57;
      }
      v58 = v21;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4 * v21);
        PoolWithTag = (unsigned int *)P;
        if ( P )
        {
          v23 = 4LL * v58;
          v24 = Src[1];
          if ( (char *)Src[1] + v23 < Src[1] || (char *)Src[1] + v23 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(PoolWithTag, v24, v23);
          Src[1] = PoolWithTag;
          goto LABEL_37;
        }
      }
      goto LABEL_28;
    }
    v25 = WdLogNewEntry5_WdError(MmUserProbeAddress, v15);
    *(_QWORD *)(v25 + 24) = (unsigned int)v19;
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v25);
    if ( P != v57 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v58 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v26);
    if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v47);
    return 3221225485LL;
  }
  else
  {
    v37 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v37 + 24) = PsGetCurrentProcess(v39, v38, v40, v41);
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v42);
    if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v47);
    return 3221225485LL;
  }
}
