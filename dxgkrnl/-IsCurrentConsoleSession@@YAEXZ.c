/*
 * XREFs of ?IsCurrentConsoleSession@@YAEXZ @ 0x1C003EFBC
 * Callers:
 *     DxgkEscape @ 0x1C01A3EE0 (DxgkEscape.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1C01E4F40 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B3618 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C030E6C0 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

bool IsCurrentConsoleSession(void)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONMGR *SessionMgr; // rbx

  Global = DXGGLOBAL::GetGlobal();
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  return (unsigned int)PsGetCurrentProcessSessionId() == *((_DWORD *)SessionMgr + 36);
}
