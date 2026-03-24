/*
 * XREFs of DxgkQueryVidPnExclusiveOwnership @ 0x1C0170930
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ @ 0x1C0002D74 (-GetProcess@DXGPROCESSMUTEXBYHANDLE@@QEAAPEAVDXGPROCESS@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A41C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0025B74 (--0DXGUSERCRIT@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C0025BE4 (--1DXGUSERCRIT@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z @ 0x1C00ED4E0 (--0DXGPROCESSMUTEXBYHANDLE@@QEAA@PEAXK@Z.c)
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00ED5A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C013C28C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ??1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ @ 0x1C028452C (--1DXGPROCESSMUTEXBYHANDLE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkQueryVidPnExclusiveOwnership(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r15
  _OWORD *v11; // rax
  void *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  struct DXGGLOBAL *Global; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  _DWORD *v25; // rdx
  _DWORD *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-108h] BYREF
  __int64 v42; // [rsp+28h] [rbp-100h]
  char v43; // [rsp+30h] [rbp-F8h]
  __int64 v44; // [rsp+38h] [rbp-F0h]
  struct DXGPROCESS *Process; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+48h] [rbp-E0h]
  int v47; // [rsp+50h] [rbp-D8h]
  __int64 v48; // [rsp+54h] [rbp-D4h]
  int v49; // [rsp+5Ch] [rbp-CCh]
  _BYTE v50[24]; // [rsp+60h] [rbp-C8h] BYREF
  void *v51[2]; // [rsp+78h] [rbp-B0h]
  __int128 v52; // [rsp+88h] [rbp-A0h]
  __int128 v53; // [rsp+98h] [rbp-90h] BYREF
  _BYTE v54[24]; // [rsp+B0h] [rbp-78h] BYREF
  int v55; // [rsp+C8h] [rbp-60h]
  char v56; // [rsp+CCh] [rbp-5Ch]

  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2126;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2126);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2126LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( Current )
  {
    v11 = (_OWORD *)a1;
    if ( a1 >= MmUserProbeAddress )
      v11 = (_OWORD *)MmUserProbeAddress;
    *(_OWORD *)v51 = *v11;
    v52 = v11[1];
    v46 = 0LL;
    v48 = 0LL;
    v49 = 0;
    v47 = -1;
    v12 = v51[0];
    DXGPROCESSMUTEXBYHANDLE::DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54, v51[0], 4096);
    LODWORD(v15) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v54, 1);
    if ( (_DWORD)v15 == -1073741790 )
    {
      if ( v56 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v14, v13);
        *(_QWORD *)(v35 + 24) = 1778LL;
        WdLogEvent5_WdAssertion(v35);
      }
      v55 = 1024;
      LODWORD(v15) = DXGPROCESSMUTEXBYHANDLE::AcquireInternal((DXGPROCESSMUTEXBYHANDLE *)v54, 1);
    }
    if ( (int)v15 < 0 )
    {
      v36 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v36 + 24) = v12;
      WdLogEvent5_WdError(v36);
    }
    else
    {
      Process = DXGPROCESSMUTEXBYHANDLE::GetProcess((DXGPROCESSMUTEXBYHANDLE *)v54);
      v16 = *((_QWORD *)Current + 11);
      DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v50, Current);
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v50, 1LL);
      v53 = 0LL;
      if ( (*(unsigned int (__fastcall **)(void *, __int128 *))(v16 + 360))(v51[1], &v53) )
      {
        LODWORD(v44) = ((int)v53 + DWORD2(v53)) / 2;
        v19 = (unsigned int)((DWORD1(v53) + HIDWORD(v53)) >> 31);
        LODWORD(v19) = (DWORD1(v53) + HIDWORD(v53)) % 2;
        HIDWORD(v44) = (DWORD1(v53) + HIDWORD(v53)) / 2;
        v46 = v44;
        Global = DXGGLOBAL::GetGlobal(v18, v19);
        v21 = DXGGLOBAL::IterateAdaptersWithCallback(
                (__int64)Global,
                (__int64 (__fastcall *)(_QWORD *, __int64))QueryVidPnExclusiveOwnershipCallBack,
                (__int64)&Process,
                4);
        v15 = v21;
        if ( v21 < 0 )
        {
          v39 = *((unsigned int *)DXGGLOBAL::GetGlobal(v23, v22) + 386);
          if ( (v39 & 2) != 0 )
          {
            v40 = WdLogNewEntry5_WdCriticalError(v39, v38);
            *(_QWORD *)(v40 + 24) = 275LL;
            *(_QWORD *)(v40 + 32) = 33LL;
            *(_QWORD *)(v40 + 40) = v15;
            *(_OWORD *)(v40 + 48) = 0LL;
            WdLogEvent5_WdCriticalError(v40);
          }
        }
        else
        {
          v24 = (_QWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v24 = (_QWORD *)MmUserProbeAddress;
          *v24 = v48;
          v25 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v25 = (_DWORD *)MmUserProbeAddress;
          *v25 = v47;
          v26 = (_DWORD *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v26 = (_DWORD *)MmUserProbeAddress;
          *v26 = v49;
        }
      }
      else
      {
        v37 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v37 + 24) = 10192LL;
        WdLogEvent5_WdError(v37);
      }
      DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v50);
    }
    DXGPROCESSMUTEXBYHANDLE::~DXGPROCESSMUTEXBYHANDLE((DXGPROCESSMUTEXBYHANDLE *)v54);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v27);
    if ( v43 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v41);
    }
    return (unsigned int)v15;
  }
  else
  {
    v31 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v31 + 24) = 10148LL;
    WdLogEvent5_WdError(v31);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41, v32);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v41);
    return 3221225485LL;
  }
}
