/*
 * XREFs of ?IsTdrAdapterUsedInSessionCallback@CTDR_GDI_RESET_THREAD@@KAEPEAXW4_SESSION_CALLBACK_REASON@@K@Z @ 0x1C0308F00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

char __fastcall CTDR_GDI_RESET_THREAD::IsTdrAdapterUsedInSessionCallback(__int64 a1, int a2, unsigned int a3)
{
  struct DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v7; // rcx

  if ( a2 || a3 == (unsigned int)RtlGetActiveConsoleId() )
    goto LABEL_9;
  Global = DXGGLOBAL::GetGlobal();
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     *((DXGSESSIONMGR **)Global + 118),
                                     a3);
  if ( !SessionDataForSpecifiedSession )
    return (char)SessionDataForSpecifiedSession;
  v7 = *(_QWORD *)(a1 + 32);
  SessionDataForSpecifiedSession = *(struct DXGSESSIONDATA **)((char *)SessionDataForSpecifiedSession + 18508);
  if ( !v7 )
  {
    if ( !HIDWORD(SessionDataForSpecifiedSession) )
    {
      LOBYTE(SessionDataForSpecifiedSession) = (_DWORD)SessionDataForSpecifiedSession != 0;
      return (char)SessionDataForSpecifiedSession;
    }
LABEL_9:
    LOBYTE(SessionDataForSpecifiedSession) = 1;
    return (char)SessionDataForSpecifiedSession;
  }
  LOBYTE(SessionDataForSpecifiedSession) = SessionDataForSpecifiedSession == *(struct DXGSESSIONDATA **)(v7 + 404);
  return (char)SessionDataForSpecifiedSession;
}
