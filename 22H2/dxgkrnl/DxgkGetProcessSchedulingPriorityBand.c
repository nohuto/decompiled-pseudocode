/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1C0286E10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0002D74 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00ED4E0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00ED5A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C019C2E8 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C028452C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C0285980 (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int *v26; // rax
  size_t v27; // r8
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  const void *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  struct DXGPROCESS *Process; // r14
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // rdx
  unsigned int ProcessSchedulingPriorityBand; // eax
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned int *v50; // rcx
  int v51; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+28h] [rbp-A0h]
  char v53; // [rsp+30h] [rbp-98h]
  unsigned int v54; // [rsp+38h] [rbp-90h]
  unsigned int v55; // [rsp+3Ch] [rbp-8Ch]
  void *v56[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v57; // [rsp+50h] [rbp-78h]
  _BYTE v58[80]; // [rsp+60h] [rbp-68h] BYREF

  v51 = -1;
  v52 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v53 = 1;
    v51 = 2143;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2143);
  }
  else
  {
    v53 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v51, 2143LL);
  if ( !CheckTokenForResourceManagerAccess(v5, v4) )
  {
    v9 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v9 + 24) = DXGPROCESS::GetCurrent(v11, v10, v12, v13);
    *(_QWORD *)(v9 + 32) = -1073741790LL;
    WdLogEvent5_WdWarning(v9);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v14);
    if ( v53 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v51);
    }
    return 3221225506LL;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal(v7, v6) + 390) )
  {
    v21 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    LODWORD(v22) = -1073741823;
    *(_QWORD *)(v21 + 24) = -1073741823LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_12;
  }
  *(_OWORD *)v56 = 0LL;
  v57 = 0LL;
  v26 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v26 = (unsigned int *)MmUserProbeAddress;
  v54 = *v26;
  v27 = v54;
  if ( v54 < 0x18 )
  {
    v28 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v18, v54);
    *(_QWORD *)(v28 + 24) = 4829LL;
    WdLogEvent5_WdWarning(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v29);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v30, &EventProfilerExit, v31, v51);
    return 3221225485LL;
  }
  if ( v54 > 0x18 )
    v27 = 24LL;
  v54 = v27;
  v32 = (const void *)a1;
  if ( a1 >= MmUserProbeAddress )
    v32 = (const void *)MmUserProbeAddress;
  memmove(v56, v32, v27);
  if ( !HIDWORD(v56[0]) )
  {
    Process = (struct DXGPROCESS *)v56[1];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v58, v56[1], 0x2000);
    v41 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v58, 0);
    v22 = v41;
    if ( v41 >= 0 )
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v58);
      ProcessSchedulingPriorityBand = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process);
      v46 = ProcessSchedulingPriorityBand;
      v55 = ProcessSchedulingPriorityBand;
      if ( ProcessSchedulingPriorityBand != 3 )
      {
        v50 = (unsigned int *)(a1 + 16);
        if ( a1 + 20 > MmUserProbeAddress || a1 + 20 <= (unsigned __int64)v50 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *v50 = ProcessSchedulingPriorityBand;
        goto LABEL_35;
      }
      v45 = WdLogNewEntry5_WdWarning(v48, 3LL, v49);
      v22 = -1073741595LL;
    }
    else
    {
      v45 = WdLogNewEntry5_WdWarning(v43, v42, v44);
    }
    *(_QWORD *)(v45 + 24) = Process;
    *(_QWORD *)(v45 + 32) = v22;
    WdLogEvent5_WdWarning(v45);
LABEL_35:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v58, v46);
LABEL_12:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v23);
    if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v51);
    return (unsigned int)v22;
  }
  v36 = WdLogNewEntry5_WdWarning(v34, v33, v35);
  *(_QWORD *)(v36 + 24) = -1073741811LL;
  WdLogEvent5_WdWarning(v36);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v51, v37);
  if ( v53 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v38, &EventProfilerExit, v39, v51);
  return 3221225485LL;
}
