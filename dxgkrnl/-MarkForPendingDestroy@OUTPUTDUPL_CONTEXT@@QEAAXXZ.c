/*
 * XREFs of ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C032DCF8
 * Callers:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C01D2394 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0325750 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0325D6C (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C032FAA0 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(OUTPUTDUPL_CONTEXT *this)
{
  unsigned int v1; // edi
  DXGSESSIONMGR *v3; // rbx
  unsigned int ProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v1 = 0;
  if ( *((_DWORD *)this + 72) )
  {
    WdLogSingleEntry1(1LL, 2423LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_bPendingDestroy", 2423LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v3 )
  {
    if ( !*((_DWORD *)this + 76) )
    {
      WdLogSingleEntry1(1LL, 2434LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_SessionRefAdded", 2434LL, 0LL, 0LL, 0LL, 0LL);
    }
    ProcessSessionId = PsGetProcessSessionId(*((_QWORD *)this + 3));
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v3, ProcessSessionId);
    OUTPUTDUPL_CONTEXT::ReleaseSessionReference(this, SessionDataForSpecifiedSession);
    *((_DWORD *)this + 76) = 0;
    if ( !*((_DWORD *)this + 72) )
    {
      *((_DWORD *)this + 72) = 1;
      if ( *((_DWORD *)this + 10) )
      {
        do
        {
          DXGDXGIKEYEDMUTEX::Abandon(*((DXGDXGIKEYEDMUTEX **)this + v1 + 6));
          DXGDXGIKEYEDMUTEX::CloseConsumerResources(*((struct _KPROCESS ***)this + v1++ + 6));
        }
        while ( v1 < *((_DWORD *)this + 10) );
      }
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, 2429LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"DXGSESSIONDATA is NULL", 2429LL, 0LL, 0LL, 0LL, 0LL);
  }
}
