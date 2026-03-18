/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C01F16B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C00052E0 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000763C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00076E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0007998 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0008248 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rsi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r14
  __int64 v10; // rbx
  struct DXGADAPTER *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGADAPTER *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int VidPnSourceOwnerType; // eax
  unsigned int v32; // eax
  __int64 v33; // rcx
  bool v34; // sf
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // [rsp+20h] [rbp-88h]
  DXGADAPTER *v40; // [rsp+50h] [rbp-58h] BYREF
  int v41; // [rsp+60h] [rbp-48h] BYREF
  __int64 v42; // [rsp+68h] [rbp-40h]
  char v43; // [rsp+70h] [rbp-38h]
  _BYTE v44[8]; // [rsp+78h] [rbp-30h] BYREF
  struct DXGADAPTER *v45; // [rsp+80h] [rbp-28h]
  char v46; // [rsp+88h] [rbp-20h]
  struct DXGADAPTER *v47; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v48; // [rsp+C0h] [rbp+18h]

  v3 = (__int64 *)a1;
  v41 = -1;
  v42 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v43 = 1;
    v41 = 2058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2058);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2058);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( !Current )
  {
    v21 = -1073741811;
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 )
      return v21;
    v34 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_38:
    if ( v34 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v41);
    return v21;
  }
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v32 = PsGetCurrentProcessSessionId(v6);
    v21 = -1073741811;
    WdLogSingleEntry2(2LL, v32, -1073741811LL);
    v39 = (unsigned int)PsGetCurrentProcessSessionId(v33);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DxgkCheckVidPnExclusiveOwnership is not called from a valid session (session ID = 0x%I64x), returning 0x%I64x",
      v39,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_20;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v10 = *v3;
  v48 = v10;
  v47 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v40, v10, (struct _KTHREAD **)Current, &v47, 1);
  v11 = v47;
  if ( !v47 )
  {
    v35 = (unsigned int)v10;
    v21 = -1073741811;
    WdLogSingleEntry2(3LL, v35, -1073741811LL);
    goto LABEL_18;
  }
  if ( !(*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 208LL))() )
  {
    v21 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = -1071775738LL;
    goto LABEL_34;
  }
  if ( !*((_QWORD *)v11 + 365) )
  {
    v21 = -1073741811;
    WdLogSingleEntry2(3LL, v11, -1073741811LL);
LABEL_18:
    if ( v40 )
      DXGADAPTER::ReleaseReference(v40);
    goto LABEL_20;
  }
  v45 = v11;
  v46 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
  if ( *((_DWORD *)v11 + 50) == 1 )
  {
    v19 = *((_QWORD *)v47 + 365);
    if ( HIDWORD(v48) < *(_DWORD *)(v19 + 96) )
    {
      if ( *((int *)SessionDataForSpecifiedSession + 4630) > 0 )
      {
        v25 = v47;
        v26 = HIDWORD(v48);
        if ( ADAPTER_DISPLAY::IsPartOfDesktop(*((ADAPTER_DISPLAY **)v47 + 365), HIDWORD(v48)) )
        {
          VidPnSourceOwnerType = ADAPTER_DISPLAY::GetVidPnSourceOwnerType(*((ADAPTER_DISPLAY **)v25 + 365), v26);
          if ( (unsigned int)(VidPnSourceOwnerType - 2) <= 1 )
            v21 = -1071775738;
          else
            v21 = VidPnSourceOwnerType == 0 ? 0xC01E000C : 0;
        }
        else
        {
          v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27, v29, v30);
          v38[3] = -1071775739LL;
          v38[4] = v25;
          v38[5] = v26;
          v21 = -1071775739;
        }
      }
      else
      {
        v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v16, v17, v18);
        v21 = -1071775738;
        v20[3] = -1071775738LL;
        v20[4] = v47;
        v20[5] = HIDWORD(v48);
      }
      if ( v46 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
      goto LABEL_18;
    }
    v21 = -1073741811;
    WdLogSingleEntry2(3LL, HIDWORD(v48), -1073741811LL);
    if ( v46 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
LABEL_34:
    if ( v40 )
      DXGADAPTER::ReleaseReference(v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 )
      return v21;
    LOBYTE(v22) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v34 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_38;
  }
  if ( v46 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
  if ( v40 )
    DXGADAPTER::ReleaseReference(v40);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
  if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v41);
  return 3221226166LL;
}
