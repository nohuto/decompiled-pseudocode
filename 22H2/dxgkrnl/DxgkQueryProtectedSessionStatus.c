/*
 * XREFs of DxgkQueryProtectedSessionStatus @ 0x1C028A580
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
 */

__int64 __fastcall DxgkQueryProtectedSessionStatus(ULONG64 a1)
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
  struct DXGPROCESS *Current; // r14
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 *v15; // rbx
  __int64 v16; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // ebx
  _DWORD *v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  _BYTE v36[16]; // [rsp+20h] [rbp-48h] BYREF
  int v37; // [rsp+30h] [rbp-38h] BYREF
  __int64 v38; // [rsp+38h] [rbp-30h]
  char v39; // [rsp+40h] [rbp-28h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v5 + 24) = 454LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v37 = -1;
  v38 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v39 = 1;
    v37 = 2150;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2150);
  }
  else
  {
    v39 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v37, 2150LL);
  Current = DXGPROCESS::GetCurrent(v7, v6, v8, v9);
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v13);
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, v14);
    if ( v39 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v37);
    }
    return 3221225485LL;
  }
  v15 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (__int64 *)MmUserProbeAddress;
  v16 = *v15;
  Global = DXGGLOBAL::GetGlobal(MmUserProbeAddress, v10);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v36, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v18 = ((unsigned int)v16 >> 6) & 0xFFFFFF;
  v19 = (unsigned int)v16 >> 30;
  if ( (unsigned int)v18 >= *((_DWORD *)Current + 64) )
    goto LABEL_17;
  v20 = *((_QWORD *)Current + 30);
  v21 = *(_DWORD *)(v20 + 16 * v18 + 8);
  if ( (_DWORD)v19 != ((v21 >> 5) & 3) || (v21 & 0x2000) != 0 || (v21 & 0x1F) == 0 )
    goto LABEL_17;
  v22 = v21 & 0x1F;
  if ( (_BYTE)v22 != 14 )
  {
    v23 = WdLogNewEntry5_WdError(v22, v19);
    *(_QWORD *)(v23 + 24) = 316LL;
    WdLogEvent5_WdError(v23);
LABEL_17:
    v24 = 0LL;
    goto LABEL_18;
  }
  v24 = *(_QWORD *)(v20 + 16LL * (unsigned int)v18);
LABEL_18:
  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
  KeLeaveCriticalRegion();
  if ( !v24 )
  {
    v28 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v28 + 24) = (unsigned int)v16;
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v28);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
    goto LABEL_20;
  }
  v32 = *(_DWORD *)(v24 + 140);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v36);
  v33 = (_DWORD *)(a1 + 4);
  if ( a1 + 4 >= MmUserProbeAddress )
    v33 = (_DWORD *)MmUserProbeAddress;
  *v33 = v32;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v37, (__int64)v33);
  if ( v39 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v37);
  return 0LL;
}
