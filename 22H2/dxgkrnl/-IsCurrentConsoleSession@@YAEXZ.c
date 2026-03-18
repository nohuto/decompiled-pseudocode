/*
 * XREFs of ?IsCurrentConsoleSession@@YAEXZ @ 0x1C003FFAC
 * Callers:
 *     DxgkEscape @ 0x1C01B43F0 (DxgkEscape.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z @ 0x1C01F3860 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@PEAKAEAE@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02B84D8 (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ @ 0x1C03134F0 (-GetSessionMgr@DXGGLOBAL@@QEAAPEAVDXGSESSIONMGR@@XZ.c)
 */

bool IsCurrentConsoleSession(void)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONMGR *SessionMgr; // rbx

  Global = DXGGLOBAL::GetGlobal();
  SessionMgr = DXGGLOBAL::GetSessionMgr(Global);
  return (unsigned int)PsGetCurrentProcessSessionId() == *((_DWORD *)SessionMgr + 36);
}
