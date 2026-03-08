/*
 * XREFs of ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0326A90
 * Callers:
 *     DxgkCreateOutputDupl @ 0x1C032B210 (DxgkCreateOutputDupl.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C000AB38 (-Acquire@DXGUSERCRIT@@QEAAXH@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C017B030 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C017C498 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0326320 (-CompleteInitialization@OUTPUTDUPL_MGR@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0326460 (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C03267E4 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 *     ?OutputDuplIsAllowedByMdmPolicy@@YA_NXZ @ 0x1C03292C0 (-OutputDuplIsAllowedByMdmPolicy@@YA_NXZ.c)
 */

__int64 __fastcall DxgkCreateOutputDuplInternal(
        struct _D3DKMT_CREATE_OUTPUTDUPL *a1,
        struct _D3DKMT_CREATE_OUTPUTDUPL_FLAGS *a2,
        __int64 a3)
{
  struct DXGADAPTER *v3; // r13
  __int64 v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  const wchar_t *v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  int v18; // eax
  int v19; // eax
  struct DXGADAPTER **v20; // r9
  D3DKMT_HANDLE hAdapter; // edx
  int v22; // eax
  struct DXGADAPTER *v23; // r12
  struct DXGADAPTER *v24; // rsi
  struct DXGADAPTER *v25; // rdx
  int OutputDuplManager; // eax
  OUTPUTDUPL_MGR *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  DXGSESSIONMGR *v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v33; // eax
  struct DXGSESSIONDATA *v34; // rax
  OUTPUTDUPL_SESSION_MGR *v35; // r15
  __int64 v36; // rbx
  const wchar_t *v37; // r9
  unsigned int v38; // eax
  __int64 v39; // rsi
  UINT KeyedMutexCount; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  int OutputDuplication; // eax
  __int64 v43; // rcx
  struct DXGPROCESS *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r8
  int v49; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGADAPTER *v50; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 Current; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v52[8]; // [rsp+68h] [rbp-98h] BYREF
  DXGPUSHLOCK *v53; // [rsp+70h] [rbp-90h]
  int v54; // [rsp+78h] [rbp-88h]
  struct DXGADAPTER *v55; // [rsp+80h] [rbp-80h] BYREF
  struct DXGADAPTER *v56; // [rsp+88h] [rbp-78h] BYREF
  OUTPUTDUPL_MGR *v57; // [rsp+90h] [rbp-70h] BYREF
  int v58; // [rsp+98h] [rbp-68h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-60h]
  char v60; // [rsp+A8h] [rbp-58h]
  DXGADAPTER *v61; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v62[144]; // [rsp+C0h] [rbp-40h] BYREF

  v58 = -1;
  v3 = 0LL;
  v59 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v60 = 1;
    v58 = 2061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2061);
  }
  else
  {
    v60 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v58, 2061);
  if ( (unsigned __int64)a1 <= MmUserProbeAddress )
  {
    WdLogSingleEntry1(1LL, 3171LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(ULONG_PTR)pCreate > MM_USER_PROBE_ADDRESS",
      3171LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Current = (unsigned __int64)DXGPROCESS::GetCurrent(v6);
  v7 = Current;
  if ( !Current )
  {
    v8 = 3176LL;
    WdLogSingleEntry1(2LL, 3176LL);
    v9 = L"Invalid process context.";
    LODWORD(v10) = -1073741811;
LABEL_18:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_66;
  }
  v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v13 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12, v11, v14, v15);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v13, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( *((_DWORD *)SessionDataForSpecifiedSession + 4738) )
  {
    v8 = 3184LL;
    WdLogSingleEntry1(2LL, 3184LL);
    v9 = L"Screen capture (DDA) is disabled in VAIL container";
    LODWORD(v10) = -1073741790;
    goto LABEL_18;
  }
  if ( !OutputDuplIsAllowedByMdmPolicy() )
  {
    v8 = 3191LL;
    WdLogSingleEntry1(2LL, 3191LL);
    v9 = L"Screen capture (DDA) is disabled because of MDM policy";
    LODWORD(v10) = -1073741790;
    goto LABEL_18;
  }
  v18 = (*(_DWORD *)a2 ^ (32 * DxgIsRemoteSessionUsingXddmMonitors())) & 0x20;
  v49 = 0;
  *(_DWORD *)a2 ^= v18;
  (*(void (__fastcall **)(int *, _QWORD, _QWORD))(*(_QWORD *)(v7 + 88) + 224LL))(&v49, 0LL, 0LL);
  if ( !v49 )
  {
    v8 = 3203LL;
    WdLogSingleEntry1(2LL, 3203LL);
    v9 = L"Output duplication is not supported on disconnected session";
    LODWORD(v10) = -2147483611;
    goto LABEL_18;
  }
  v19 = *(_DWORD *)a2;
  v20 = &v50;
  hAdapter = a1->hAdapter;
  v50 = 0LL;
  if ( (v19 & 0x20) != 0 )
    v20 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v61, hAdapter, (struct _KTHREAD **)v7, v20, 1);
  v22 = *(_DWORD *)a2;
  LODWORD(v10) = 0;
  v57 = 0LL;
  v23 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  if ( (v22 & 0x20) == 0 )
  {
    v24 = v50;
    if ( !v50 )
    {
      v25 = (struct DXGADAPTER *)a1->hAdapter;
      v10 = -1073741811LL;
LABEL_26:
      WdLogSingleEntry2(3LL, v25, v10);
      goto LABEL_64;
    }
    OutputDuplManager = FindOutputDuplManager(
                          v50,
                          a1->VidPnSourceId,
                          &v55,
                          (unsigned __int64 *)&v50,
                          &v56,
                          &Current,
                          &v57);
    v10 = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      v25 = v24;
      goto LABEL_26;
    }
    v23 = v55;
    v3 = v56;
    v27 = v57;
    goto LABEL_37;
  }
  v30 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v30
    && (v33 = PsGetCurrentProcessSessionId(v29, v28, v31, v32),
        (v34 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v30, v33)) != 0LL) )
  {
    v35 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)v34 + 1);
    if ( v35 )
    {
      v27 = (OUTPUTDUPL_MGR *)*((_QWORD *)v35 + 15);
      if ( !v27 )
      {
        v38 = (*(__int64 (**)(void))(*(_QWORD *)(Current + 88) + 328LL))();
        v39 = v38;
        LODWORD(v10) = OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(v35, v38);
        if ( (int)v10 < 0 )
        {
          WdLogSingleEntry1(2LL, (unsigned int)v39);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create remote output duplication manager for 0x%I64x sources",
            v39,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_64;
        }
        v27 = (OUTPUTDUPL_MGR *)*((_QWORD *)v35 + 15);
      }
      v7 = Current;
LABEL_37:
      KeyedMutexCount = a1->KeyedMutexCount;
      if ( KeyedMutexCount )
      {
        if ( KeyedMutexCount > 3 )
        {
          WdLogSingleEntry1(2LL, a1->KeyedMutexCount);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid KeyedMutexCount specified 0x%I64x",
            a1->KeyedMutexCount,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v10) = -1073741811;
          goto LABEL_64;
        }
        *(_DWORD *)a2 &= ~0x10u;
      }
      else
      {
        *(_DWORD *)a2 |= 0x10u;
      }
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v62, v23, v3);
      if ( (*(_DWORD *)a2 & 0x20) == 0 )
      {
        DXGADAPTER::ReleaseReference(v23);
        DXGADAPTER::ReleaseReference(v3);
        LODWORD(v10) = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v62, 0LL);
        if ( (int)v10 < 0 )
          goto LABEL_48;
      }
      VidPnSourceId = a1->VidPnSourceId;
      if ( VidPnSourceId >= *((_DWORD *)v27 + 19) )
      {
        WdLogSingleEntry1(2LL, VidPnSourceId);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid source ID 0x%I64x",
          a1->VidPnSourceId,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v10) = -1071774972;
