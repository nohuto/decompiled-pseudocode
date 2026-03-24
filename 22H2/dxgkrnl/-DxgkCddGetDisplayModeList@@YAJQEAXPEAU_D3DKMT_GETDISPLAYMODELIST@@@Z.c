/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C014E110
 * Callers:
 *     <none>
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000A3B8 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C0120374 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C014E2EC (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C014E5F8 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  int PairingAdapters; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  struct DXGADAPTER *v11; // r14
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int DisplayModeList; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int8 v45; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v46[7]; // [rsp+41h] [rbp-BFh] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST Src; // [rsp+48h] [rbp-B8h] BYREF
  struct DXGADAPTER *v48; // [rsp+60h] [rbp-A0h] BYREF
  int v49; // [rsp+68h] [rbp-98h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h]
  char v51; // [rsp+78h] [rbp-88h]
  unsigned __int64 v52; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v53[144]; // [rsp+90h] [rbp-70h] BYREF

  v49 = -1;
  v50 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v51 = 1;
    v49 = 3004;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3004);
  }
  else
  {
    v51 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v49, 3004LL);
  v45 = 0;
  memset(&Src, 0, sizeof(Src));
  if ( a1 )
  {
    v48 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, 0LL, &v48, &v52, 0);
    v10 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v8);
      v34[3] = a1;
      v34[4] = a2->VidPnSourceId;
      v34[5] = v10;
      WdLogEvent5_WdEvent(v34);
    }
    else
    {
      v11 = v48;
      if ( !v48 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v9, v8);
        *(_QWORD *)(v35 + 24) = 1254LL;
        WdLogEvent5_WdAssertion(v35);
      }
      DxgkWaitForMonitorEventDoneInternal(v11);
      v46[0] = 0;
      v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)v46, 0);
      v15 = v12;
      if ( v12 < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v36 + 24) = v15;
        WdLogEvent5_WdError(v36);
        LODWORD(v10) = v15;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v53, v11, 0LL);
        DXGADAPTER::ReleaseReference(v11);
        v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v53, 0LL);
        v10 = v16;
        if ( v16 < 0 )
        {
          v37 = (_QWORD *)WdLogNewEntry5_WdEvent(v18, v17);
          v37[3] = v10;
          v37[4] = PsGetCurrentProcess(v39, v38, v40, v41);
          v37[5] = a2->hAdapter;
          v37[6] = v11;
          WdLogEvent5_WdEvent(v37);
        }
        else
        {
          if ( !*((_QWORD *)v11 + 337) )
          {
            v42 = WdLogNewEntry5_WdAssertion(v18, v17);
            *(_QWORD *)(v42 + 24) = 1294LL;
            WdLogEvent5_WdAssertion(v42);
          }
          Src.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(v11, (struct COREADAPTERACCESS *)v53, 0, &Src, &v45);
          v10 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v43 = WdLogNewEntry5_WdDmmEvent(v21);
            *(_QWORD *)(v43 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v43 + 32) = v10;
            WdLogEvent5_WdDmmEvent(v43);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < Src.ModeCount )
              {
                v44 = WdLogNewEntry5_WdWarning(pModeList, v20, v22);
                *(_QWORD *)(v44 + 24) = a2->ModeCount;
                *(_QWORD *)(v44 + 32) = Src.ModeCount;
                WdLogEvent5_WdWarning(v44);
                LODWORD(v10) = -1073741789;
              }
              else
              {
                memmove(pModeList, Src.pModeList, 44LL * Src.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = Src.ModeCount;
            }
            if ( v45 )
            {
              operator delete[](Src.pModeList);
              Src.pModeList = 0LL;
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v53, v20);
      }
      if ( v46[0] )
        DxgkReleaseSessionModeChangeLock(v25, v24);
    }
  }
  else
  {
    LODWORD(v10) = -1073741811;
    v29 = (_QWORD *)WdLogNewEntry5_WdError(v6, v5);
    v29[3] = -1073741811LL;
    v29[4] = PsGetCurrentProcess(v31, v30, v32, v33);
    v29[5] = a2->hAdapter;
    WdLogEvent5_WdError(v29);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v49, v24);
  if ( v51 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v49);
  return (unsigned int)v10;
}
