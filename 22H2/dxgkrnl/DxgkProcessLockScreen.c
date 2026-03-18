/*
 * XREFs of DxgkProcessLockScreen @ 0x1C016BEC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C017F1B0 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C01E1158 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C032E290 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkProcessLockScreen(__int64 a1, __int64 a2, __int64 a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  int v7; // [rsp+50h] [rbp-28h] BYREF
  __int64 v8; // [rsp+58h] [rbp-20h]
  char v9; // [rsp+60h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v9 = 1;
    v7 = 2194;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2194);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v7, 2194);
  if ( DXGPROCESS::GetCurrent() )
  {
    if ( (unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
      if ( RemoteOutputDuplMgr )
        OUTPUTDUPL_MGR::ProcessLockScreenActive(RemoteOutputDuplMgr);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::IterateAdaptersWithCallback(Global, ProcessLockScreenAdapterCallback, 0LL, 4LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 3992LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid process context.", 3992LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v4, &EventProfilerExit, v5, v7);
  }
}
