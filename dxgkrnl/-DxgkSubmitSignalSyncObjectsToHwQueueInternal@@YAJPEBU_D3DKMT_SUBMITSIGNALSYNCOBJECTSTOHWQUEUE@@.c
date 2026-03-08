/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0313FE0
 * Callers:
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C02231D0 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1C02DAF20 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C0165D3C (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0311BD4 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C03166DC (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        bool a2,
        __int64 a3)
{
  void **v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  void *Elements; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  void *v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // r8
  size_t v26; // r8
  const void *v27; // rdx
  unsigned int v28; // edi
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+58h] [rbp-E0h]
  char v33; // [rsp+60h] [rbp-D8h]
  void *v34[2]; // [rsp+68h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+78h] [rbp-C0h]
  void *v36; // [rsp+88h] [rbp-B0h]
  struct DXGPROCESS *v37; // [rsp+90h] [rbp-A8h]
  void **v38; // [rsp+98h] [rbp-A0h]
  PVOID v39; // [rsp+A0h] [rbp-98h] BYREF
  _BYTE v40[16]; // [rsp+A8h] [rbp-90h] BYREF
  unsigned int v41; // [rsp+B8h] [rbp-80h]
  PVOID P; // [rsp+C0h] [rbp-78h] BYREF
  _BYTE v43[64]; // [rsp+C8h] [rbp-70h] BYREF
  unsigned int v44; // [rsp+108h] [rbp-30h]

  v4 = (void **)a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2161);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2161);
  Current = DXGPROCESS::GetCurrent(v5);
  v37 = Current;
  if ( !Current )
  {
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v10,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v31);
    }
    return 3221225485LL;
  }
  v39 = 0LL;
  v41 = 0;
  P = 0LL;
  v44 = 0;
  *(_OWORD *)v34 = 0LL;
  *(_OWORD *)Src = 0LL;
  v36 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (void **)MmUserProbeAddress;
    *(_OWORD *)v34 = *(_OWORD *)v4;
    *(_OWORD *)Src = *((_OWORD *)v4 + 1);
    v36 = v4[4];
    if ( !LODWORD(Src[0]) )
    {
      WdLogSingleEntry1(2LL, 2134LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"There should be at least one sync object passed to signal.",
        2134LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( P != v43 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v44 = 0;
      if ( v39 != v40 && v39 )
        ExFreePoolWithTag(v39, 0);
      v39 = 0LL;
      v41 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v31);
      return 3221225485LL;
    }
    Elements = (void *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements((__int64 *)&v39, (unsigned int)Src[0]);
    if ( !Elements )
    {
      if ( P != v43 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v44 = 0;
      if ( v39 != v40 && v39 )
        ExFreePoolWithTag(v39, 0);
      v39 = 0LL;
      v41 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v31);
      return 3221225495LL;
    }
    v19 = 4LL * v41;
    v20 = Src[1];
    if ( (char *)Src[1] + v19 < Src[1] || (char *)Src[1] + v19 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Elements, v20, v19);
    Src[1] = Elements;
    if ( !HIDWORD(v34[0]) )
    {
      WdLogSingleEntry1(2LL, 2151LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"There should be at least one broadcast hardware queue passed to signal.",
        2151LL,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( P != v43 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v44 = 0;
      if ( v39 != v40 && v39 )
        ExFreePoolWithTag(v39, 0);
      v39 = 0LL;
      v41 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v21, &EventProfilerExit, v22, v31);
      return 3221225485LL;
    }
    v23 = (void *)PagedPoolZeroedArray<unsigned int,16>::AllocateElements((__int64 *)&P, HIDWORD(v34[0]));
    if ( !v23 )
    {
      if ( P != v43 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v44 = 0;
      if ( v39 != v40 && v39 )
        ExFreePoolWithTag(v39, 0);
      v39 = 0LL;
      v41 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v31);
      return 3221225495LL;
    }
    v26 = 4LL * v44;
    v27 = v34[1];
    if ( (char *)v34[1] + v26 < v34[1] || (char *)v34[1] + v26 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v23, v27, v26);
    v34[1] = v23;
    v4 = v34;
    v38 = v34;
  }
  v28 = SubmitSignalSyncObjectsToHwQueue(
          *((_DWORD *)v4 + 4),
          (const unsigned int *)v4[3],
          *(struct _D3DDDICB_SIGNALFLAGS *)v4,
          *((_DWORD *)v4 + 1),
          (const unsigned int *)v4[1],
          (const unsigned __int64 *)v4[4],
          Current,
          a2,
          0);
  if ( P != v43 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v44 = 0;
  if ( v39 != v40 && v39 )
    ExFreePoolWithTag(v39, 0);
  v39 = 0LL;
  v41 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v31);
  return v28;
}
