/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpu2Impl@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2@@PEAX@Z @ 0x1C01924A0
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0192480 (DxgkSignalSynchronizationObjectFromGpu2.c)
 *     DxgkWslSignalSynchronizationObjectFromGpu2 @ 0x1C034FEC0 (DxgkWslSignalSynchronizationObjectFromGpu2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@USIGNAL_SYNC_OBJ_FLAGS@@@Z @ 0x1C01944A0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2Impl(
        const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *a1,
        void *a2,
        __int64 a3)
{
  const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v8; // rdi
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // r15
  __int64 v11; // rbx
  _BYTE *Pool2; // rdi
  const void *v13; // rdx
  char *v14; // rax
  __int64 v15; // rbx
  _BYTE *v16; // rdi
  const void *v17; // rdx
  char *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  int v26; // ebx
  __int64 v27; // rcx
  __int64 v28; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  int v38; // [rsp+50h] [rbp-128h] BYREF
  __int64 v39; // [rsp+58h] [rbp-120h]
  char v40; // [rsp+60h] [rbp-118h]
  struct DXGPROCESS *v41; // [rsp+68h] [rbp-110h]
  void *Src[2]; // [rsp+70h] [rbp-108h]
  void *v43[2]; // [rsp+80h] [rbp-F8h]
  __int128 v44; // [rsp+90h] [rbp-E8h] BYREF
  __int128 v45; // [rsp+A0h] [rbp-D8h]
  __int128 v46; // [rsp+B0h] [rbp-C8h]
  __int128 v47; // [rsp+C0h] [rbp-B8h]
  PVOID v48; // [rsp+D0h] [rbp-A8h]
  _BYTE v49[16]; // [rsp+D8h] [rbp-A0h] BYREF
  int v50; // [rsp+E8h] [rbp-90h]
  PVOID P; // [rsp+F0h] [rbp-88h]
  _BYTE v52[64]; // [rsp+F8h] [rbp-80h] BYREF
  int v53; // [rsp+138h] [rbp-40h]

  v4 = a1;
  v38 = -1;
  v39 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v40 = 1;
    v38 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2191);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2191);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v9 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
      goto LABEL_5;
  }
  Current = DXGTHREAD::GetCurrent();
  if ( !Current )
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v10 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( v10 )
      goto LABEL_6;
    WdLogSingleEntry1(2LL, 2923LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
    v10 = v8;
    goto LABEL_6;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v10 )
    goto LABEL_5;
LABEL_6:
  v41 = v10;
  if ( !v10 )
  {
    v32 = PsGetCurrentProcess(v9);
    WdLogSingleEntry2(2LL, v32, -1073741811LL);
    v34 = PsGetCurrentProcess(v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v34,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v35, v38);
    return 3221225485LL;
  }
  v48 = 0LL;
  v50 = 0;
  P = 0LL;
  v53 = 0;
  *(_OWORD *)Src = 0LL;
  *(_OWORD *)v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (const struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2 *)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)&v4->ObjectCount;
  *(_OWORD *)v43 = *(_OWORD *)&v4->Flags.0;
  v44 = *(_OWORD *)&v4->FenceValue;
  v45 = *(_OWORD *)&v4->Reserved[2];
  v46 = *(_OWORD *)&v4->Reserved[4];
  v47 = *(_OWORD *)&v4->Reserved[6];
  v11 = LODWORD(Src[0]);
  if ( LODWORD(Src[0]) )
  {
    if ( LODWORD(Src[0]) > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / LODWORD(Src[0]) < 4 )
      {
        Pool2 = v48;
        goto LABEL_27;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 4LL * LODWORD(Src[0]), 1265072196LL);
      v48 = Pool2;
    }
    else
    {
      v48 = v49;
      memset(v49, 0, 4LL * LODWORD(Src[0]));
      Pool2 = v48;
    }
    v50 = v11;
    if ( Pool2 )
    {
      v13 = Src[1];
      v14 = (char *)Src[1] + 4 * v11;
      if ( v14 < Src[1] || (unsigned __int64)v14 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(Pool2, v13, 4 * v11);
      Src[1] = Pool2;
      goto LABEL_16;
    }
LABEL_27:
    if ( P != v52 && P )
    {
      ExFreePoolWithTag(P, 0);
      Pool2 = v48;
    }
    P = 0LL;
    v53 = 0;
    if ( Pool2 != v49 && Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    v48 = 0LL;
    v50 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v38);
    return 3221225495LL;
  }
LABEL_16:
  v15 = HIDWORD(v43[0]);
  if ( HIDWORD(v43[0]) )
  {
    if ( HIDWORD(v43[0]) > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(v43[0]) < 4 )
      {
        v16 = P;
LABEL_51:
        if ( v16 != v52 && v16 )
          ExFreePoolWithTag(v16, 0);
        P = 0LL;
        v53 = 0;
        if ( v48 != v49 && v48 )
          ExFreePoolWithTag(v48, 0);
        v48 = 0LL;
        v50 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v38);
        return 3221225495LL;
      }
      v16 = (_BYTE *)ExAllocatePool2(256LL, 4LL * HIDWORD(v43[0]), 1265072196LL);
      P = v16;
    }
    else
    {
      P = v52;
      memset(v52, 0, 4LL * HIDWORD(v43[0]));
      v16 = P;
    }
    v53 = v15;
    if ( v16 )
    {
      v17 = v43[1];
      v18 = (char *)v43[1] + 4 * v15;
      if ( v18 < v43[1] || (unsigned __int64)v18 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, v17, 4 * v15);
      v43[1] = v16;
      if ( a2 )
        *(_QWORD *)&v44 = a2;
      else
        a2 = (void *)v44;
      v26 = SignalSynchronizationObjectInternal(
              LODWORD(Src[0]),
              Src[1],
              LODWORD(v43[0]),
              HIDWORD(v43[0]),
              v16,
              a2,
              a2,
              &v44,
              v10,
              1);
      if ( v26 < 0 )
      {
        if ( P != v52 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v53 = 0;
        if ( v48 != v49 && v48 )
          ExFreePoolWithTag(v48, 0);
        v48 = 0LL;
        v50 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v38);
        return (unsigned int)v26;
      }
      else
      {
        if ( P != v52 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v53 = 0;
        if ( v48 != v49 && v48 )
          ExFreePoolWithTag(v48, 0);
        v48 = 0LL;
        v50 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
        if ( v40 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v38);
        }
        return 0LL;
      }
    }
    goto LABEL_51;
  }
  WdLogSingleEntry1(2LL, 960LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"There should be at least one broadcast context passed to signal.",
    960LL,
    0LL,
    0LL,
    0LL,
    0LL);
  if ( P != v52 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v53 = 0;
  if ( v48 != v49 && v48 )
    ExFreePoolWithTag(v48, 0);
  v48 = 0LL;
  v50 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v38);
  return 3221225485LL;
}
