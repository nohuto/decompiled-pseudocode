/*
 * XREFs of ?DxgkCddSetPalette@@YAJQEAXPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C022E590
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0004EC0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00EAD78 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0101E70 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z @ 0x1C021E6D0 (-DdiSetPalette@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPALETTE@@@Z.c)
 */

__int64 __fastcall DxgkCddSetPalette(struct DXGADAPTER *a1, const struct _DXGKARG_SETPALETTE *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGPROCESS *Current; // rax
  __int64 VidPnSourceId; // rdx
  struct DXGPROCESS *v11; // r15
  int PairingAdapters; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // rsi
  ADAPTER_DISPLAY **v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rcx
  __int64 v32; // r8
  struct DXGADAPTER *v34; // [rsp+40h] [rbp-C0h] BYREF
  struct DXGADAPTER *v35; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  char v38; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v39; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v41[144]; // [rsp+80h] [rbp-80h] BYREF

  v36 = -1;
  v37 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v38 = 1;
    v36 = 3010;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 3010);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v36, 3010LL);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  VidPnSourceId = a2->VidPnSourceId;
  v35 = 0LL;
  v34 = 0LL;
  v11 = Current;
  PairingAdapters = DxgkpGetPairingAdapters(a1, VidPnSourceId, &v35, &v40, &v34, &v39, 0);
  v15 = PairingAdapters;
  if ( PairingAdapters >= 0 )
  {
    v18 = (__int64 *)v35;
    v19 = (ADAPTER_DISPLAY **)v34;
    if ( !v35 || !v34 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v14, v13);
      *(_QWORD *)(v20 + 24) = 2304LL;
      WdLogEvent5_WdAssertion(v20);
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v41,
      (struct DXGADAPTER *const)v18,
      (struct DXGADAPTER *const)v19);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
    DXGADAPTER::ReleaseReference((DXGADAPTER *)v19);
    v21 = COREADAPTERACCESS::AcquireExclusive((__int64)v41, 2LL);
    v15 = v21;
    if ( v21 >= 0 )
    {
      if ( !v18[338] )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v26 + 24) = 2321LL;
        WdLogEvent5_WdAssertion(v26);
      }
      if ( !v19[337] )
      {
        v27 = WdLogNewEntry5_WdAssertion(v23, v22);
        *(_QWORD *)(v27 + 24) = 2322LL;
        WdLogEvent5_WdAssertion(v27);
      }
      ADAPTER_RENDER::FlushScheduler(v18[338], 6, 0xFFFFFFFF, 0);
      v15 = (int)ADAPTER_DISPLAY::DdiSetPalette(v19[337], a2, v28);
      ADAPTER_RENDER::FlushScheduler(v18[338], 7, 0xFFFFFFFF, 0);
      if ( (int)v15 < 0 )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v29, v25);
        v30[3] = v15;
        v30[4] = v19;
        v30[5] = a2->VidPnSourceId;
        v30[6] = v11;
        WdLogEvent5_WdError(v30);
      }
    }
    else
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v22);
      v24[3] = v15;
      v24[4] = v18;
      v24[5] = v19;
      v24[6] = v11;
      WdLogEvent5_WdEvent(v24);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41, v25);
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v16 + 24) = a1;
    *(_QWORD *)(v16 + 32) = v15;
    WdLogEvent5_WdError(v16);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v36, v17);
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v31, &EventProfilerExit, v32, v36);
  return (unsigned int)v15;
}
