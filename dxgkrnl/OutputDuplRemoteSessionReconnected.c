/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x1C032C60C
 * Callers:
 *     DxgkSessionReconnected @ 0x1C01E5250 (DxgkSessionReconnected.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007104 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C01A89D0 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0329F40 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(unsigned int a1)
{
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v3; // rbx
  int v4; // eax
  _BYTE v5[8]; // [rsp+50h] [rbp-28h] BYREF
  DXGPUSHLOCK *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]

  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  v3 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v5, (struct _KTHREAD **)RemoteOutputDuplMgr + 3, 0);
    DXGPUSHLOCK::AcquireExclusive(v6);
    v7 = 2;
    v4 = OUTPUTDUPL_MGR::ReconfigureNumSources(v3, a1);
    if ( v4 != -1073741801 )
    {
      if ( v4 >= 0 )
      {
        *((_DWORD *)v3 + 18) = 1;
      }
      else
      {
        WdLogSingleEntry1(1LL, 3960LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"(Status == STATUS_NO_MEMORY) || NT_SUCCESS(Status)",
          3960LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  }
}
