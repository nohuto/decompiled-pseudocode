__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2,
        __int64 a3)
{
  void **v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  struct DXGPROCESS *v10; // rdi
  unsigned int v11; // ebx
  PVOID Pool2; // rcx
  size_t v13; // r8
  const void *v14; // rdx
  __int64 v15; // r8
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rdi
  KSPIN_LOCK *Global; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-D0h]
  char v34; // [rsp+60h] [rbp-C8h]
  int v35; // [rsp+68h] [rbp-C0h] BYREF
  struct DXGPROCESS *v36; // [rsp+70h] [rbp-B8h]
  void *Src[2]; // [rsp+80h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+90h] [rbp-98h]
  __int128 v39; // [rsp+A0h] [rbp-88h]
  __int128 v40; // [rsp+B0h] [rbp-78h]
  __int128 v41; // [rsp+C0h] [rbp-68h]
  size_t v42; // [rsp+D0h] [rbp-58h]
  PVOID v43; // [rsp+D8h] [rbp-50h]
  void **v44; // [rsp+E0h] [rbp-48h]
  PVOID P; // [rsp+E8h] [rbp-40h]
  _BYTE v46[16]; // [rsp+F0h] [rbp-38h] BYREF
  unsigned int v47; // [rsp+100h] [rbp-28h]

  v4 = (void **)a1;
  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2190);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2190);
  CurrentProcess = PsGetCurrentProcess(v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
    goto LABEL_5;
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
    v10 = v9;
    goto LABEL_6;
  }
  v10 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
  if ( !v10 )
    goto LABEL_5;
LABEL_6:
  v36 = v10;
  if ( !v10 )
  {
    v25 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v25, -1073741811LL);
    v27 = PsGetCurrentProcess(v26);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"unexpected process 0x%I64x returning 0x%I64x",
      v27,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
    goto LABEL_58;
  }
  P = 0LL;
  v47 = 0;
  *(_OWORD *)Src = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  if ( !a2 )
  {
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_35:
      v35 = *(_DWORD *)v4;
      v19 = SignalSynchronizationObjectInternal(
              *((unsigned int *)v4 + 1),
              v4[1],
              0LL,
              1LL,
              &v35,
              v4[2],
              0LL,
              0LL,
              v10,
              (unsigned int)(a2 != 0) + 4);
      if ( v19 < 0 )
      {
        if ( P != v46 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v47 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v32);
        return (unsigned int)v19;
      }
      else
      {
        if ( P != v46 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v47 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
        if ( v34 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v32);
        }
        return 0LL;
      }
    }
    WdLogSingleEntry2(2LL, *(unsigned int *)v4, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      *(unsigned int *)v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v46 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v47 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( !v34 || (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
      return 3221225485LL;
LABEL_58:
    McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v32);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v4;
  v38 = *((_OWORD *)v4 + 1);
  v39 = *((_OWORD *)v4 + 2);
  v40 = *((_OWORD *)v4 + 3);
  v41 = *((_OWORD *)v4 + 4);
  if ( !HIDWORD(Src[0]) )
  {
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't signal zero object, returning 0x%I64x",
      LODWORD(Src[0]),
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v46 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v47 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
    if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v15, v32);
    return 3221225485LL;
  }
  v11 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
    {
      v11 = v47;
      Pool2 = P;
      goto LABEL_15;
    }
    Pool2 = (PVOID)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL);
    P = Pool2;
  }
  else
  {
    P = v46;
    memset(v46, 0, 4LL * HIDWORD(Src[0]));
    Pool2 = P;
  }
  v47 = v11;
LABEL_15:
  if ( Pool2 )
  {
    v13 = 4LL * v11;
    v42 = v13;
    v43 = Pool2;
    v14 = Src[1];
    if ( (char *)Src[1] + v13 < Src[1] || (char *)Src[1] + v13 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(Pool2, v14, v13);
    Src[1] = P;
    v4 = Src;
    v44 = Src;
    goto LABEL_35;
  }
  P = 0LL;
  v47 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v32);
  return 3221225495LL;
}
