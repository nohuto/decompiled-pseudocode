/*
 * XREFs of DxgkDestroyProtectedSession @ 0x1C0289A40
 * Callers:
 *     <none>
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C00038D4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C00475B8 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0288A60 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 */

__int64 __fastcall DxgkDestroyProtectedSession(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct DXGPROCESS *Current; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  struct DXGGLOBAL *Global; // rax
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rax
  void *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  _BYTE v34[16]; // [rsp+20h] [rbp-38h] BYREF
  int v35; // [rsp+30h] [rbp-28h] BYREF
  __int64 v36; // [rsp+38h] [rbp-20h]
  char v37; // [rsp+40h] [rbp-18h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 394LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v35 = -1;
  v36 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v37 = 1;
    v35 = 2149;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2149);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2149LL);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v14);
    if ( v37 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v35);
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (unsigned int *)MmUserProbeAddress;
  v15 = *a1;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v10);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v34, Global);
  v17 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v18 = ((unsigned int)v15 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v18 >= *((_DWORD *)Current + 64) )
    goto LABEL_17;
  v19 = *((_QWORD *)Current + 30);
  v20 = *(_DWORD *)(v19 + 16 * v18 + 8);
  if ( (((unsigned int)v15 >> 25) & 0x60) != (*(_BYTE *)(v19 + 16 * v18 + 8) & 0x60)
    || (v20 & 0x2000) != 0
    || (v20 & 0x1F) == 0 )
  {
    goto LABEL_17;
  }
  v21 = v20 & 0x1F;
  if ( (_BYTE)v21 != 14 )
  {
    v22 = WdLogNewEntry5_WdError(((unsigned int)v15 >> 25) & 0x60, v21);
    *(_QWORD *)(v22 + 24) = 316LL;
    WdLogEvent5_WdError(v22);
LABEL_17:
    v23 = 0LL;
    goto LABEL_18;
  }
  v23 = *(void **)(v19 + 16LL * (unsigned int)v18);
LABEL_18:
  ExReleasePushLockSharedEx(v17, 0LL);
  KeLeaveCriticalRegion();
  if ( !v23 )
  {
    v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
    *(_QWORD *)(v27 + 24) = v15;
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v27);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
    goto LABEL_20;
  }
  DXGPROTECTEDSESSION::DestroyProtectedSession(v23, v15);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35, v31);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v35);
  return 0LL;
}
