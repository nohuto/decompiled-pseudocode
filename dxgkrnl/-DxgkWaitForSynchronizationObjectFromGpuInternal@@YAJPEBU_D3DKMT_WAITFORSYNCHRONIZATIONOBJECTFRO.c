__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        __int64 a3,
        unsigned __int64 *a4,
        bool a5)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v7; // rbx
  unsigned int *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r15
  void *v12; // r14
  __int64 v13; // rbx
  const void *v14; // rdx
  char *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 *v21; // r8
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 CurrentProcess; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r8
  bool v32; // [rsp+60h] [rbp-E8h]
  int v33; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-D8h]
  char v35; // [rsp+78h] [rbp-D0h]
  struct DXGPROCESS *v36; // [rsp+80h] [rbp-C8h]
  void *Src[2]; // [rsp+90h] [rbp-B8h]
  unsigned __int64 v38[2]; // [rsp+A0h] [rbp-A8h]
  __int128 v39; // [rsp+B0h] [rbp-98h]
  __int128 v40; // [rsp+C0h] [rbp-88h]
  __int128 v41; // [rsp+D0h] [rbp-78h]
  PVOID P; // [rsp+E0h] [rbp-68h]
  _BYTE v43[16]; // [rsp+E8h] [rbp-60h] BYREF
  int v44; // [rsp+F8h] [rbp-50h]

  v32 = a3;
  v7 = a1;
  v33 = -1;
  v8 = 0LL;
  v34 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v35 = 1;
    v33 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2043);
  Current = DXGPROCESS::GetCurrent(v9);
  v36 = Current;
  if ( Current )
  {
    P = 0LL;
    v44 = 0;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v7->hContext;
      *(_OWORD *)v38 = *(_OWORD *)&v7->MonitoredFenceValueArray;
      v8 = (unsigned int *)Src[1];
      v12 = Src[0];
LABEL_29:
      v21 = (unsigned __int64 *)v38[0];
      if ( a4 )
        v21 = a4;
      v22 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(v12),
              v8,
              v21,
              v38[0],
              (unsigned int)v12,
              Current,
              a2,
              0,
              v32,
              a5,
              0);
      if ( v22 < 0 )
      {
        if ( P != v43 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v44 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v33);
        return (unsigned int)v22;
      }
      else
      {
        if ( P != v43 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v44 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v33);
        }
        return 0LL;
      }
    }
    if ( (unsigned __int64)v7 >= MmUserProbeAddress )
      v7 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)&v7->hContext;
    *(_OWORD *)v38 = *(_OWORD *)&v7->MonitoredFenceValueArray;
    v39 = *(_OWORD *)&v7->Reserved[2];
    v40 = *(_OWORD *)&v7->Reserved[4];
    v41 = *(_OWORD *)&v7->Reserved[6];
    v12 = Src[0];
    if ( HIDWORD(Src[0]) )
    {
      v13 = HIDWORD(Src[0]);
      if ( HIDWORD(Src[0]) > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
        {
LABEL_23:
          P = v8;
          v44 = (int)v8;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
          if ( v35 != (_BYTE)v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v33);
          return 3221225495LL;
        }
        P = (PVOID)ExAllocatePool2(256LL, 4LL * HIDWORD(Src[0]), 1265072196LL);
      }
      else
      {
        P = v43;
        memset(v43, 0, 4LL * HIDWORD(Src[0]));
      }
      v44 = v13;
      v8 = (unsigned int *)P;
      if ( P )
      {
        v14 = Src[1];
        v15 = (char *)Src[1] + 4 * v13;
        if ( v15 < Src[1] || (unsigned __int64)v15 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v8, v14, 4 * v13);
        Src[1] = v8;
        goto LABEL_29;
      }
      goto LABEL_23;
    }
    WdLogSingleEntry2(2LL, LODWORD(Src[0]), -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
      (unsigned int)v12,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v43 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v44 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v33);
    return 3221225485LL;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    WdLogSingleEntry2(2LL, CurrentProcess, -1073741811LL);
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v33);
    return 3221225485LL;
  }
}
