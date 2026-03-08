/*
 * XREFs of DxgkReleaseGdiViewId @ 0x1C03521F8
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C01F17F0 (DpiFdoStartAdapter.c)
 *     DpiGdoDestroyGdiObjects @ 0x1C03A5B8C (DpiGdoDestroyGdiObjects.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z @ 0x1C0350E8C (-ReleaseSessionGdiViewId@DXGSESSIONDATA@@QEAAXKE@Z.c)
 */

void __fastcall DxgkReleaseGdiViewId(char a1, __int64 a2, unsigned __int32 a3, char a4)
{
  unsigned int v6; // esi
  struct DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v6 = a2;
  if ( a1 )
  {
    Global = DXGGLOBAL::GetGlobal();
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                       *((DXGSESSIONMGR **)Global + 118),
                                       v6);
    if ( SessionDataForSpecifiedSession )
      DXGSESSIONDATA::ReleaseSessionGdiViewId(SessionDataForSpecifiedSession, a3, a4);
  }
  else
  {
    LOBYTE(a2) = a4;
    DMgrReleaseGdiViewId(a3, a2);
  }
}
