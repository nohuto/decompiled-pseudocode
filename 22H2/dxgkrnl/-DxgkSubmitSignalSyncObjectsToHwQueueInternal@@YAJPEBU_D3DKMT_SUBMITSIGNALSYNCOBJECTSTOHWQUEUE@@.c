/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C026D814
 * Callers:
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1C022E850 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C0274DD0 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C015D5F8 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C016A3E8 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C026F85C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        bool a2,
        __int64 a3)
{
  void **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  PVOID v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // r8
  size_t v29; // r8
  const void *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  PVOID v37; // rbx
  __int64 v38; // rcx
  __int64 v39; // r8
  size_t v40; // r8
  const void *v41; // rdx
  __int64 v42; // rdx
  unsigned int v43; // ebx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v47; // [rsp+58h] [rbp-E0h]
  char v48; // [rsp+60h] [rbp-D8h]
  void *v49[2]; // [rsp+68h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-C0h]
  void *v51; // [rsp+88h] [rbp-B0h]
  struct DXGPROCESS *v52; // [rsp+90h] [rbp-A8h]
  void **v53; // [rsp+98h] [rbp-A0h]
  PVOID v54; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v55[16]; // [rsp+A8h] [rbp-90h] BYREF
  unsigned int v56; // [rsp+B8h] [rbp-80h]
  PVOID P; // [rsp+C0h] [rbp-78h] BYREF
  _BYTE v58[64]; // [rsp+C8h] [rbp-70h] BYREF
  unsigned int v59; // [rsp+108h] [rbp-30h]

  v4 = (void **)a1;
  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2161);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2161LL);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v52 = Current;
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = PsGetCurrentProcess(v14, v13, v15, v16);
    *(_QWORD *)(v12 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v17);
    if ( v48 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v46);
    }
    return 3221225485LL;
  }
  v54 = 0LL;
  v56 = 0;
  P = 0LL;
  v59 = 0;
  *(_OWORD *)v49 = 0LL;
  *(_OWORD *)Src = 0LL;
  v51 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (void **)MmUserProbeAddress;
    *(_OWORD *)v49 = *(_OWORD *)v4;
    *(_OWORD *)Src = *((_OWORD *)v4 + 1);
    v51 = v4[4];
    if ( !LODWORD(Src[0]) )
    {
      v21 = WdLogNewEntry5_WdError(MmUserProbeAddress, 0LL);
      *(_QWORD *)(v21 + 24) = 1912LL;
      WdLogEvent5_WdError(v21);
      if ( P != v58 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v59 = 0;
      if ( v54 != v55 && v54 )
        ExFreePoolWithTag(v54, 0);
      v54 = 0LL;
      v56 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v22);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v46);
      return 3221225485LL;
    }
    v26 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v54, (unsigned int)Src[0]);
    if ( !v26 )
    {
      if ( P != v58 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v59 = 0;
      if ( v54 != v55 && v54 )
        ExFreePoolWithTag(v54, 0);
      v54 = 0LL;
      v56 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v25);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v46);
      return 3221225495LL;
    }
    v29 = 4LL * v56;
    v30 = Src[1];
    if ( (char *)Src[1] + v29 < Src[1] || (char *)Src[1] + v29 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v26, v30, v29);
    Src[1] = v26;
    if ( !HIDWORD(v49[0]) )
    {
      v32 = WdLogNewEntry5_WdError(v31, 0LL);
      *(_QWORD *)(v32 + 24) = 1929LL;
      WdLogEvent5_WdError(v32);
      if ( P != v58 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v59 = 0;
      if ( v54 != v55 && v54 )
        ExFreePoolWithTag(v54, 0);
      v54 = 0LL;
      v56 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v33);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v46);
      return 3221225485LL;
    }
    v37 = PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, HIDWORD(v49[0]));
    if ( !v37 )
    {
      if ( P != v58 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v59 = 0;
      if ( v54 != v55 && v54 )
        ExFreePoolWithTag(v54, 0);
      v54 = 0LL;
      v56 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v36);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v46);
      return 3221225495LL;
    }
    v40 = 4LL * v59;
    v41 = v49[1];
    if ( (char *)v49[1] + v40 < v49[1] || (char *)v49[1] + v40 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v37, v41, v40);
    v49[1] = v37;
    v4 = v49;
    v53 = v49;
  }
  v43 = SubmitSignalSyncObjectsToHwQueue(
          *((_DWORD *)v4 + 4),
          (const unsigned int *)v4[3],
          *(struct _D3DDDICB_SIGNALFLAGS *)v4,
          *((_DWORD *)v4 + 1),
          (const unsigned int *)v4[1],
          (const unsigned __int64 *)v4[4],
          Current,
          a2,
          0);
  if ( P != v58 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v59 = 0;
  if ( v54 != v55 && v54 )
    ExFreePoolWithTag(v54, 0);
  v54 = 0LL;
  v56 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v42);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v44, &EventProfilerExit, v45, v46);
  return v43;
}
