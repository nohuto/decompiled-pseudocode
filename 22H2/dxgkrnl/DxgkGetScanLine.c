/*
 * XREFs of DxgkGetScanLine @ 0x1C016F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0004EF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C0005530 (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01077E0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C021C7D0 (-DdiGetScanLine@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C026962C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C0284EFC (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z @ 0x1C028A9F0 (-GetScanLine@REMOTE_VSYNC@@QEAAJPEAU_DXGKARG_GETSCANLINE@@@Z.c)
 *     ?GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z @ 0x1C02FDC80 (-GetScanLineEmulation@BLTQUEUE@@QEAAXPEAIPEAE@Z.c)
 */

__int64 __fastcall DxgkGetScanLine(ULONG64 a1, __int64 a2, __int64 a3)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _KTHREAD **v13; // rdi
  struct _KTHREAD **v14; // rsi
  _OWORD *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGADAPTER *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r12
  int PairingAdapters; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  volatile signed __int64 *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  DXGADAPTER *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGADAPTER *v43; // rsi
  __int64 v44; // rdi
  __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rdx
  _BYTE *v49; // rcx
  _DWORD *v50; // r15
  __int64 v51; // rcx
  __int64 v52; // r8
  struct DXGTHREAD *Current; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rdx
  __int64 v60; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  struct DXGTHREAD *v64; // rax
  DXGSESSIONMGR *v65; // rdi
  unsigned int CurrentProcessSessionId; // eax
  REMOTE_VSYNC *v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD *v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // r10
  __int64 v90; // rcx
  unsigned int v91; // r8d
  BOOLEAN InVerticalBlank; // al
  UINT v93; // ecx
  int v94; // [rsp+40h] [rbp-138h] BYREF
  __int64 v95; // [rsp+48h] [rbp-130h]
  char v96; // [rsp+50h] [rbp-128h]
  int v97; // [rsp+58h] [rbp-120h] BYREF
  struct DXGADAPTER *v98; // [rsp+60h] [rbp-118h] BYREF
  struct DXGADAPTER *v99; // [rsp+68h] [rbp-110h] BYREF
  struct DXGADAPTER *v100; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v101[6]; // [rsp+80h] [rbp-F8h]
  unsigned __int64 v102; // [rsp+98h] [rbp-E0h] BYREF
  _DXGKARG_GETSCANLINE v103; // [rsp+A0h] [rbp-D8h] BYREF
  _BYTE v104[8]; // [rsp+B0h] [rbp-C8h] BYREF
  _BYTE v105[16]; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned int *v106; // [rsp+C8h] [rbp-B0h]
  _BYTE v107[16]; // [rsp+F8h] [rbp-80h] BYREF
  DXGADAPTER *v108; // [rsp+108h] [rbp-70h]
  char v109; // [rsp+110h] [rbp-68h]
  __int64 v110; // [rsp+118h] [rbp-60h]

  v94 = -1;
  SessionDataForSpecifiedSession = 0LL;
  v95 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v96 = 1;
    v94 = 2034;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2034);
  }
  else
  {
    v96 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v94, 2034LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5, v7, v8);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = (struct _KTHREAD **)ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 347) & 0x10) == 0
    || (Current = DXGTHREAD::GetCurrent(v12, v11)) == 0LL
    || (v14 = (struct _KTHREAD **)*((_QWORD *)Current + 1)) == 0LL )
  {
    v14 = v13;
    if ( !v13 )
    {
      v55 = WdLogNewEntry5_WdError(v12, v11);
      LODWORD(SessionDataForSpecifiedSession) = -1073741811;
      *(_QWORD *)(v55 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v55);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v56);
      if ( !v96 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)SessionDataForSpecifiedSession;
      goto LABEL_98;
    }
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v101 = *v15;
  *(_QWORD *)&v103.VidPnTargetId = 0LL;
  v103.ScanLine = 0;
  v16 = v101[0];
  if ( !v101[0] && (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    Global = DXGGLOBAL::GetGlobal(v60, v59);
    LODWORD(SessionDataForSpecifiedSession) = REMOTE_VSYNC::GetScanLine(
                                                (struct DXGGLOBAL *)((char *)Global + 864),
                                                &v103);
    goto LABEL_43;
  }
  v100 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v99, (unsigned int)v16, v14, &v100, 1);
  v21 = v100;
  if ( !v100 )
  {
    v62 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v62 + 24) = v16;
    LODWORD(SessionDataForSpecifiedSession) = -1073741811;
    *(_QWORD *)(v62 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v62);
    if ( v99 )
      DXGADAPTER::ReleaseReference(v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v63);
    if ( !v96 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return (unsigned int)SessionDataForSpecifiedSession;
LABEL_98:
    McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v94);
    return (unsigned int)SessionDataForSpecifiedSession;
  }
  v22 = PsGetCurrentProcess(v18, v17, v19, v20);
  v23 = PsGetProcessDxgProcess(v22);
  v26 = v23;
  if ( (!v23 || (*(_BYTE *)(v23 + 347) & 0x10) != 0)
    && (v64 = DXGTHREAD::GetCurrent(v25, v24)) != 0LL
    && (v27 = *((_QWORD *)v64 + 1)) != 0
    || (v27 = v26) != 0 )
  {
    v28 = *(_QWORD *)(v27 + 88);
    if ( v28 )
    {
      v97 = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, int *))(v28 + 224))(0LL, 0LL, &v97) )
      {
        if ( !v97 )
        {
          if ( !*((_BYTE *)v21 + 209) )
            goto LABEL_74;
          v65 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v30, v29) + 102);
          if ( v65 )
          {
            CurrentProcessSessionId = PsGetCurrentProcessSessionId(v30, v29);
            SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                               v65,
                                               CurrentProcessSessionId);
          }
          if ( *((_DWORD *)SessionDataForSpecifiedSession + 4730) )
            v67 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v30, v29) + 936);
          else
