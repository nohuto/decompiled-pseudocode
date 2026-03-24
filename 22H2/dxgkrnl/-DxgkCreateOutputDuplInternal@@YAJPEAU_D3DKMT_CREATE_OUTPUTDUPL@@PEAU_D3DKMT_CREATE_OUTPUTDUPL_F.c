/*
 * XREFs of ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0299B08
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C029D5E0 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000381C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000A41C (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0123B08 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C014F4D8 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02994E0 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C02995EC (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C02998D4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C029C0A0 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDuplInternal(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _KTHREAD **v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 hAdapter; // rdx
  struct DXGADAPTER **v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // eax
  struct DXGADAPTER *v29; // r12
  struct DXGADAPTER *v30; // r13
  struct DXGADAPTER *v31; // r14
  __int64 v32; // rax
  int OutputDuplManager; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  OUTPUTDUPL_MGR *v37; // r14
  DXGSESSIONMGR *v38; // r14
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v41; // rax
  __int64 v42; // r15
  unsigned int v43; // eax
  __int64 v44; // r14
  __int64 v45; // rax
  UINT KeyedMutexCount; // eax
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rax
  int OutputDuplication; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  struct DXGPROCESS *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rcx
  __int64 v62; // r8
  int v64; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v65; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 Current; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v67[8]; // [rsp+58h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v68; // [rsp+60h] [rbp-A0h]
  int v69; // [rsp+68h] [rbp-98h]
  struct DXGADAPTER *v70; // [rsp+70h] [rbp-90h] BYREF
  struct DXGADAPTER *v71; // [rsp+78h] [rbp-88h] BYREF
  OUTPUTDUPL_MGR *v72; // [rsp+80h] [rbp-80h] BYREF
  int v73; // [rsp+88h] [rbp-78h] BYREF
  __int64 v74; // [rsp+90h] [rbp-70h]
  char v75; // [rsp+98h] [rbp-68h]
  DXGADAPTER *v76; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v77[144]; // [rsp+B0h] [rbp-50h] BYREF

  v73 = -1;
  v74 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v75 = 1;
    v73 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2061);
  }
  else
  {
    v75 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v73, 2061LL);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v9 + 24) = 3181LL;
    WdLogEvent5_WdAssertion(v9);
  }
  Current = (unsigned __int64)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  v12 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v13 + 24) = 3186LL;
    WdLogEvent5_WdError(v13);
    LODWORD(v15) = -1073741811;
    goto LABEL_62;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v18 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v18 + 24) = 3193LL;
    WdLogEvent5_WdError(v18);
    LODWORD(v15) = -1073741790;
    goto LABEL_62;
  }
  v64 = 0;
  v19 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ (32
                                        * (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(*(_QWORD *)(Current + 88)
                                                                                           + 224LL))(
                                            &v64,
                                            0LL,
                                            0LL))) & 0x20;
  *(_DWORD *)a2 = v19;
  if ( !v64 )
  {
    v22 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v22 + 24) = 3204LL;
    WdLogEvent5_WdError(v22);
    LODWORD(v15) = -2147483611;
    goto LABEL_62;
  }
  hAdapter = a1->hAdapter;
  v24 = &v65;
  v65 = 0LL;
  if ( (v19 & 0x20) != 0 )
    v24 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v76, hAdapter, v12, v24, 1);
  v28 = *(_DWORD *)a2;
  LODWORD(v15) = 0;
  v70 = 0LL;
  v29 = 0LL;
  v71 = 0LL;
  v30 = 0LL;
  v72 = 0LL;
  if ( (v28 & 0x20) == 0 )
  {
    v31 = v65;
    if ( !v65 )
    {
      v32 = WdLogNewEntry5_WdWarning(v26, v25, v27);
      v15 = -1073741811LL;
      *(_QWORD *)(v32 + 24) = a1->hAdapter;
LABEL_20:
      *(_QWORD *)(v32 + 32) = v15;
      WdLogEvent5_WdWarning(v32);
      goto LABEL_60;
    }
    OutputDuplManager = FindOutputDuplManager(
                          v65,
                          a1->VidPnSourceId,
                          &v70,
                          (unsigned __int64 *)&v65,
                          &v71,
                          &Current,
                          &v72);
    v15 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v32 = WdLogNewEntry5_WdWarning(v35, v34, v36);
      *(_QWORD *)(v32 + 24) = v31;
      goto LABEL_20;
    }
    v29 = v70;
    v30 = v71;
    v37 = v72;
    goto LABEL_35;
  }
  v38 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v26, v25) + 102);
  if ( v38 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v35, v34);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v38, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v41 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v41 + 24) = 3251LL;
LABEL_29:
    WdLogEvent5_WdError(v41);
    LODWORD(v15) = -1073741801;
    goto LABEL_60;
  }
  v42 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v42 )
  {
    v41 = WdLogNewEntry5_WdError(v35, v34);
    *(_QWORD *)(v41 + 24) = 3258LL;
    goto LABEL_29;
  }
  v37 = *(OUTPUTDUPL_MGR **)(v42 + 40);
  if ( !v37 )
  {
    v43 = (*(__int64 (**)(void))(*(_QWORD *)(Current + 88) + 328LL))();
    v44 = v43;
    LODWORD(v15) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr((struct DXGFASTMUTEX *const *)v42, v43);
    if ( (int)v15 < 0 )
    {
      v45 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v45 + 24) = v44;
      WdLogEvent5_WdError(v45);
      goto LABEL_60;
    }
    v37 = *(OUTPUTDUPL_MGR **)(v42 + 40);
  }
  v12 = (struct _KTHREAD **)Current;
LABEL_35:
  KeyedMutexCount = a1->KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    if ( KeyedMutexCount > 3 )
    {
      v47 = WdLogNewEntry5_WdError(v35, v34);
      *(_QWORD *)(v47 + 24) = a1->KeyedMutexCount;
      WdLogEvent5_WdError(v47);
      LODWORD(v15) = -1073741811;
      goto LABEL_60;
    }
    *(_DWORD *)a2 &= ~0x10u;
  }
  else
  {
    *(_DWORD *)a2 |= 0x10u;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v77, v29, v30);
  if ( (*(_DWORD *)a2 & 0x20) != 0
    || (DXGADAPTER::ReleaseReference(v29),
        DXGADAPTER::ReleaseReference(v30),
        LODWORD(v15) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v77, 0LL),
        (int)v15 >= 0) )
  {
    if ( a1->VidPnSourceId >= *((_DWORD *)v37 + 13) )
    {
      v50 = WdLogNewEntry5_WdError(v49, v48);
      *(_QWORD *)(v50 + 24) = a1->VidPnSourceId;
      WdLogEvent5_WdError(v50);
      LODWORD(v15) = -1071774972;
      goto LABEL_46;
    }
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v67, *((struct _KTHREAD ***)v37 + 3), 0);
    DXGPUSHLOCK::AcquireExclusive(v68);
    v69 = 2;
    if ( !*((_DWORD *)v37 + 12) )
    {
      v53 = WdLogNewEntry5_WdError(v52, v51);
      *(_QWORD *)(v53 + 24) = 3326LL;
      WdLogEvent5_WdError(v53);
      LODWORD(v15) = -2147483611;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v67);
      goto LABEL_46;
    }
    if ( (*(_DWORD *)a2 & 1) != 0 )
    {
      if ( (*(_DWORD *)a2 & 0x10) != 0 )
        goto LABEL_53;
      OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v37, a1);
    }
    else
    {
      OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v37, a1, a2);
    }
    LODWORD(v15) = OutputDuplication;
LABEL_53:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v67);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77, v55);
    if ( (int)v15 >= 0 && (*(_DWORD *)a2 & 0x11) == 1 )
    {
      v59 = DXGPROCESS::GetCurrent(v56, v14, v57, v58);
      v60 = v59 ? *((_QWORD *)v59 + 11) : 0LL;
      v68 = (DXGPUSHLOCK *)v12;
      LOBYTE(v69) = 0;
      DXGUSERCRIT::Acquire((DXGUSERCRIT *)v67, 1LL);
      (*(void (**)(void))(v60 + 192))();
      if ( (_BYTE)v69 )
      {
        LOBYTE(v69) = 0;
        (*(void (**)(void))(*((_QWORD *)v68 + 11) + 40LL))();
      }
    }
    goto LABEL_60;
  }
LABEL_46:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v77, v48);
LABEL_60:
  if ( v76 )
    DXGADAPTER::ReleaseReference(v76);
LABEL_62:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v73, v14);
  if ( v75 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v61, &EventProfilerExit, v62, v73);
  return (unsigned int)v15;
}
