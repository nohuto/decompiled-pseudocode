/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C01D2B50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025AB8 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C00559C0 (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01ADA68 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  ULONG64 v6; // rax
  int v7; // ebx
  int v8; // ebx
  int v9; // eax
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
  __int64 v22; // rbx
  _BYTE v23[16]; // [rsp+50h] [rbp-78h] BYREF
  struct _LUID v24[2]; // [rsp+60h] [rbp-68h]
  int v25; // [rsp+70h] [rbp-58h]
  int v26; // [rsp+78h] [rbp-50h] BYREF
  __int64 v27; // [rsp+80h] [rbp-48h]
  char v28; // [rsp+88h] [rbp-40h]
  _BYTE v29[8]; // [rsp+90h] [rbp-38h] BYREF
  struct DXGADAPTER *v30; // [rsp+98h] [rbp-30h]
  char v31; // [rsp+A0h] [rbp-28h]
  int GpuPreferenceDListState; // [rsp+D8h] [rbp+10h]
  unsigned __int64 v33; // [rsp+E0h] [rbp+18h] BYREF

  v3 = (_DWORD *)a1;
  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2090;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2090);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2090);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    v6 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    *(_OWORD *)&v24[0].LowPart = *(_OWORD *)v6;
    v25 = *(_DWORD *)(v6 + 16);
    v7 = v25;
    GpuPreferenceDListState = 0;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v23, Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
          WdLogSingleEntry1(1LL, 3908LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"Invalid D3DKMT_HYBRID_LIST QueryType!",
            3908LL,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_11;
        }
        v9 = *((_DWORD *)Current + 134);
      }
      else
      {
        v9 = *((_DWORD *)Current + 135);
      }
      GpuPreferenceDListState = v9;
LABEL_11:
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = GpuPreferenceDListState;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
      if ( v28 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v26);
      }
      return 0LL;
    }
    Global = DXGGLOBAL::GetGlobal();
    v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v24[0].HighPart, &v33);
    v15 = v14;
    if ( v14 )
    {
      v30 = v14;
      v31 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
      DXGADAPTER::ReleaseReference(v15);
      if ( *((_QWORD *)v15 + 366) )
      {
        if ( *((_DWORD *)v15 + 50) == 1 )
        {
          v22 = *((_QWORD *)v15 + 366);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v22 + 72, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)(v22 + 88));
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, *((_DWORD *)v15 + 60));
          _InterlockedDecrement((volatile signed __int32 *)(v22 + 88));
          ExReleasePushLockSharedEx(v22 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v31 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
        goto LABEL_11;
      }
      HighPart = (unsigned int)v24[0].HighPart;
      LowPart = (int)v24[1].LowPart;
      WdLogSingleEntry2(2LL, (int)v24[1].LowPart, (unsigned int)v24[0].HighPart);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"D3DKMTGetCachedHybridQueryValue called with a display-only adapter with LUID (0x%I64x%08I64x).",
        LowPart,
        HighPart,
        0LL,
        0LL,
        0LL);
      if ( v31 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
    }
    else
    {
      v16 = (unsigned int)v24[0].HighPart;
      v17 = (int)v24[1].LowPart;
      WdLogSingleEntry2(2LL, (int)v24[1].LowPart, (unsigned int)v24[0].HighPart);
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
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v23);
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
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v26);
  return 3221225485LL;
}
