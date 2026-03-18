/*
 * XREFs of DxgkSessionReconnected @ 0x1C01F3B70
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
 *     OutputDuplRemoteSessionReconnected @ 0x1C033104C (OutputDuplRemoteSessionReconnected.c)
 */

void __fastcall DxgkSessionReconnected(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // edi
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rbx
  int v14; // [rsp+58h] [rbp-21h] BYREF
  __int64 v15; // [rsp+60h] [rbp-19h]
  char v16; // [rsp+68h] [rbp-11h]
  _QWORD v17[10]; // [rsp+70h] [rbp-9h] BYREF

  v14 = -1;
  v15 = 0LL;
  v4 = (unsigned __int8)a1;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v16 = 1;
    v14 = 2199;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2199);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 2199);
  DxgkLogCodePointPacket(0x6Du, 6u, v4, 0, 0LL);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( (_BYTE)v4 )
  {
    Global = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((CTTMDEVICE ***)Global + 118), 1);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 76196) )
    {
      memset(v17, 0, 0x48uLL);
      EtwActivityIdControl(3u, (LPGUID)&v17[1]);
      v17[8] = MEMORY[0xFFFFF78000000014];
      LODWORD(v17[3]) = 63;
      LOBYTE(v17[6]) = -1;
      v12 = DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v17, 0x200000000uLL);
      if ( v12 < 0 )
      {
        v13 = v12;
        WdLogSingleEntry1(2LL, v12);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed DxgkRequestAsyncDisplaySwitchCallout for HDR power policy change(Status = 0x%I64x).",
          v13,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      *((_DWORD *)DXGGLOBAL::GetGlobal() + 76196) = 0;
    }
  }
  else
  {
    OutputDuplRemoteSessionReconnected(a2);
  }
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v7 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
      *((_BYTE *)SessionDataForSpecifiedSession + 18496) = 1;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v14);
  }
}
