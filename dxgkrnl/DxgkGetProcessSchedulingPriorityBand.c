/*
 * XREFs of DxgkGetProcessSchedulingPriorityBand @ 0x1C0341E20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0014CD4 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C01D3D44 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C01D4104 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0215D28 (-CheckTokenForResourceManagerAccess@@YA_NXZ.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C033E84C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 *     ?GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA?AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ @ 0x1C034039C (-GetProcessSchedulingPriorityBand@DXGPROCESS@@QEAA-AW4_D3DKMT_SCHEDULING_PRIORITYBAND@@XZ.c)
 */

__int64 __fastcall DxgkGetProcessSchedulingPriorityBand(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  unsigned int *v11; // rax
  size_t v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  const void *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  struct DXGPROCESS *Process; // r14
  int ProcessSchedulingPriorityBand; // edx
  _DWORD *v21; // rcx
  int v22; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+28h] [rbp-A0h]
  char v24; // [rsp+30h] [rbp-98h]
  unsigned int v25; // [rsp+38h] [rbp-90h]
  int v26; // [rsp+3Ch] [rbp-8Ch]
  void *v27[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v28; // [rsp+50h] [rbp-78h]
  _BYTE v29[80]; // [rsp+60h] [rbp-68h] BYREF

  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2143;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2143);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2143);
  if ( !CheckTokenForResourceManagerAccess() )
  {
    Current = DXGPROCESS::GetCurrent(v4);
    v6 = -1073741790;
    WdLogSingleEntry2(3LL, Current, -1073741790LL);
    goto LABEL_7;
  }
  if ( !*((_DWORD *)DXGGLOBAL::GetGlobal() + 424) )
  {
    v6 = -1073741823;
    WdLogSingleEntry1(3LL, -1073741823LL);
    goto LABEL_7;
  }
  *(_OWORD *)v27 = 0LL;
  v28 = 0LL;
  v11 = (unsigned int *)a1;
  if ( a1 >= MmUserProbeAddress )
    v11 = (unsigned int *)MmUserProbeAddress;
  v25 = *v11;
  v12 = v25;
  if ( v25 >= 0x18 )
  {
    if ( v25 > 0x18 )
      v12 = 24LL;
    v25 = v12;
    v15 = (const void *)a1;
    if ( a1 >= MmUserProbeAddress )
      v15 = (const void *)MmUserProbeAddress;
    memmove(v27, v15, v12);
    if ( !HIDWORD(v27[0]) )
    {
      DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v29, v27[1], 0x2000);
      v18 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v29, 0);
      v6 = v18;
      if ( v18 >= 0 )
      {
        Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v29);
        ProcessSchedulingPriorityBand = DXGPROCESS::GetProcessSchedulingPriorityBand((__int64)Process);
        v26 = ProcessSchedulingPriorityBand;
        if ( ProcessSchedulingPriorityBand == 3 )
        {
          v6 = -1073741595;
          WdLogSingleEntry2(3LL, Process, -1073741595LL);
          DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v29);
LABEL_7:
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
          if ( v24 )
          {
            LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
            v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
            goto LABEL_9;
          }
          return v6;
        }
        v21 = (_DWORD *)(a1 + 16);
        if ( a1 + 20 > MmUserProbeAddress || a1 + 20 <= (unsigned __int64)v21 )
          *(_BYTE *)MmUserProbeAddress = 0;
        *v21 = ProcessSchedulingPriorityBand;
      }
      else
      {
        WdLogSingleEntry2(3LL, v27[1], v18);
      }
      DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v29);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
      if ( v24 )
      {
        v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_9:
        if ( v9 )
          McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v22);
      }
      return v6;
    }
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v22);
    return 3221225485LL;
  }
  else
  {
    WdLogSingleEntry1(3LL, 4980LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v22);
    return 3221225485LL;
  }
}
