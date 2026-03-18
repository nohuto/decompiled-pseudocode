/*
 * XREFs of DxgkPreSessionDisconnected @ 0x1C01E4400
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0002F24 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C017F1B0 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01E4944 (-SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z.c)
 */

void __fastcall DxgkPreSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  DXGSESSIONMGR *v5; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+38h] [rbp-20h]
  char v14; // [rsp+40h] [rbp-18h]
  char v15; // [rsp+60h] [rbp+8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h]

  v12 = -1;
  v13 = 0LL;
  v3 = (unsigned __int8)a1;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v14 = 1;
    v12 = 2197;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2197);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 2197);
  v16 = 0LL;
  DxgkLogCodePointPacket(0x6Du, 5u, v3, 0, 0LL);
  v5 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v5 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v5, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
      *((_BYTE *)SessionDataForSpecifiedSession + 18496) = 0;
  }
  if ( (_BYTE)v3 )
  {
    Global = DXGGLOBAL::GetGlobal();
    v15 = 0;
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_253e1404844a8379d0c8ce26edd6c7ad_::_lambda_invoker_cdecl_,
      (__int64)&v15,
      1);
    v9 = DXGGLOBAL::GetGlobal();
    DXGSESSIONMGR::SetConsoleSession(*((DXGSESSIONMGR **)v9 + 118), 0);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v12);
  }
}