LABEL_74:
            v67 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v30, v29) + 864);
          LODWORD(SessionDataForSpecifiedSession) = REMOTE_VSYNC::GetScanLine(v67, &v103);
          goto LABEL_40;
        }
      }
    }
  }
  v98 = 0LL;
  v31 = v101[1];
  PairingAdapters = DxgkpGetPairingAdapters(v21, v101[1], 0LL, 0LL, &v98, &v102, 0);
  v35 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v68 = (_QWORD *)WdLogNewEntry5_WdEvent(v34, v33);
    v68[3] = v21;
    v68[4] = v31;
    v68[5] = v35;
    WdLogEvent5_WdEvent(v68);
    if ( v99 )
      DXGADAPTER::ReleaseReference(v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v69);
    if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v70, &EventProfilerExit, v71, v94);
    return (unsigned int)v35;
  }
  else
  {
    v36 = (volatile signed __int64 *)v98;
    if ( !v98 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v34, v33);
      *(_QWORD *)(v72 + 24) = 7506LL;
      WdLogEvent5_WdAssertion(v72);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v104, (struct DXGADAPTER *const)v36, 0LL);
    if ( _InterlockedExchangeAdd64(v36 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v98 + 2), v98);
    if ( v109 )
    {
      v73 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v38, v37);
      v73[3] = 275LL;
      v73[4] = 4LL;
      v73[5] = v107;
      v73[6] = 0LL;
      v73[7] = 0LL;
      WdLogEvent5_WdCriticalError(v73);
    }
    v40 = v108;
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v108 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v108 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v41, &EventBlockThread, v42, 72);
        KeWaitForSingleObject((char *)v108 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v108, 0LL);
      v40 = v108;
    }
    v110 = 0LL;
    v109 = 1;
    if ( *((_DWORD *)v40 + 50) != 1 )
      goto LABEL_88;
    if ( v106 != (unsigned int *)v108 )
    {
      COREACCESS::AcquireShared((COREACCESS *)v105, 0LL);
      v40 = (DXGADAPTER *)v106[50];
      if ( (_DWORD)v40 != 1 )
      {
        COREACCESS::Release((COREACCESS *)v105);
LABEL_88:
        COREACCESS::Release((COREACCESS *)v107);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104, v74);
        if ( v99 )
          DXGADAPTER::ReleaseReference(v99);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v75);
        if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v76, &EventProfilerExit, v77, v94);
        return 3221226166LL;
      }
    }
    v104[1] = 1;
    v43 = v98;
    v44 = *((_QWORD *)v98 + 337);
    if ( !v44 )
    {
      v78 = WdLogNewEntry5_WdAssertion(v40, v37);
      *(_QWORD *)(v78 + 24) = 7520LL;
      WdLogEvent5_WdAssertion(v78);
      v44 = *((_QWORD *)v43 + 337);
    }
    v45 = v101[1];
    if ( v101[1] >= *(_DWORD *)(v44 + 80) )
    {
      v79 = WdLogNewEntry5_WdWarning(v40, v37, v39);
      *(_QWORD *)(v79 + 24) = v45;
      LODWORD(SessionDataForSpecifiedSession) = -1073741811;
      *(_QWORD *)(v79 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v79);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104, v80);
      if ( v99 )
        DXGADAPTER::ReleaseReference(v99);
      goto LABEL_96;
    }
    if ( !v44 )
    {
      v81 = WdLogNewEntry5_WdAssertion(v40, v37);
      *(_QWORD *)(v81 + 24) = 9659LL;
      WdLogEvent5_WdAssertion(v81);
      v44 = *((_QWORD *)v43 + 337);
    }
    if ( !v44 )
      goto LABEL_111;
    if ( (unsigned int)v45 >= *(_DWORD *)(v44 + 80) )
    {
      v82 = WdLogNewEntry5_WdAssertion(v40, v37);
      *(_QWORD *)(v82 + 24) = 6068LL;
      WdLogEvent5_WdAssertion(v82);
    }
    v46 = 3968 * v45;
    if ( !*(_BYTE *)(*(_QWORD *)(v44 + 112) + 3968 * v45 + 720) )
    {
LABEL_111:
      v89 = *((_QWORD *)v43 + 337);
      v90 = *(_QWORD *)(v89 + 112);
      v91 = *(_DWORD *)(v90 + 3968 * v45 + 1076) + 20;
      v46 = *(unsigned int *)(v90 + 3968 * v45 + 1016);
      InVerticalBlank = v103.InVerticalBlank;
      if ( v91 > (unsigned int)v46 )
        InVerticalBlank = 1;
      v103.InVerticalBlank = InVerticalBlank;
      v93 = 0;
      if ( v91 <= (unsigned int)v46 )
        v93 = v91;
      *(_DWORD *)(3968 * v45 + *(_QWORD *)(v89 + 112) + 1076) = v93;
      v103.ScanLine = v93;
      goto LABEL_39;
    }
    v47 = *(_QWORD *)(*((_QWORD *)v43 + 337) + 112LL);
    v103.VidPnTargetId = *(_DWORD *)(v47 + v46 + 1068);
    if ( v103.VidPnTargetId != -1 )
    {
      if ( *((_QWORD *)v43 + 338) )
      {
        LODWORD(SessionDataForSpecifiedSession) = ADAPTER_DISPLAY::DdiGetScanLine(
                                                    *((ADAPTER_DISPLAY **)v43 + 337),
                                                    &v103);
      }
      else
      {
        v88 = *(_QWORD *)(*((_QWORD *)v43 + 337) + 384LL);
        if ( v88 )
        {
          if ( *(_BYTE *)(v88 + 96) )
            LODWORD(SessionDataForSpecifiedSession) = ADAPTER_DISPLAY::DdiGetScanLine(
                                                        *(ADAPTER_DISPLAY **)(v88 + 88),
                                                        &v103);
          else
            BLTQUEUE::GetScanLineEmulation(
              (BLTQUEUE *)(*(_QWORD *)(v88 + 8) + 2904 * v45),
              &v103.ScanLine,
              &v103.InVerticalBlank);
        }
        else
        {
          LODWORD(SessionDataForSpecifiedSession) = -1073741811;
        }
      }
LABEL_39:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104, v46);
LABEL_40:
      if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v99 + 2), v99);
LABEL_43:
      if ( (int)SessionDataForSpecifiedSession >= 0 )
      {
        v49 = (_BYTE *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v49 = (_BYTE *)MmUserProbeAddress;
        *v49 = v103.InVerticalBlank;
        v50 = (_DWORD *)(a1 + 12);
        if ( (unsigned __int64)v50 >= MmUserProbeAddress )
          v50 = (_DWORD *)MmUserProbeAddress;
        *v50 = v103.ScanLine;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, MmUserProbeAddress);
        if ( v96 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v94);
        }
        return 0LL;
      }
LABEL_96:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v48);
      if ( !v96 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return (unsigned int)SessionDataForSpecifiedSession;
      goto LABEL_98;
    }
    v83 = (_QWORD *)WdLogNewEntry5_WdEvent(v47, v46);
    v83[3] = v45;
    v83[4] = v101[0];
    v83[5] = -1071774912LL;
    WdLogEvent5_WdEvent(v83);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v104, v84);
    if ( v99 )
      DXGADAPTER::ReleaseReference(v99);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v85);
    if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v86, &EventProfilerExit, v87, v94);
    return 3223192384LL;
  }
}
