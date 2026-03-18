/*
 * XREFs of DxgkSessionDisconnected @ 0x1C01E4500
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0007B4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008140 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C017F1B0 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A90A0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C01E46B8 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C01E4710 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C032E8E0 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  __int64 v4; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v9; // rbx
  int v10; // [rsp+20h] [rbp-30h] BYREF
  __int64 v11; // [rsp+28h] [rbp-28h]
  char v12; // [rsp+30h] [rbp-20h]
  _BYTE v13[8]; // [rsp+38h] [rbp-18h] BYREF
  DXGPUSHLOCK *v14; // [rsp+40h] [rbp-10h]
  int v15; // [rsp+48h] [rbp-8h]
  __int64 v16; // [rsp+68h] [rbp+18h] BYREF

  v10 = -1;
  v3 = a1;
  v11 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v12 = 1;
    v10 = 2198;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2198);
  }
  else
  {
    v12 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v10, 2198);
  DxgkIncreaseSessionAdapterUniqueness();
  if ( v3 )
  {
    v16 = -300000000LL;
    LOBYTE(v4) = 1;
    DxgkMiracastStopAllMiracastSessions(v4, &v16, 129LL);
    Global = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_940d064d943a20fd52938170853ed62c_::_lambda_invoker_cdecl_,
      0LL,
      0);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v9 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)RemoteOutputDuplMgr + 3, 0);
      DXGPUSHLOCK::AcquireExclusive(v14);
      *((_DWORD *)v9 + 18) = 0;
      v15 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v9);
    }
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v10);
  if ( v12 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v6, &EventProfilerExit, v7, v10);
  }
}
