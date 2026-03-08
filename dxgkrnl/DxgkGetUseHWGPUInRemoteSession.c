/*
 * XREFs of DxgkGetUseHWGPUInRemoteSession @ 0x1C01E56C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C01A9568 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 */

char DxgkGetUseHWGPUInRemoteSession()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  DXGSESSIONMGR *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax

  v2 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( v2
    && (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v1, v0, v3, v4),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v2, CurrentProcessSessionId)) != 0LL) )
  {
    return *((_BYTE *)SessionDataForSpecifiedSession + 18505);
  }
  else
  {
    return 0;
  }
}
