/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0102800
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0105B50 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // rdi
  struct DXGPROCESS *v13; // rsi
  ULONG64 v14; // rcx
  __int64 v15; // rdi
  _BYTE *PoolWithTag; // rbx
  size_t v17; // r8
  const void *v18; // rdx
  __int64 Value; // rdi
  _BYTE *v20; // rbx
  size_t v21; // r8
  const void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
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
  int v47; // [rsp+60h] [rbp-108h] BYREF
  __int64 v48; // [rsp+68h] [rbp-100h]
  char v49; // [rsp+70h] [rbp-F8h]
  struct DXGPROCESS *v50; // [rsp+78h] [rbp-F0h]
  void *Src[2]; // [rsp+80h] [rbp-E8h]
  struct _D3DDDICB_SIGNALFLAGS v52[4]; // [rsp+90h] [rbp-D8h]
  void *v53[2]; // [rsp+A0h] [rbp-C8h] BYREF
  __int128 v54; // [rsp+B0h] [rbp-B8h]
  __int128 v55; // [rsp+C0h] [rbp-A8h]
  __int128 v56; // [rsp+D0h] [rbp-98h]
  PVOID v57; // [rsp+E0h] [rbp-88h]
  _BYTE v58[16]; // [rsp+E8h] [rbp-80h] BYREF
  unsigned int v59; // [rsp+F8h] [rbp-70h]
  PVOID P; // [rsp+100h] [rbp-68h]
  _BYTE v61[64]; // [rsp+108h] [rbp-60h] BYREF
  unsigned int v62; // [rsp+148h] [rbp-20h]

  v3 = (_OWORD *)a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2191);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2191LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent()) == 0LL
    || (v13 = (struct DXGPROCESS *)*((_QWORD *)Current + 1)) == 0LL )
  {
    v13 = v12;
  }
  v50 = v13;
  if ( !v13 )
  {
    v37 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v37 + 24) = PsGetCurrentProcess(v39, v38, v40, v41);
    *(_QWORD *)(v37 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v37);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v42);
    if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v47);
    return 3221225485LL;
  }
  v57 = 0LL;
  v59 = 0;
  P = 0LL;
  v62 = 0;
  v14 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v3;
  *(_OWORD *)&v52[0].0 = v3[1];
  *(_OWORD *)v53 = v3[2];
  v54 = v3[3];
  v55 = v3[4];
  v56 = v3[5];
  v15 = LODWORD(Src[0]);
  if ( LODWORD(Src[0]) )
  {
    if ( LODWORD(Src[0]) > 4 )
    {
      v10 = 0xFFFFFFFFFFFFFFFFuLL % LODWORD(Src[0]);
      if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Src[0]) < 4 )
      {
        PoolWithTag = v57;
        goto LABEL_28;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * LODWORD(Src[0]), 0x4B677844u);
      v57 = PoolWithTag;
    }
    else
    {
      PoolWithTag = v58;
      v57 = v58;
    }
    v59 = v15;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4 * v15);
      PoolWithTag = v57;
      if ( v57 )
      {
        v17 = 4LL * v59;
        v18 = Src[1];
        if ( (char *)Src[1] + v17 < Src[1] || (char *)Src[1] + v17 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithTag, v18, v17);
        Src[1] = PoolWithTag;
        goto LABEL_17;
      }
    }
LABEL_28:
    if ( P != v61 && P )
    {
      ExFreePoolWithTag(P, 0);
      PoolWithTag = v57;
    }
    P = 0LL;
    v62 = 0;
    if ( PoolWithTag != v58 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v57 = 0LL;
    v59 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v10);
    if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v47);
    return 3221225495LL;
  }
LABEL_17:
  Value = v52[1].Value;
  if ( v52[1].Value )
  {
    if ( v52[1].Value > 0x10 )
    {
      v10 = 0xFFFFFFFFFFFFFFFFuLL % v52[1].Value;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v52[1].Value < 4 )
      {
        v20 = P;
LABEL_52:
        if ( v20 != v61 && v20 )
          ExFreePoolWithTag(v20, 0);
        P = 0LL;
        v62 = 0;
        if ( v57 != v58 && v57 )
          ExFreePoolWithTag(v57, 0);
        v57 = 0LL;
        v59 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v10);
        if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v47);
        return 3221225495LL;
      }
      v20 = ExAllocatePoolWithTag(PagedPool, 4LL * v52[1].Value, 0x4B677844u);
      P = v20;
    }
    else
    {
      v20 = v61;
      P = v61;
    }
    v62 = Value;
    if ( v20 )
    {
      memset(v20, 0, 4 * Value);
      v20 = P;
      if ( P )
      {
        v21 = 4LL * v62;
        v22 = *(const void **)&v52[2].0;
        if ( *(_QWORD *)&v52[2].0 + v21 < *(_QWORD *)&v52[2].0 || *(_QWORD *)&v52[2].0 + v21 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v20, v22, v21);
        *(_QWORD *)&v52[2].0 = v20;
        v33 = SignalSynchronizationObjectInternal(
                (unsigned int)Src[0],
                (const unsigned int *)Src[1],
                v52[0],
                v52[1].Value,
                (const unsigned int *)v20,
                (const unsigned __int64 *)v53[0],
                (unsigned __int64)v53[0],
                v53,
                v13,
                1,
                0);
        if ( v33 < 0 )
        {
          if ( P != v61 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v62 = 0;
          if ( v57 != v58 && v57 )
            ExFreePoolWithTag(v57, 0);
          v57 = 0LL;
          v59 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v32);
          if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v45, &EventProfilerExit, v46, v47);
          return (unsigned int)v33;
        }
        else
        {
          if ( P != v61 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v62 = 0;
          if ( v57 != v58 && v57 )
            ExFreePoolWithTag(v57, 0);
          v57 = 0LL;
          v59 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v32);
          if ( v49 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v47);
          }
          return 0LL;
        }
      }
    }
    goto LABEL_52;
  }
  v26 = WdLogNewEntry5_WdError(v14, v10);
  *(_QWORD *)(v26 + 24) = 913LL;
  WdLogEvent5_WdError(v26);
  if ( P != v61 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v62 = 0;
  if ( v57 != v58 && v57 )
    ExFreePoolWithTag(v57, 0);
  v57 = 0LL;
  v59 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47, v27);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v47);
  return 3221225485LL;
}