LABEL_48:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
        goto LABEL_64;
      }
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v52, (struct _KTHREAD **)v27 + 3, 0);
      DXGPUSHLOCK::AcquireExclusive(v53);
      v54 = 2;
      if ( !*((_DWORD *)v27 + 18) )
      {
        WdLogSingleEntry1(2LL, 3325LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Connection currently not allowed",
          3325LL,
          0LL,
          0LL,
          0LL,
          0LL);
        LODWORD(v10) = -2147483611;
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
        goto LABEL_48;
      }
      if ( (*(_DWORD *)a2 & 1) != 0 )
      {
        if ( (*(_DWORD *)a2 & 0x10) != 0 )
          goto LABEL_54;
        OutputDuplication = OUTPUTDUPL_MGR::CompleteInitialization(v27, a1);
      }
      else
      {
        OutputDuplication = OUTPUTDUPL_MGR::CreateOutputDuplication(v27, a1, a2);
      }
      LODWORD(v10) = OutputDuplication;
LABEL_54:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v52);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v62);
      if ( (int)v10 >= 0 && (*(_DWORD *)a2 & 1) != 0 && (*(_DWORD *)a2 & 0x10) == 0 )
      {
        v44 = DXGPROCESS::GetCurrent(v43);
        v45 = v44 ? *((_QWORD *)v44 + 11) : 0LL;
        v53 = (DXGPUSHLOCK *)v7;
        LOBYTE(v54) = 0;
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v52, 1u);
        (*(void (**)(void))(v45 + 192))();
        if ( (_BYTE)v54 )
        {
          LOBYTE(v54) = 0;
          (*(void (**)(void))(*((_QWORD *)v53 + 11) + 40LL))();
        }
      }
      goto LABEL_64;
    }
    v36 = 3257LL;
    WdLogSingleEntry1(2LL, 3257LL);
    v37 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
    v36 = 3250LL;
    WdLogSingleEntry1(2LL, 3250LL);
    v37 = L"DXGSESSIONDATA is NULL";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v37, v36, 0LL, 0LL, 0LL, 0LL);
  LODWORD(v10) = -1073741801;
LABEL_64:
  if ( v61 )
    DXGADAPTER::ReleaseReference(v61);
LABEL_66:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v58);
  if ( v60 )
  {
    LOBYTE(v46) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v58);
  }
  return (unsigned int)v10;
}
