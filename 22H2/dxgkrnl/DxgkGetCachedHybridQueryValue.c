/*
 * XREFs of DxgkGetCachedHybridQueryValue @ 0x1C015E790
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00266C4 (--0DXGPROCESSMUTEX@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?GetGpuPreferenceDListState@DXGPROCESS@@QEAA?AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z @ 0x1C0048B2C (-GetGpuPreferenceDListState@DXGPROCESS@@QEAA-AW4_D3DKMT_GPU_PREFERENCE_QUERY_STATE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C0121C38 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

__int64 __fastcall DxgkGetCachedHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r15
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r14
  ULONG64 v11; // rax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // ebx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DXGADAPTER *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rbx
  __int64 v36; // r8
  _BYTE v37[16]; // [rsp+20h] [rbp-78h] BYREF
  struct _LUID v38[2]; // [rsp+30h] [rbp-68h]
  int v39; // [rsp+48h] [rbp-50h] BYREF
  __int64 v40; // [rsp+50h] [rbp-48h]
  char v41; // [rsp+58h] [rbp-40h]
  _BYTE v42[8]; // [rsp+60h] [rbp-38h] BYREF
  struct DXGADAPTER *v43; // [rsp+68h] [rbp-30h]
  char v44; // [rsp+70h] [rbp-28h]
  int GpuPreferenceDListState; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v46; // [rsp+B0h] [rbp+18h] BYREF

  v3 = (_DWORD *)a1;
  v39 = -1;
  v40 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v41 = 1;
    v39 = 2090;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2090);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v39, 2090LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v11 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    *(_OWORD *)&v38[0].LowPart = *(_OWORD *)v11;
    v12 = *(_DWORD *)(v11 + 16);
    GpuPreferenceDListState = 0;
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v37, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
    if ( v12 )
    {
      v15 = v12 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v14, v13);
          *(_QWORD *)(v23 + 24) = 3757LL;
          WdLogEvent5_WdAssertion(v23);
          goto LABEL_11;
        }
        v16 = *((_DWORD *)Current + 114);
      }
      else
      {
        v16 = *((_DWORD *)Current + 115);
      }
      GpuPreferenceDListState = v16;
LABEL_11:
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_DWORD *)MmUserProbeAddress;
      *v3 = GpuPreferenceDListState;
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v17);
      if ( v41 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v39);
      }
      return 0LL;
    }
    Global = DXGGLOBAL::GetGlobal(v14, v13);
    v25 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v38[0].HighPart, &v46);
    v28 = v25;
    if ( v25 )
    {
      v43 = v25;
      v44 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
      DXGADAPTER::ReleaseReference(v28);
      if ( *((_QWORD *)v28 + 338) )
      {
        if ( *((_DWORD *)v28 + 50) == 1 )
        {
          v35 = *((_QWORD *)v28 + 338);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v35 + 72, 0LL);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, *((unsigned int *)v28 + 58), v36);
          ExReleasePushLockSharedEx(v35 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v44 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
        goto LABEL_11;
      }
      v32 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v32 + 24) = (int)v38[1].LowPart;
      *(_QWORD *)(v32 + 32) = (unsigned int)v38[0].HighPart;
      WdLogEvent5_WdError(v32);
      if ( v44 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v42);
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v29 + 24) = (int)v38[1].LowPart;
      *(_QWORD *)(v29 + 32) = (unsigned int)v38[0].HighPart;
      WdLogEvent5_WdError(v29);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v22);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v39);
  return 3221225485LL;
}
