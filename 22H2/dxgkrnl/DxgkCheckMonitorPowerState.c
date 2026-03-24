/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C01570C0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C01773DC (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct DXGADAPTER *v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  struct DXGADAPTER *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rbx
  unsigned int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  bool v45; // zf
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  char *v64; // [rsp+30h] [rbp-88h]
  struct DXGADAPTER *v65; // [rsp+38h] [rbp-80h] BYREF
  int v66; // [rsp+48h] [rbp-70h] BYREF
  __int64 v67; // [rsp+50h] [rbp-68h]
  char v68; // [rsp+58h] [rbp-60h]
  _QWORD v69[2]; // [rsp+60h] [rbp-58h] BYREF
  char v70; // [rsp+70h] [rbp-48h]
  unsigned __int8 v71; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGADAPTER *v72; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v73; // [rsp+D8h] [rbp+20h]

  v3 = (__int64 *)a1;
  v66 = -1;
  v67 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v68 = 1;
    v66 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2046);
  }
  else
  {
    v68 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v66, 2046LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4, v6, v7);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v11, v10)) == 0LL
    || (v13 = *((_QWORD *)Current + 1)) == 0 )
  {
    v13 = v12;
    if ( !v12 )
    {
      v41 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v41 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v41);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v42);
      v45 = v68 == 0;
      goto LABEL_42;
    }
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v13 + 88) + 400LL))() )
  {
    v46 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    v35 = -1071775738;
    *(_QWORD *)(v46 + 24) = -1071775738LL;
    WdLogEvent5_WdWarning(v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v47);
    if ( !v68 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v35;
LABEL_73:
    McTemplateK0q_EtwWriteTransfer(v37, &EventProfilerExit, v38, v66);
    return v35;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v73 = *v3;
  v17 = v73;
  v72 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v65,
    (unsigned int)v73,
    (struct _KTHREAD **)v13,
    &v72,
    1);
  v21 = v72;
  if ( !v72 )
  {
    v48 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v48 + 24) = v17;
    *(_QWORD *)(v48 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v48);
    if ( v65 )
      DXGADAPTER::ReleaseReference(v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v49);
    v45 = v68 == 0;
LABEL_42:
    if ( v45 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_68;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v13 + 88) + 208LL))() )
  {
    v35 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v23, v22) + 24) = -1071775738LL;
    if ( v65 )
      DXGADAPTER::ReleaseReference(v65);
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v36);
    if ( !v68 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return v35;
    goto LABEL_73;
  }
  v69[1] = v21;
  _InterlockedIncrement64((volatile signed __int64 *)v21 + 3);
  v69[0] = -1LL;
  KeEnterCriticalRegion();
  v24 = v72;
  v64 = (char *)v72 + 136;
  ExAcquirePushLockSharedEx((char *)v72 + 136, 0LL);
  v70 = 1;
  if ( *((_DWORD *)v24 + 50) == 1 )
  {
    v28 = v72;
    v29 = *((_QWORD *)v72 + 337);
    if ( v29 )
    {
      v30 = HIDWORD(v73);
      if ( HIDWORD(v73) < *(_DWORD *)(v29 + 80) )
      {
        v31 = *(unsigned int *)(*((_QWORD *)v72 + 2) + 744LL);
        if ( (int)v31 <= 0 )
        {
          v59 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v25);
          v35 = -1071775738;
          v59[3] = -1071775738LL;
          v59[4] = v72;
          v59[5] = HIDWORD(v73);
        }
        else
        {
          v32 = *((_QWORD *)v72 + 337);
          v33 = HIDWORD(v73);
          if ( HIDWORD(v73) >= *(_DWORD *)(v32 + 80) )
          {
            v60 = WdLogNewEntry5_WdAssertion(v31, v25);
            *(_QWORD *)(v60 + 24) = 5734LL;
            WdLogEvent5_WdAssertion(v60);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v32 + 112) + 3968 * v33 + 722) )
          {
            v34 = *((_QWORD *)v28 + 337);
            if ( !v34 )
            {
              v62 = WdLogNewEntry5_WdAssertion(v31, v25);
              *(_QWORD *)(v62 + 24) = 9659LL;
              WdLogEvent5_WdAssertion(v62);
              v34 = *((_QWORD *)v28 + 337);
            }
            if ( v34 )
            {
              if ( (unsigned int)v33 >= *(_DWORD *)(v34 + 80) )
              {
                v63 = WdLogNewEntry5_WdAssertion(v31, v25);
                *(_QWORD *)(v63 + 24) = 6068LL;
                WdLogEvent5_WdAssertion(v63);
              }
              if ( *(_BYTE *)(*(_QWORD *)(v34 + 112) + 3968 * v33 + 720) )
                goto LABEL_24;
            }
            v71 = 0;
            if ( DmmIsWaitingForPowerOn(v72, v33, &v71) >= 0 && v71 )
LABEL_24:
              v35 = 0;
            else
              v35 = -1071775738;
          }
          else
          {
            v61 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v25);
            v61[3] = -1071775739LL;
            v61[4] = v72;
            v61[5] = v33;
            v35 = -1071775739;
          }
        }
        ExReleasePushLockSharedEx(v64, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v28 + 2), v72);
        if ( v65 && _InterlockedExchangeAdd64((volatile signed __int64 *)v65 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v65 + 2), v65);
        goto LABEL_30;
      }
      v57 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      *(_QWORD *)(v57 + 24) = v30;
      *(_QWORD *)(v57 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v57);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
      if ( v65 )
        DXGADAPTER::ReleaseReference(v65);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v58);
      if ( !v68 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_68:
      McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v66);
      return 3221225485LL;
    }
    v53 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v53 + 24) = v28;
    *(_QWORD *)(v53 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v53);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
    if ( v65 )
      DXGADAPTER::ReleaseReference(v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v54);
    if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v66);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v69);
    if ( v65 )
      DXGADAPTER::ReleaseReference(v65);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v66, v50);
    if ( v68 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v66);
    return 3221226166LL;
  }
}
