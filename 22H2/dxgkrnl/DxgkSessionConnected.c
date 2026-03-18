/*
 * XREFs of DxgkSessionConnected @ 0x1C01E45B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01E46B8 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01E4944 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C0316170 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

void __fastcall DxgkSessionConnected(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rbx
  int v13; // [rsp+58h] [rbp-21h] BYREF
  __int64 v14; // [rsp+60h] [rbp-19h]
  char v15; // [rsp+68h] [rbp-11h]
  _QWORD v16[10]; // [rsp+70h] [rbp-9h] BYREF

  v13 = -1;
  v14 = 0LL;
  v3 = (unsigned __int8)a1;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 2196;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2196);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 2196);
  DxgkLogCodePointPacket(0x6Du, 4u, v3, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( (_BYTE)v3 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)Global + 118), 1u);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76196) )
    {
      memset(v16, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v16[1]);
      v16[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v16[3]) = 63;
      LOBYTE(v16[6]) = -1;
      v11 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v16, 0x200000000uLL);
      if ( v11 < 0 )
      {
        v12 = v11;
        WdLogSingleEntry1(2LL, v11);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v12,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76196) = 0;
    }
  }
  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
      *((_BYTE *)SessionDataForSpecifiedSession + 18496) = 1;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v13);
  }
}
