/*
 * XREFs of DxgkReleaseAdapter @ 0x1C01F3600
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C00076A0 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001B994 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

void __fastcall DxgkReleaseAdapter(DXGADAPTER *a1)
{
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  if ( a1 )
    DXGADAPTER::ReleaseReference(a1);
  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v2 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, CurrentProcessSessionId);
    if ( SessionDataForSpecifiedSession )
      DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, 0LL);
  }
}
