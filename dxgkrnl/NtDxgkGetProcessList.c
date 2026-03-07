__int64 __fastcall NtDxgkGetProcessList(ULONG64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 LowPart; // rbx
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  DXGADAPTER *v12; // rbx
  __int64 v13; // rbx
  __int64 HighPart; // rdi
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r8
  signed int ProcessAdapterInfo; // eax
  unsigned int v20; // ebx
  HANDLE *v21; // rdi
  __int64 v22; // r14
  __int64 v23; // rcx
  __int64 v24; // r8
  bool v25; // sf
  _DWORD *v26; // rcx
  unsigned int v27; // eax
  size_t v28; // r8
  void *v29; // rcx
  int v30; // [rsp+50h] [rbp-298h] BYREF
  __int64 v31; // [rsp+58h] [rbp-290h]
  char v32; // [rsp+60h] [rbp-288h]
  struct _LUID v33[2]; // [rsp+68h] [rbp-280h] BYREF
  void *Src; // [rsp+78h] [rbp-270h]
  DXGADAPTER *v35[2]; // [rsp+80h] [rbp-268h] BYREF
  signed int v36; // [rsp+90h] [rbp-258h]
  char v37[8]; // [rsp+98h] [rbp-250h] BYREF
  DXGADAPTER *v38; // [rsp+A0h] [rbp-248h]
  char v39; // [rsp+A8h] [rbp-240h]
  void *v40; // [rsp+B0h] [rbp-238h]
  PVOID P; // [rsp+C0h] [rbp-228h] BYREF
  _BYTE v42[512]; // [rsp+C8h] [rbp-220h] BYREF
  int v43; // [rsp+2C8h] [rbp-20h]

  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v32 = 1;
    v30 = 2203;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2203);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 2203);
  v40 = 0LL;
  v35[0] = 0LL;
  P = 0LL;
  v43 = 0;
  v4 = a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  *(_OWORD *)&v33[0].LowPart = *(_OWORD *)v4;
  Src = *(void **)(v4 + 16);
  if ( Src )
  {
    if ( v33[1].HighPart )
    {
      v40 = Src;
      Src = (void *)PagedPoolZeroedArray<_D3DKMT_GETPROCESSLIST_PER_PROCESS,64>::AllocateElements(
                      (__int64 *)&P,
                      v33[1].HighPart);
      if ( !Src )
      {
        WdLogSingleEntry1(2LL, -1073741801LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Out of memory allocating D3DKMT_GETPROCESSLIST_PER_PROCESS, returning 0x%I64x",
          -1073741801LL,
          0LL,
          0LL,
          0LL,
          0LL);
        if ( P != v42 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v43 = 0;
        DXGADAPTER_REFERENCE::Assign(v35, 0LL);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
        if ( v32 )
        {
          LOBYTE(v5) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v30);
        }
        return 3221225495LL;
      }
    }
  }
  if ( v33[1].LowPart != 1024 )
  {
    LowPart = v33[1].LowPart;
    WdLogSingleEntry2(2LL, v33[1].LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid DesiredAccess:0x%I64x specified, returning 0x%I64x",
      LowPart,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v43 = 0;
    DXGADAPTER_REFERENCE::Assign(v35, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( !v32 )
      return 3221225485LL;
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_29:
    if ( v11 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v30);
    return 3221225485LL;
  }
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v35, v33);
  v12 = v35[0];
  if ( !v35[0] )
  {
    v13 = v33[0].LowPart;
    HighPart = v33[0].HighPart;
    WdLogSingleEntry3(2LL, v33[0].HighPart, v33[0].LowPart, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid Adapter (0x%I64x-0x%I64x) specified, returning 0x%I64x",
      HighPart,
      v13,
      -1073741811LL,
      0LL,
      0LL);
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v43 = 0;
    DXGADAPTER_REFERENCE::Assign(v35, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( !v32 )
      return 3221225485LL;
    LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_29;
  }
  if ( !*((_QWORD *)v35[0] + 366) )
  {
    v20 = -1073741637;
    WdLogSingleEntry3(3LL, v33[0].HighPart, v33[0].LowPart, -1073741637LL);
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v43 = 0;
    DXGADAPTER_REFERENCE::Assign(v35, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( !v32 )
      return v20;
    LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_71;
  }
  v38 = v35[0];
  v39 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
  if ( *((_DWORD *)v12 + 50) == 1 )
  {
    ProcessAdapterInfo = ADAPTER_RENDER::QueryProcessAdapterInfo(
                           *((ADAPTER_RENDER **)v35[0] + 366),
                           (void **)Src,
                           (unsigned int *)&v33[1].HighPart,
                           0x400u);
    v20 = ProcessAdapterInfo;
    v36 = ProcessAdapterInfo;
    if ( !ProcessAdapterInfo || ProcessAdapterInfo == -1073741789 )
    {
      v26 = (_DWORD *)(a1 + 12);
      if ( a1 + 12 >= MmUserProbeAddress )
        v26 = (_DWORD *)MmUserProbeAddress;
      v27 = v33[1].HighPart;
      *v26 = v33[1].HighPart;
      if ( (v20 & 0x80000000) == 0 && v27 )
      {
        v28 = 8LL * v27;
        v29 = v40;
        if ( (unsigned __int64)v40 + v28 > MmUserProbeAddress || (char *)v40 + v28 <= v40 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v29, Src, v28);
      }
    }
    else
    {
      WdLogSingleEntry1(3LL, ProcessAdapterInfo);
      if ( v33[1].HighPart )
      {
        v21 = (HANDLE *)Src;
        v22 = (unsigned int)v33[1].HighPart;
        do
        {
          if ( *v21 )
            ZwClose(*v21);
          ++v21;
          --v22;
        }
        while ( v22 );
      }
    }
    if ( v39 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
    if ( P != v42 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v43 = 0;
    DXGADAPTER_REFERENCE::Assign(v35, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
    if ( !v32 )
      return v20;
    v25 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_71:
    if ( v25 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v30);
    return v20;
  }
  v15 = v33[0].LowPart;
  v16 = v33[0].HighPart;
  WdLogSingleEntry3(2LL, v33[0].HighPart, v33[0].LowPart, -1073741811LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Adapter (0x%I64x-0x%I64x) is not active, returning 0x%I64x",
    v16,
    v15,
    -1073741811LL,
    0LL,
    0LL);
  if ( v39 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v37);
  if ( P != v42 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v43 = 0;
  DXGADAPTER_REFERENCE::Assign(v35, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v30);
  return 3221226166LL;
}
