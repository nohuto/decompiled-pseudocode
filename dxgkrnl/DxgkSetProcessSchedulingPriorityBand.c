/*
 * XREFs of DxgkSetProcessSchedulingPriorityBand @ 0x1C0342780
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
 *     ?SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z @ 0x1C03413FC (-SetProcessSchedulingPriorityBand@DXGPROCESS@@QEAAJW4_D3DKMT_SCHEDULING_PRIORITYBAND@@@Z.c)
 */

__int64 __fastcall DxgkSetProcessSchedulingPriorityBand(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  __int64 v8; // r8
  bool v9; // sf
  unsigned int *v11; // rax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGPROCESS *Process; // rax
  int v19; // eax
  int v20; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-A0h]
  char v22; // [rsp+30h] [rbp-98h]
  unsigned int v23; // [rsp+38h] [rbp-90h]
  void *v24[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v25; // [rsp+50h] [rbp-78h]
  _BYTE v26[80]; // [rsp+60h] [rbp-68h] BYREF

  v3 = (unsigned int *)a1;
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 2140;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2140);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 2140);
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
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      LOBYTE(v7) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_9;
    }
    return v6;
  }
  *(_OWORD *)v24 = 0LL;
  v25 = 0LL;
  v11 = v3;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v11 = (unsigned int *)MmUserProbeAddress;
  v23 = *v11;
  v12 = v23;
  if ( v23 < 0x18 )
  {
    WdLogSingleEntry1(3LL, 4644LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v20);
    return 3221225485LL;
  }
  if ( v23 > 0x18 )
    v12 = 24;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  memmove(v24, v3, v12);
  DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v26, v24[1], 0x2000);
  v15 = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v26, 0);
  v6 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry2(3LL, v24[1], v15);
    goto LABEL_27;
  }
  if ( (unsigned int)v25 <= 1 && !HIDWORD(v24[0]) )
  {
    Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v26);
    v19 = DXGPROCESS::SetProcessSchedulingPriorityBand((__int64)Process, v25);
    v6 = v19;
    if ( v19 < 0 )
      WdLogSingleEntry1(3LL, v19);
LABEL_27:
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v26);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
    if ( v22 )
    {
      v9 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_9:
      if ( v9 )
        McTemplateK0q_EtwWriteTransfer(v7, &EventProfilerExit, v8, v20);
    }
    return v6;
  }
  WdLogSingleEntry1(3LL, -1073741811LL);
  DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v26);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v20);
  return 3221225485LL;
}
