/*
 * XREFs of DxgkQueryProtectedSessionStatus @ 0x1C0346340
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0024440 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z @ 0x1C00531E0 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVDXGGLOBAL@@_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkQueryProtectedSessionStatus(ULONG64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rcx
  __int64 v7; // r8
  bool v8; // sf
  __int64 *v9; // rbx
  struct DXGGLOBAL *Global; // rax
  unsigned int v11; // eax
  __int64 v12; // r8
  unsigned int v13; // ecx
  int v14; // ecx
  __int64 v15; // rbx
  int v17; // ebx
  _DWORD *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _BYTE v21[16]; // [rsp+50h] [rbp-48h] BYREF
  int v22; // [rsp+60h] [rbp-38h] BYREF
  __int64 v23; // [rsp+68h] [rbp-30h]
  char v24; // [rsp+70h] [rbp-28h]
  __int64 v25; // [rsp+A8h] [rbp+10h]

  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 459LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      459LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v22 = -1;
  v23 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v24 = 1;
    v22 = 2150;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2150);
  }
  else
  {
    v24 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v22, 2150);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_22;
    }
    return 3221225485LL;
  }
  v9 = (__int64 *)a1;
  if ( a1 >= MmUserProbeAddress )
    v9 = (__int64 *)MmUserProbeAddress;
  v25 = *v9;
  Global = DXGGLOBAL::GetGlobal();
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v21, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v11 = ((unsigned int)v25 >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)Current + 74) )
    goto LABEL_18;
  v12 = *((_QWORD *)Current + 35);
  v13 = *(_DWORD *)(v12 + 16LL * v11 + 8);
  if ( (unsigned int)v25 >> 30 != ((v13 >> 5) & 3) )
    goto LABEL_18;
  if ( (v13 & 0x2000) != 0 )
    goto LABEL_18;
  v14 = v13 & 0x1F;
  if ( !v14 )
    goto LABEL_18;
  if ( v14 != 14 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_18:
    v15 = 0LL;
    goto LABEL_19;
  }
  v15 = *(_QWORD *)(v12 + 16LL * v11);
LABEL_19:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v15 )
  {
    WdLogSingleEntry2(3LL, (unsigned int)v25, -1073741811LL);
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
    if ( v24 )
    {
      LOBYTE(v6) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v8 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_22:
      if ( v8 )
        McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v22);
    }
    return 3221225485LL;
  }
  v17 = *(_DWORD *)(v15 + 148);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v21);
  v18 = (_DWORD *)(a1 + 4);
  if ( a1 + 4 >= MmUserProbeAddress )
    v18 = (_DWORD *)MmUserProbeAddress;
  *v18 = v17;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v22);
  if ( v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v22);
  return 0LL;
}
