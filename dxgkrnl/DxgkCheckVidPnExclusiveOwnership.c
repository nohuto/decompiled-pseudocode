/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C01E2D90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00035F4 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0009274 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v13; // rbx
  struct DXGADAPTER *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rcx
  __int64 v26; // r8
  struct DXGADAPTER *v28; // rbx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int VidPnSourceOwnerType; // eax
  unsigned int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  bool v40; // sf
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  __int64 v45; // [rsp+20h] [rbp-88h]
  DXGADAPTER *v46; // [rsp+50h] [rbp-58h] BYREF
  int v47; // [rsp+60h] [rbp-48h] BYREF
  __int64 v48; // [rsp+68h] [rbp-40h]
  char v49; // [rsp+70h] [rbp-38h]
  _BYTE v50[8]; // [rsp+78h] [rbp-30h] BYREF
  struct DXGADAPTER *v51; // [rsp+80h] [rbp-28h]
  char v52; // [rsp+88h] [rbp-20h]
  struct DXGADAPTER *v53; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v54; // [rsp+C0h] [rbp+18h]

  v3 = (__int64 *)a1;
  v47 = -1;
  v48 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v49 = 1;
    v47 = 2058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2058);
  }
  else
  {
    v49 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v47, 2058);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v24 = -1073741811;
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
LABEL_20:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    if ( !v49 )
      return v24;
    v40 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_38:
    if ( v40 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v47);
    return v24;
  }
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v8 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7, v6, v9, v10);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v35 = PsGetCurrentProcessSessionId(v7, v6, v9, v10);
    v24 = -1073741811;
    WdLogSingleEntry2(2LL, v35, -1073741811LL);
    v45 = (unsigned int)PsGetCurrentProcessSessionId(v37, v36, v38, v39);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCheckVidPnExclusiveOwnership is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v45,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v13 = *v3;
  v54 = v13;
  v53 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v46, v13, (struct _KTHREAD **)Current, &v53, 1);
  v14 = v53;
  if ( !v53 )
  {
    v41 = (unsigned int)v13;
    v24 = -1073741811;
    WdLogSingleEntry2(3LL, v41, -1073741811LL);
    goto LABEL_18;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
  {
    v24 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = -1071775738LL;
    goto LABEL_34;
  }
  if ( !*((_QWORD *)v14 + 365) )
  {
    v24 = -1073741811;
    WdLogSingleEntry2(3LL, v14, -1073741811LL);
LABEL_18:
    if ( v46 )
      DXGADAPTER::ReleaseReference(v46);
    goto LABEL_20;
  }
  v51 = v14;
  v52 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  if ( *((_DWORD *)v14 + 50) == 1 )
  {
    v22 = *((_QWORD *)v53 + 365);
    if ( HIDWORD(v54) < *(_DWORD *)(v22 + 96) )
    {
      if ( *((int *)SessionDataForSpecifiedSession + 4630) > 0 )
      {
        v28 = v53;
        v29 = HIDWORD(v54);
        if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v53 + 365), HIDWORD(v54)) )
        {
          VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v28 + 365), v29);
          if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 1 )
            v24 = -1071775738;
          else
            v24 = VidPnSourceOwnerType == 0 ? 0xC01E000C : 0;
        }
        else
        {
          v44 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v30, v32, v33);
          v44[3] = -1071775739LL;
          v44[4] = v28;
          v44[5] = v29;
          v24 = -1071775739;
        }
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v19, v20, v21);
        v24 = -1071775738;
        v23[3] = -1071775738LL;
        v23[4] = v53;
        v23[5] = HIDWORD(v54);
      }
      if ( v52 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
      goto LABEL_18;
    }
    v24 = -1073741811;
    WdLogSingleEntry2(3LL, HIDWORD(v54), -1073741811LL);
    if ( v52 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
LABEL_34:
    if ( v46 )
      DXGADAPTER::ReleaseReference(v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
    if ( !v49 )
      return v24;
    LOBYTE(v25) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v40 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_38;
  }
  if ( v52 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v50);
  if ( v46 )
    DXGADAPTER::ReleaseReference(v46);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v47);
  if ( v49 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v42, &EventProfilerExit, v43, v47);
  return 3221226166LL;
}
