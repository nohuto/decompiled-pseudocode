/*
 * XREFs of DxgkGetUseHWGPUInRemoteSession @ 0x1C01F3FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A8230 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

char DxgkGetUseHWGPUInRemoteSession()
{
  __int64 v0; // rcx
  DXGSESSIONMGR *v1; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v1 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v1
    && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v0),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v1, CurrentProcessSessionId)) != 0LL) )
  {
    return *((_BYTE *)SessionDataForSpecifiedSession + 18505);
  }
  else
  {
    return 0;
  }
}
