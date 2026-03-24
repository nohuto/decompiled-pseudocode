/*
 * XREFs of DxgkCacheHybridQueryValue @ 0x1C015FDF0
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

__int64 __fastcall DxgkCacheHybridQueryValue(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rbx
  ULONG64 v11; // rax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edi
  DWORD v16; // eax
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
  struct DXGADAPTER *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r15
  __int64 v36; // rdi
  __int64 v37; // r8
  DWORD GpuPreferenceDListState; // eax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rax
  _BYTE v43[16]; // [rsp+20h] [rbp-68h] BYREF
  struct _LUID v44[2]; // [rsp+30h] [rbp-58h]
  int v45; // [rsp+48h] [rbp-40h] BYREF
  __int64 v46; // [rsp+50h] [rbp-38h]
  char v47; // [rsp+58h] [rbp-30h]
  _BYTE v48[8]; // [rsp+60h] [rbp-28h] BYREF
  struct DXGADAPTER *v49; // [rsp+68h] [rbp-20h]
  char v50; // [rsp+70h] [rbp-18h]
  unsigned __int64 v51; // [rsp+98h] [rbp+10h] BYREF

  v3 = (_DWORD *)a1;
  v45 = -1;
  v46 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v47 = 1;
    v45 = 2091;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2091);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v45, 2091LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v11 = (ULONG64)v3;
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v11 = MmUserProbeAddress;
    *(_OWORD *)&v44[0].LowPart = *(_OWORD *)v11;
    v12 = *(_DWORD *)(v11 + 16);
    DXGPROCESSMUTEX::DXGPROCESSMUTEX((DXGPROCESSMUTEX *)v43, (struct DXGFASTMUTEX *const *)Current);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v43);
    if ( v12 )
    {
      v15 = v12 - 1;
      if ( v15 )
      {
        if ( v15 != 1 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v14, v13);
          *(_QWORD *)(v23 + 24) = 3907LL;
          WdLogEvent5_WdAssertion(v23);
          goto LABEL_11;
        }
        v16 = *((_DWORD *)Current + 114);
        if ( !v16 )
        {
          *((_DWORD *)Current + 114) = v44[0].LowPart;
LABEL_11:
          if ( (unsigned __int64)v3 >= MmUserProbeAddress )
            v3 = (_DWORD *)MmUserProbeAddress;
          *v3 = v44[0].LowPart;
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v17);
          if ( v47 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v45);
          }
          return 0LL;
        }
      }
      else
      {
        v16 = *((_DWORD *)Current + 115);
        if ( !v16 )
        {
          *((_DWORD *)Current + 115) = v44[0].LowPart;
          goto LABEL_11;
        }
      }
      v44[0].LowPart = v16;
      goto LABEL_11;
    }
    Global = DXGGLOBAL::GetGlobal(v14, v13);
    v25 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)&v44[0].HighPart, &v51);
    v28 = v25;
    if ( v25 )
    {
      v49 = v25;
      v50 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
      DXGADAPTER::ReleaseReference(v28);
      if ( *((_QWORD *)v28 + 338) )
      {
        if ( *((_DWORD *)v28 + 50) == 1 )
        {
          v35 = *((_QWORD *)v28 + 338);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v35 + 72, 0LL);
          *(_QWORD *)(v35 + 80) = KeGetCurrentThread();
          v36 = *((unsigned int *)v28 + 58);
          GpuPreferenceDListState = DXGPROCESS::GetGpuPreferenceDListState(Current, (unsigned int)v36, v37);
          if ( GpuPreferenceDListState )
          {
            v44[0].LowPart = GpuPreferenceDListState;
          }
          else
          {
            v41 = *(_QWORD *)(*((_QWORD *)Current + 6) + 8 * v36);
            if ( v41 )
            {
              *(_DWORD *)(v41 + 72) = v44[0].LowPart;
            }
            else
            {
              v42 = WdLogNewEntry5_WdWarning(0LL, v39, v40);
              *(_QWORD *)(v42 + 24) = v36;
              WdLogEvent5_WdWarning(v42);
            }
          }
          *(_QWORD *)(v35 + 80) = 0LL;
          ExReleasePushLockExclusiveEx(v35 + 72, 0LL);
          KeLeaveCriticalRegion();
        }
        if ( v50 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
        goto LABEL_11;
      }
      v32 = WdLogNewEntry5_WdError(v31, v30);
      *(_QWORD *)(v32 + 24) = (int)v44[1].LowPart;
      *(_QWORD *)(v32 + 32) = (unsigned int)v44[0].HighPart;
      WdLogEvent5_WdError(v32);
      if ( v50 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v48);
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(v27, v26);
      *(_QWORD *)(v29 + 24) = (int)v44[1].LowPart;
      *(_QWORD *)(v29 + 32) = (unsigned int)v44[0].HighPart;
      WdLogEvent5_WdError(v29);
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v43);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v22);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v45);
  return 3221225485LL;
}
