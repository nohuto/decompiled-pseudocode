/*
 * XREFs of DxgkGetDisplayModeList @ 0x1C016FC30
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0001E30 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000202C (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0008C9C (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C001A354 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C0120190 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ @ 0x1C013C5B4 (-DxgIsRemoteSessionUsingWddmMonitors@@YAHXZ.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C01703CC (-ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAXPEAVDXGSESSIONDATA@@@Z.c)
 *     ?AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z @ 0x1C0170400 (-AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@E@Z.c)
 */

__int64 __fastcall DxgkGetDisplayModeList(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // zf
  char v20; // r12
  struct _D3DKMT_GETDISPLAYMODELIST *v21; // rax
  bool v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGADAPTER *v26; // rsi
  _QWORD *v27; // rax
  int PairingAdapters; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  bool v36; // zf
  struct DXGADAPTER *v38; // r15
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  PRKPROCESS *v46; // rsi
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  struct DXGGLOBAL *Global; // rax
  unsigned __int8 v54; // dl
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  int v58; // ebx
  int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // r14
  _QWORD *v62; // rax
  __int64 hAdapter; // rcx
  ADAPTER_DISPLAY *v64; // rcx
  __int64 j; // rdx
  __int64 ModeCount; // rcx
  int v67; // r12d
  unsigned __int64 v68; // rax
  UINT v69; // r12d
  ULONG64 v70; // r13
  __int64 v71; // rsi
  __int64 v72; // rbx
  size_t v73; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rdx
  char *v75; // rcx
  UINT i; // r8d
  struct DXGSESSIONDATA *v77; // rbx
  struct DXGGLOBAL *v78; // rax
  __int64 v79; // rdx
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  unsigned __int8 v83[4]; // [rsp+40h] [rbp-1A8h] BYREF
  int v84; // [rsp+44h] [rbp-1A4h]
  int v85; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v86; // [rsp+50h] [rbp-198h]
  char v87; // [rsp+58h] [rbp-190h]
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+60h] [rbp-188h] BYREF
  UINT v89; // [rsp+78h] [rbp-170h]
  int v90; // [rsp+7Ch] [rbp-16Ch]
  int v91; // [rsp+80h] [rbp-168h]
  struct DXGADAPTER *v92; // [rsp+88h] [rbp-160h] BYREF
  struct DXGADAPTER *v93; // [rsp+90h] [rbp-158h] BYREF
  ULONG64 v94; // [rsp+98h] [rbp-150h]
  struct DXGSESSIONDATA *v95; // [rsp+A0h] [rbp-148h]
  struct _KTHREAD **v96; // [rsp+A8h] [rbp-140h]
  DXGADAPTER *v97[2]; // [rsp+B0h] [rbp-138h] BYREF
  unsigned __int64 v98; // [rsp+C0h] [rbp-128h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+C8h] [rbp-120h] BYREF
  char v100; // [rsp+F8h] [rbp-F0h]
  _BYTE v101[144]; // [rsp+100h] [rbp-E8h] BYREF
  __m128i si128; // [rsp+190h] [rbp-58h]
  int v103; // [rsp+1A0h] [rbp-48h]
  int v104; // [rsp+1A4h] [rbp-44h]
  int v105; // [rsp+1A8h] [rbp-40h]

  v94 = a1;
  v85 = -1;
  v86 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v87 = 1;
    v85 = 2017;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2017);
  }
  else
  {
    v87 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v85, 2017LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v96 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12, v14, v15);
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85, v16);
    v19 = v87 == 0;
LABEL_25:
    if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v85);
    return 3221225485LL;
  }
  v83[0] = 0;
  v20 = 0;
  v21 = (struct _D3DKMT_GETDISPLAYMODELIST *)a1;
  if ( a1 >= MmUserProbeAddress )
    v21 = (struct _D3DKMT_GETDISPLAYMODELIST *)MmUserProbeAddress;
  Src = *v21;
  v22 = Src.pModeList != 0LL;
  Src.pModeList = 0LL;
  v92 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v97, Src.hAdapter, Current, &v92, 1);
  v26 = v92;
  if ( !v92 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v27[3] = -1073741811LL;
    v27[4] = Current;
    v27[5] = Src.hAdapter;
    WdLogEvent5_WdWarning(v27);
LABEL_24:
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v97);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85, v57);
    v19 = v87 == 0;
    goto LABEL_25;
  }
  v93 = 0LL;
  v98 = 0LL;
  PairingAdapters = DxgkpGetPairingAdapters(v92, Src.VidPnSourceId, 0LL, 0LL, &v93, &v98, 0);
  v31 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v30, v29);
    v32[3] = v26;
    v32[4] = Src.VidPnSourceId;
    v32[5] = v31;
    WdLogEvent5_WdEvent(v32);
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v97);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85, v33);
    v36 = v87 == 0;
    goto LABEL_13;
  }
  v38 = v93;
  if ( !v93 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v30, v29);
    *(_QWORD *)(v39 + 24) = 5623LL;
    WdLogEvent5_WdAssertion(v39);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v101, v38, 0LL);
  DXGADAPTER::ReleaseReference(v38);
  if ( (unsigned int)DxgIsRemoteSessionUsingWddmMonitors(v41, v40, v42, v43) )
  {
    v46 = 0LL;
    v95 = 0LL;
    v47 = DxgkAcquireSessionModeChangeLock(0LL, v44);
    v31 = v47;
    if ( v47 < 0 )
    {
      v50 = WdLogNewEntry5_WdError(v49, v48);
      *(_QWORD *)(v50 + 24) = v31;
      WdLogEvent5_WdError(v50);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v101, v51);
      DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v97);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85, v52);
      v36 = v87 == 0;
