__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rbx
  ULONG64 v6; // rax
  int v7; // edi
  int v8; // edi
  DWORD v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  struct DXGADAPTER *v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 HighPart; // rdi
  __int64 LowPart; // rbx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rdi
  DWORD GpuPreferenceDListState; // eax
  __int64 v25; // rcx
  _BYTE v26[16]; // [rsp+50h] [rbp-78h] BYREF
  struct _LUID v27[2]; // [rsp+60h] [rbp-68h]
  int v28; // [rsp+78h] [rbp-50h] BYREF
  __int64 v29; // [rsp+80h] [rbp-48h]
  char v30; // [rsp+88h] [rbp-40h]
  _BYTE v31[8]; // [rsp+90h] [rbp-38h] BYREF
  struct DXGADAPTER *v32; // [rsp+98h] [rbp-30h]
  char v33; // [rsp+A0h] [rbp-28h]
  unsigned __int64 v34; // [rsp+D8h] [rbp+10h] BYREF

  v3 = (_DWORD *)a1;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 2091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2091);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 2091);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    v6 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    *(_OWORD *)&v27[0].LowPart = *(_OWORD *)v6;
    v7 = *(_DWORD *)(v6 + 16);
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v26, Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          WdLogSingleEntry1(1LL, 4058LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Invalid D3DKMT_HYBRID_LIST QueryType!",
            4058LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_11;
        }
        v9 = *((_DWORD *)Current + 134);
        if ( !v9 )
        {
          *((_DWORD *)Current + 134) = v27[0].LowPart;
LABEL_11:
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (_DWORD *)MmUserProbeAddress;
          *v3 = v27[0].LowPart;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
          if ( v30 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v28);
          }
          return 0LL;
        }
      }
      else
      {
        v9 = *((_DWORD *)Current + 135);
        if ( !v9 )
        {
          *((_DWORD *)Current + 135) = v27[0].LowPart;
          goto LABEL_11;
        }
      }
      v27[0].LowPart = v9;
      goto LABEL_11;
    }
    Global = DXGGLOBAL::GetGlobal();
    v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v27[0].HighPart, &v34);
    v15 = v14;
    if ( v14 )
    {
      v32 = v14;
      v33 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
      DXGADAPTER::ReleaseReference(v15);
      if ( *((_QWORD *)v15 + 366) )
      {
        if ( *((_DWORD *)v15 + 50) == 1 )
        {
          v22 = *((_QWORD *)v15 + 366);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v22 + 72, 0LL);
          *(_QWORD *)(v22 + 80) = KeGetCurrentThread();
          v23 = *((unsigned int *)v15 + 60);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, v23);
          if ( GpuPreferenceDListState )
          {
            v27[0].LowPart = GpuPreferenceDListState;
          }
          else
          {
            v25 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v23);
            if ( v25 )
              *(_DWORD *)(v25 + 104) = v27[0].LowPart;
            else
              WdLogSingleEntry1(3LL, (unsigned int)v23);
          }
          *(_QWORD *)(v22 + 80) = 0LL;
          ExReleasePushLockExclusiveEx(v22 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v33 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
        goto LABEL_11;
      }
      HighPart = (unsigned int)v27[0].HighPart;
      LowPart = (int)v27[1].LowPart;
      WdLogSingleEntry2(2LL, (int)v27[1].LowPart, (unsigned int)v27[0].HighPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"D3DKMTCacheHybridQueryValue called with a display-only adapter with LUID (0x%I64x%08I64x).",
        LowPart,
        HighPart,
        0LL,
        0LL,
        0LL);
      if ( v33 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v31);
    }
    else
    {
      v16 = (unsigned int)v27[0].HighPart;
      v17 = (int)v27[1].LowPart;
      WdLogSingleEntry2(2LL, (int)v27[1].LowPart, (unsigned int)v27[0].HighPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference adapter by LUID (0x%I64x%08I64x).",
        v17,
        v16,
        0LL,
        0LL,
        0LL);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v26);
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v28);
  return 3221225485LL;
}
