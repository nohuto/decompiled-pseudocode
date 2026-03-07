__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 a1, bool a2, __int64 a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  void *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r8
  size_t v19; // r8
  char *v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // [rsp+50h] [rbp-98h] BYREF
  __int64 v25; // [rsp+58h] [rbp-90h]
  char v26; // [rsp+60h] [rbp-88h]
  unsigned int *v27; // [rsp+68h] [rbp-80h]
  struct DXGPROCESS *v28; // [rsp+70h] [rbp-78h]
  __int128 v29; // [rsp+78h] [rbp-70h] BYREF
  __int64 v30; // [rsp+88h] [rbp-60h]
  size_t v31; // [rsp+90h] [rbp-58h]
  char *v32; // [rsp+98h] [rbp-50h]
  PVOID P; // [rsp+A0h] [rbp-48h] BYREF
  _BYTE v34[16]; // [rsp+A8h] [rbp-40h] BYREF
  unsigned int v35; // [rsp+B8h] [rbp-30h]

  v4 = (unsigned int *)a1;
  v24 = -1;
  v25 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v26 = 1;
    v24 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2162);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 2162);
  Current = DXGPROCESS::GetCurrent(v5);
  v28 = Current;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 )
    {
      LOBYTE(v11) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v24);
    }
    return 3221225485LL;
  }
  P = 0LL;
  v35 = 0;
  v29 = 0LL;
  v30 = 0LL;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v29 = *(_OWORD *)v4;
    v30 = *((_QWORD *)v4 + 2);
    v4 = (unsigned int *)&v29;
  }
  v27 = v4;
  if ( !v4[1] )
  {
    WdLogSingleEntry2(2LL, *v4, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"hContext 0x%I64x can't wait on zero object, returning 0x%I64x",
      *v4,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v34 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v35 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
    if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v24);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v16 = (void *)PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P);
    if ( !v16 )
    {
      if ( P != v34 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v35 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
      if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v24);
      return 3221225495LL;
    }
    v19 = 4LL * v35;
    v31 = v19;
    v20 = (char *)*((_QWORD *)v4 + 1);
    v32 = v20;
    if ( &v20[v19] < v20 || (unsigned __int64)&v20[v19] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, v20, v19);
    *((_QWORD *)v4 + 1) = v16;
  }
  v21 = SubmitWaitForSyncObjectsFromGpu(
          v4[1],
          *((const unsigned int **)v4 + 1),
          *((const unsigned __int64 **)v4 + 2),
          *v4,
          Current,
          a2,
          0);
  if ( P != v34 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v35 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v24);
  return v21;
}
