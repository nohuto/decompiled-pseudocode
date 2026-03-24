/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C0159BB0
 * Callers:
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C0159B90 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C0294ED0 (DxgkSignalSynchronizationObjectFromGpu.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0105B50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016A3E8 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2,
        __int64 a3)
{
  void **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGPROCESS *v13; // rsi
  struct DXGPROCESS *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  PVOID v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  size_t v39; // r8
  const void *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  int v45; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+68h] [rbp-C0h]
  char v47; // [rsp+70h] [rbp-B8h]
  unsigned int v48; // [rsp+78h] [rbp-B0h] BYREF
  struct DXGPROCESS *v49; // [rsp+80h] [rbp-A8h]
  void *Src[11]; // [rsp+90h] [rbp-98h] BYREF
  PVOID P; // [rsp+E8h] [rbp-40h] BYREF
  _BYTE v52[16]; // [rsp+F0h] [rbp-38h] BYREF
  unsigned int v53; // [rsp+100h] [rbp-28h]

  v4 = (void **)a1;
  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2190);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2190LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL )
  {
    v14 = v13;
  }
  v49 = v14;
  if ( !v14 )
  {
    v23 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v23 + 24) = PsGetCurrentProcess(v25, v24, v26, v27);
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v28);
    if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_47;
  }
  P = 0LL;
  v53 = 0;
  memset(Src, 0, 0x50uLL);
  if ( !a2 )
  {
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_9:
      v48 = *(_DWORD *)v4;
      v18 = SignalSynchronizationObjectInternal(
              *((unsigned int *)v4 + 1),
              (unsigned int *)v4[1],
              0,
              1u,
              &v48,
              (unsigned __int64 *)v4[2],
              0LL,
              0LL,
              v14,
              a2 != 0,
              0);
      if ( v18 < 0 )
      {
        if ( P != v52 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v17);
        if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v45);
        return (unsigned int)v18;
      }
      else
      {
        if ( P != v52 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v17);
        if ( v47 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v45);
        }
        return 0LL;
      }
    }
    v41 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v41 + 24) = *(unsigned int *)v4;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v41);
    if ( P != v52 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v53 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v42);
    if ( !v47 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_47:
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v45);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v4;
  *(_OWORD *)&Src[2] = *((_OWORD *)v4 + 1);
  *(_OWORD *)&Src[4] = *((_OWORD *)v4 + 2);
  *(_OWORD *)&Src[6] = *((_OWORD *)v4 + 3);
  *(_OWORD *)&Src[8] = *((_OWORD *)v4 + 4);
  if ( HIDWORD(Src[0]) )
  {
    PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, HIDWORD(Src[0]));
    v36 = P;
    if ( P )
    {
      v39 = 4LL * v53;
      v40 = Src[1];
      if ( (char *)Src[1] + v39 < Src[1] || (char *)Src[1] + v39 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v36, v40, v39);
      Src[1] = P;
      v4 = Src;
      Src[10] = Src;
      goto LABEL_9;
    }
    P = 0LL;
    v53 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v35);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v45);
    return 3221225495LL;
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(MmUserProbeAddress, v15);
    *(_QWORD *)(v31 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v31);
    if ( P != v52 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v53 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v32);
    if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v45);
    return 3221225485LL;
  }
}
