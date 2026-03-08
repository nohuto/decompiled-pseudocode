/*
 * XREFs of ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C03267E4
 * Callers:
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0326A90 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ @ 0x1C017C498 (-DxgIsRemoteSessionUsingXddmMonitors@@YAHXZ.c)
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C02140C4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::CreateRemoteOutputDuplMgr(OUTPUTDUPL_SESSION_MGR *this, unsigned int a2)
{
  struct OUTPUTDUPL_MGR **v4; // rbx
  unsigned int OutputDuplManager; // ebx
  _BYTE v7[24]; // [rsp+50h] [rbp-18h] BYREF

  if ( !(unsigned int)DxgIsRemoteSessionUsingXddmMonitors() )
  {
    WdLogSingleEntry1(1LL, 4343LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DxgIsRemoteSessionUsingXddmMonitors()",
      4343LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (OUTPUTDUPL_SESSION_MGR *)((char *)this + 72), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  v4 = (struct OUTPUTDUPL_MGR **)((char *)this + 120);
  if ( *v4 )
    OutputDuplManager = 0;
  else
    OutputDuplManager = CreateOutputDuplManager(a2, 0LL, 0LL, 0LL, v4);
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  return OutputDuplManager;
}