LABEL_13:
      if ( !v36 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v34, &EventProfilerExit, v35, v85);
      return (unsigned int)v31;
    }
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal(v45, v44);
    v46 = (PRKPROCESS *)DXGSESSIONMGR::AcquireConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)Global + 102), v54);
    v95 = (struct DXGSESSIONDATA *)v46;
    if ( !v46 )
    {
      v55 = WdLogNewEntry5_WdError(v49, v48);
      *(_QWORD *)(v55 + 24) = -1073741811LL;
      WdLogEvent5_WdError(v55);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v101, v56);
      goto LABEL_24;
    }
  }
  v100 = 0;
  if ( v46 )
  {
    v58 = *(_DWORD *)v46;
    if ( (unsigned int)PsGetCurrentProcessSessionId(v49, v48) != v58 )
    {
      v20 = 1;
      CPROCESSATTACHHELPER::Attach(&ApcState, v46[2329]);
    }
  }
  v59 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v101, 0LL);
  v61 = v59;
  v84 = v59;
  if ( v59 < 0 )
  {
    v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v60);
    v62[3] = v61;
    v62[4] = Current;
    hAdapter = Src.hAdapter;
    v62[6] = v38;
LABEL_37:
    v62[5] = hAdapter;
    WdLogEvent5_WdDmmEvent(v62);
    goto LABEL_39;
  }
  v64 = (ADAPTER_DISPLAY *)*((_QWORD *)v38 + 337);
  if ( Src.VidPnSourceId >= *((_DWORD *)v64 + 20) || !ADAPTER_DISPLAY::IsPartOfDesktop(v64, Src.VidPnSourceId) )
  {
    LODWORD(v61) = -1071774972;
    v84 = -1071774972;
    v62 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v64);
    v62[3] = -1071774972LL;
    v62[4] = v38;
    hAdapter = Src.VidPnSourceId;
    goto LABEL_37;
  }
  LODWORD(v61) = DxgkpGetDisplayModeList(v38, (struct COREADAPTERACCESS *)v101, 0, &Src, v83);
  v84 = v61;
LABEL_39:
  if ( v20 && v100 )
  {
    KeUnstackDetachProcess(&ApcState);
    v100 = 0;
  }
  if ( (int)v61 >= 0 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v103 = 31;
    v104 = 119;
    v105 = 113;
    v67 = 1;
    v68 = 7LL;
    if ( !*((_QWORD *)v38 + 338) )
      v67 = 7;
    ModeCount = Src.ModeCount;
    v69 = Src.ModeCount * v67;
    v19 = !v22;
    v70 = v94;
    if ( !v19 )
    {
      if ( *(_DWORD *)(v94 + 16) >= v69 )
      {
        v71 = *(_QWORD *)(v94 + 8);
        v72 = 0LL;
        while ( 1 )
        {
          v90 = v72;
          if ( *((_QWORD *)v38 + 338) )
            v68 = 1LL;
          if ( (unsigned int)v72 >= v68 )
            break;
          v73 = 44LL * (unsigned int)ModeCount;
          pModeList = Src.pModeList;
          v75 = (char *)(v71 + 44LL * (unsigned int)(ModeCount * v72));
          if ( (unsigned __int64)&v75[v73] > MmUserProbeAddress || &v75[v73] <= v75 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v75, pModeList, v73);
          if ( (_DWORD)v72 )
          {
            for ( i = 0; ; ++i )
            {
              v89 = i;
              ModeCount = Src.ModeCount;
              if ( i >= Src.ModeCount )
                break;
              *(_DWORD *)(44LL * (i + Src.ModeCount * (_DWORD)v72) + v71 + 8) = si128.m128i_i32[v72];
            }
          }
          else
          {
            ModeCount = Src.ModeCount;
          }
          v72 = (unsigned int)(v72 + 1);
          v68 = 7LL;
        }
        for ( j = 0LL; ; j = (unsigned int)(j + 1) )
        {
          v91 = j;
          if ( (unsigned int)j >= v69 )
            break;
          if ( Src.pModeList->RefreshRate.Numerator == -2 && Src.pModeList->RefreshRate.Denominator == -2 )
          {
            ModeCount = 44LL * (unsigned int)j;
            *(_DWORD *)(ModeCount + v71 + 16) = 64;
            *(_DWORD *)(ModeCount + v71 + 20) = 1;
            *(_DWORD *)(ModeCount + v71 + 12) = 64;
          }
        }
      }
      else
      {
        LODWORD(v61) = -1073741789;
        v84 = -1073741789;
      }
    }
    *(_DWORD *)(v70 + 16) = v69;
  }
  if ( v83[0] )
  {
    operator delete[](Src.pModeList);
    Src.pModeList = 0LL;
  }
  v77 = v95;
  if ( v95 )
  {
    v78 = DXGGLOBAL::GetGlobal(ModeCount, j);
    DXGSESSIONMGR::ReleaseConsoleSessionModeChangeLock(*((DXGSESSIONMGR **)v78 + 102), v77);
  }
  else
  {
    DxgkReleaseSessionModeChangeLock(ModeCount, j);
  }
  if ( v100 )
  {
    KeUnstackDetachProcess(&ApcState);
    v100 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v101, v79);
  DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v97);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v85, v80);
  if ( v87 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v81, &EventProfilerExit, v82, v85);
  return (unsigned int)v61;
}
